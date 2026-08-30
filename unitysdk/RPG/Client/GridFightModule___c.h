#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightHandBookEquipItemType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_472;
namespace RPG::Client { class GridFightAugment; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightHandBookEquipItemConfig; }
namespace RPG::Client { class GridFightHandbookRole; }
namespace RPG::Client { class GridFightMonsterCampConfig; }
namespace RPG::Client { class GridFightPortalData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class GridFightRoleRecommendEquipConfigRow; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTMODULE___C__CANSHOWNEWTRAITQUESTREDDOT_B__240_1_OFFSET UNITYSDK_OFFSET(0xD21A1B0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD219B20)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD219B60)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETALLMONSTERCAMPDATA_B__152_0_OFFSET UNITYSDK_OFFSET(0xD219DF0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETALLMONSTERCAMPDATA_B__152_2_OFFSET UNITYSDK_OFFSET(0xD219E50)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETFIRSTEQUIPITEMLISTBYROLEID_B__227_0_OFFSET UNITYSDK_OFFSET(0xD21A0F0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAUGMENTITEMDATA_B__161_1_OFFSET UNITYSDK_OFFSET(0xD219FD0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAUGMENTITEMDATA_B__161_2_OFFSET UNITYSDK_OFFSET(0xD219FF0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLEQUIPITEMDATA_B__153_1_OFFSET UNITYSDK_OFFSET(0xD219E70)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLEQUIPITEMDATA_B__153_2_OFFSET UNITYSDK_OFFSET(0xD219E90)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLPORTALDATA_B__163_1_OFFSET UNITYSDK_OFFSET(0xD21A050)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKAUGMENTITEMDATABYQUALITY_B__162_1_OFFSET UNITYSDK_OFFSET(0xD21A010)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKAUGMENTITEMDATABYQUALITY_B__162_2_OFFSET UNITYSDK_OFFSET(0xD21A030)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKEQUIPITEMDATABYTYPE_B__154_0_OFFSET UNITYSDK_OFFSET(0xD219EC0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKEQUIPITEMDATABYTYPE_B__154_1_OFFSET UNITYSDK_OFFSET(0xD219EE0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETMONSTERCAMPDATABYTYPEID_B__151_1_OFFSET UNITYSDK_OFFSET(0xD219DD0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETNEWHANDBOOKQUESTIDSBYQUESTARR_B__166_0_OFFSET UNITYSDK_OFFSET(0xD21A0B0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETSECONDEQUIPITEMLISTBYROLEID_B__228_0_OFFSET UNITYSDK_OFFSET(0xD21A110)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__SETHANDBOOKQUESTSEENBYQUESTARR_B__168_0_OFFSET UNITYSDK_OFFSET(0xD21A0D0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKBASEEQUIPITEMDATA_B__156_0_OFFSET UNITYSDK_OFFSET(0xD219F30)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKCONSUMABLEEQUIPITEMDATA_B__155_1_OFFSET UNITYSDK_OFFSET(0xD219F00)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKCRAFTABLEEQUIPITEMDATA_B__157_0_OFFSET UNITYSDK_OFFSET(0xD219F50)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKEQUIPITEMDATA_B__159_1_OFFSET UNITYSDK_OFFSET(0xD219FA0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKSPECIALEQUIPITEMDATA_B__158_0_OFFSET UNITYSDK_OFFSET(0xD219F70)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETRECOMMENDEQUIPLISTBYROLEID_B__229_0_OFFSET UNITYSDK_OFFSET(0xD21A130)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___ONGRIDFIGHTUPDATEPOSSCRSP_B__332_0_OFFSET UNITYSDK_OFFSET(0xD21A1D0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___SORTHANDBOOKROLES_B__134_0_OFFSET UNITYSDK_OFFSET(0xD219B70)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___SORTHANDBOOKROLES_B__134_2_OFFSET UNITYSDK_OFFSET(0xD219C20)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___SORTHANDBOOKROLES_B__134_3_OFFSET UNITYSDK_OFFSET(0xD219CD0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___TRYGETROLENAMESWICHNAMES_B__144_0_OFFSET UNITYSDK_OFFSET(0xD219D50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___c_TypeDefinitionIndex = 64927;

	class GridFightModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__158_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C5B0);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__154_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C5B8);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__229_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C5C0);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>** StaticGet___9__168_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C5C8);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>** StaticGet___9__134_3()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C5D0);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__157_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C5D8);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::UInt32>** StaticGet___9__151_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C5E0);
		}
		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::RPG::GameCore::GridFightAugmentQuality>** StaticGet___9__162_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::RPG::GameCore::GridFightAugmentQuality>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C5E8);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::UInt32>** StaticGet___9__152_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C5F0);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>** StaticGet___9__159_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C5F8);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>** StaticGet___9__166_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C600);
		}
		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::System::UInt32>** StaticGet___9__161_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C608);
		}
		static ::System::Func_2<::RPG::Client::GridFightPortalData*, ::System::UInt32>** StaticGet___9__163_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightPortalData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C610);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::Int32>** StaticGet___9__134_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C618);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_472*, ::System::UInt32>** StaticGet___9__332_0()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_472*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C620);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::Boolean>** StaticGet___9__152_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C628);
		}
		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::System::UInt32>** StaticGet___9__162_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C630);
		}
		static ::RPG::Client::GridFightModule___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightModule___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C638);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__227_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C640);
		}
		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::RPG::GameCore::GridFightAugmentQuality>** StaticGet___9__161_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::RPG::GameCore::GridFightAugmentQuality>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C648);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>** StaticGet___9__153_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C650);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::RPG::Client::TextID>** StaticGet___9__144_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C658);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__156_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C660);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>** StaticGet___9__155_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C668);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>** StaticGet___9__134_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C670);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__154_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C678);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__240_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C680);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::RPG::Client::GridFightHandBookEquipItemType>** StaticGet___9__153_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::RPG::Client::GridFightHandBookEquipItemType>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C688);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__228_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3C690);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SortHandBookRoles_b__134_0(::RPG::Client::GridFightHandbookRole* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___SORTHANDBOOKROLES_B__134_0_OFFSET))(this, a1);
		}

		::System::UInt32 __SortHandBookRoles_b__134_2(::RPG::Client::GridFightHandbookRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___SORTHANDBOOKROLES_B__134_2_OFFSET))(this, a1);
		}

		::System::UInt32 __SortHandBookRoles_b__134_3(::RPG::Client::GridFightHandbookRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___SORTHANDBOOKROLES_B__134_3_OFFSET))(this, a1);
		}

		::RPG::Client::TextID __TryGetRoleNameSwichNames_b__144_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___TRYGETROLENAMESWICHNAMES_B__144_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetMonsterCampDataByTypeID_b__151_1(::RPG::Client::GridFightMonsterCampConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETMONSTERCAMPDATABYTYPEID_B__151_1_OFFSET))(this, a1);
		}

		::System::Boolean _GetAllMonsterCampData_b__152_0(::RPG::Client::GridFightMonsterCampConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETALLMONSTERCAMPDATA_B__152_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetAllMonsterCampData_b__152_2(::RPG::Client::GridFightMonsterCampConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETALLMONSTERCAMPDATA_B__152_2_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookEquipItemType _GetHandBookAllEquipItemData_b__153_1(::RPG::Client::GridFightHandBookEquipItemConfig* a1)
		{
			return ((::RPG::Client::GridFightHandBookEquipItemType(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLEQUIPITEMDATA_B__153_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetHandBookAllEquipItemData_b__153_2(::RPG::Client::GridFightHandBookEquipItemConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLEQUIPITEMDATA_B__153_2_OFFSET))(this, a1);
		}

		::System::Boolean _GetHandBookEquipItemDataByType_b__154_0(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKEQUIPITEMDATABYTYPE_B__154_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetHandBookEquipItemDataByType_b__154_1(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKEQUIPITEMDATABYTYPE_B__154_1_OFFSET))(this, a1);
		}

		::System::UInt32 __GetHandBookConsumableEquipItemData_b__155_1(::RPG::Client::GridFightHandBookEquipItemConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKCONSUMABLEEQUIPITEMDATA_B__155_1_OFFSET))(this, a1);
		}

		::System::Boolean __GetHandBookBaseEquipItemData_b__156_0(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKBASEEQUIPITEMDATA_B__156_0_OFFSET))(this, a1);
		}

		::System::Boolean __GetHandBookCraftableEquipItemData_b__157_0(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKCRAFTABLEEQUIPITEMDATA_B__157_0_OFFSET))(this, a1);
		}

		::System::Boolean __GetHandBookSpecialEquipItemData_b__158_0(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKSPECIALEQUIPITEMDATA_B__158_0_OFFSET))(this, a1);
		}

		::System::UInt32 __GetHandBookEquipItemData_b__159_1(::RPG::Client::GridFightHandBookEquipItemConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKEQUIPITEMDATA_B__159_1_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightAugmentQuality _GetHandBookAllAugmentItemData_b__161_1(::RPG::Client::GridFightAugment* a1)
		{
			return ((::RPG::GameCore::GridFightAugmentQuality(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAUGMENTITEMDATA_B__161_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetHandBookAllAugmentItemData_b__161_2(::RPG::Client::GridFightAugment* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAUGMENTITEMDATA_B__161_2_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightAugmentQuality _GetHandBookAugmentItemDataByQuality_b__162_1(::RPG::Client::GridFightAugment* a1)
		{
			return ((::RPG::GameCore::GridFightAugmentQuality(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKAUGMENTITEMDATABYQUALITY_B__162_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetHandBookAugmentItemDataByQuality_b__162_2(::RPG::Client::GridFightAugment* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKAUGMENTITEMDATABYQUALITY_B__162_2_OFFSET))(this, a1);
		}

		::System::UInt32 _GetHandBookAllPortalData_b__163_1(::RPG::Client::GridFightPortalData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLPORTALDATA_B__163_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetNewHandBookQuestIDsByQuestArr_b__166_0(::RPG::Client::QuestData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETNEWHANDBOOKQUESTIDSBYQUESTARR_B__166_0_OFFSET))(this, a1);
		}

		::System::UInt32 _SetHandBookQuestSeenByQuestArr_b__168_0(::RPG::Client::QuestData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__SETHANDBOOKQUESTSEENBYQUESTARR_B__168_0_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* _GetFirstEquipItemListByRoleID_b__227_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETFIRSTEQUIPITEMLISTBYROLEID_B__227_0_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* _GetSecondEquipItemListByRoleID_b__228_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETSECONDEQUIPITEMLISTBYROLEID_B__228_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemConfig* __GetRecommendEquipListByRoleID_b__229_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETRECOMMENDEQUIPLISTBYROLEID_B__229_0_OFFSET))(this, a1);
		}

		::System::Boolean _CanShowNewTraitQuestReddot_b__240_1(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__CANSHOWNEWTRAITQUESTREDDOT_B__240_1_OFFSET))(this, a1);
		}

		::System::UInt32 __OnGridFightUpdatePosScRsp_b__332_0(::Class_1_D17272E82AE804C2_472* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_D17272E82AE804C2_472*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___ONGRIDFIGHTUPDATEPOSSCRSP_B__332_0_OFFSET))(this, a1);
		}
	};
}
