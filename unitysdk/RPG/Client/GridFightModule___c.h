#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightHandBookEquipItemType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_404;
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

#define RPG_CLIENT_GRIDFIGHTMODULE___C__CANSHOWNEWTRAITQUESTREDDOT_B__239_1_OFFSET UNITYSDK_OFFSET(0xBBB31A0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBBB2C00)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBBB2C40)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETALLMONSTERCAMPDATA_B__151_0_OFFSET UNITYSDK_OFFSET(0xBBB2D80)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETALLMONSTERCAMPDATA_B__151_2_OFFSET UNITYSDK_OFFSET(0xBBB2DD0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETFIRSTEQUIPITEMLISTBYROLEID_B__226_0_OFFSET UNITYSDK_OFFSET(0xBBB30E0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAUGMENTITEMDATA_B__160_1_OFFSET UNITYSDK_OFFSET(0xBBB2F50)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAUGMENTITEMDATA_B__160_2_OFFSET UNITYSDK_OFFSET(0xBBB2F90)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLEQUIPITEMDATA_B__152_1_OFFSET UNITYSDK_OFFSET(0xBBB2DF0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLEQUIPITEMDATA_B__152_2_OFFSET UNITYSDK_OFFSET(0xBBB2E10)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLPORTALDATA_B__162_1_OFFSET UNITYSDK_OFFSET(0xBBB3050)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKAUGMENTITEMDATABYQUALITY_B__161_1_OFFSET UNITYSDK_OFFSET(0xBBB2FD0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKAUGMENTITEMDATABYQUALITY_B__161_2_OFFSET UNITYSDK_OFFSET(0xBBB3010)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKEQUIPITEMDATABYTYPE_B__153_0_OFFSET UNITYSDK_OFFSET(0xBBB2E40)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKEQUIPITEMDATABYTYPE_B__153_1_OFFSET UNITYSDK_OFFSET(0xBBB2E60)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETMONSTERCAMPDATABYTYPEID_B__150_1_OFFSET UNITYSDK_OFFSET(0xBBB2D60)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETNEWHANDBOOKQUESTIDSBYQUESTARR_B__165_0_OFFSET UNITYSDK_OFFSET(0xBBB30A0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETSECONDEQUIPITEMLISTBYROLEID_B__227_0_OFFSET UNITYSDK_OFFSET(0xBBB3100)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__SETHANDBOOKQUESTSEENBYQUESTARR_B__167_0_OFFSET UNITYSDK_OFFSET(0xBBB30C0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKBASEEQUIPITEMDATA_B__155_0_OFFSET UNITYSDK_OFFSET(0xBBB2EB0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKCONSUMABLEEQUIPITEMDATA_B__154_1_OFFSET UNITYSDK_OFFSET(0xBBB2E80)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKCRAFTABLEEQUIPITEMDATA_B__156_0_OFFSET UNITYSDK_OFFSET(0xBBB2ED0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKEQUIPITEMDATA_B__158_1_OFFSET UNITYSDK_OFFSET(0xBBB2F20)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKSPECIALEQUIPITEMDATA_B__157_0_OFFSET UNITYSDK_OFFSET(0xBBB2EF0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETRECOMMENDEQUIPLISTBYROLEID_B__228_0_OFFSET UNITYSDK_OFFSET(0xBBB3120)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___ONGRIDFIGHTUPDATEPOSSCRSP_B__327_0_OFFSET UNITYSDK_OFFSET(0xBBB31C0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___SORTHANDBOOKROLES_B__134_0_OFFSET UNITYSDK_OFFSET(0xBBB2C50)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___SORTHANDBOOKROLES_B__134_2_OFFSET UNITYSDK_OFFSET(0xBBB2CA0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___SORTHANDBOOKROLES_B__134_3_OFFSET UNITYSDK_OFFSET(0xBBB2CF0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___TRYGETROLENAMESWICHNAMES_B__144_0_OFFSET UNITYSDK_OFFSET(0xBBB2D20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___c_TypeDefinitionIndex = 60653;

	class GridFightModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>** StaticGet___9__152_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32EB0);
		}
		static ::RPG::Client::GridFightModule___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightModule___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32EB8);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__156_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32EC0);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__228_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32EC8);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>** StaticGet___9__158_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32ED0);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::RPG::Client::TextID>** StaticGet___9__144_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32ED8);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__239_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32EE0);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::Int32>** StaticGet___9__134_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32EE8);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__226_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32EF0);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__153_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32EF8);
		}
		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::RPG::GameCore::GridFightAugmentQuality>** StaticGet___9__160_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::RPG::GameCore::GridFightAugmentQuality>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32F00);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>** StaticGet___9__154_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32F08);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_404*, ::System::UInt32>** StaticGet___9__327_0()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_404*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32F10);
		}
		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::System::UInt32>** StaticGet___9__161_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32F18);
		}
		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::RPG::GameCore::GridFightAugmentQuality>** StaticGet___9__161_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::RPG::GameCore::GridFightAugmentQuality>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32F20);
		}
		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::System::UInt32>** StaticGet___9__160_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32F28);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::Boolean>** StaticGet___9__151_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32F30);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>** StaticGet___9__134_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32F38);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::RPG::Client::GridFightHandBookEquipItemType>** StaticGet___9__152_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::RPG::Client::GridFightHandBookEquipItemType>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32F40);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__155_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32F48);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::UInt32>** StaticGet___9__150_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32F50);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>** StaticGet___9__134_3()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32F58);
		}
		static ::System::Func_2<::RPG::Client::GridFightPortalData*, ::System::UInt32>** StaticGet___9__162_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightPortalData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32F60);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__227_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32F68);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>** StaticGet___9__165_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32F70);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__157_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32F78);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__153_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32F80);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::UInt32>** StaticGet___9__151_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32F88);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>** StaticGet___9__167_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x32F90);
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

		::System::UInt32 _GetMonsterCampDataByTypeID_b__150_1(::RPG::Client::GridFightMonsterCampConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETMONSTERCAMPDATABYTYPEID_B__150_1_OFFSET))(this, a1);
		}

		::System::Boolean _GetAllMonsterCampData_b__151_0(::RPG::Client::GridFightMonsterCampConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETALLMONSTERCAMPDATA_B__151_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetAllMonsterCampData_b__151_2(::RPG::Client::GridFightMonsterCampConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETALLMONSTERCAMPDATA_B__151_2_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookEquipItemType _GetHandBookAllEquipItemData_b__152_1(::RPG::Client::GridFightHandBookEquipItemConfig* a1)
		{
			return ((::RPG::Client::GridFightHandBookEquipItemType(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLEQUIPITEMDATA_B__152_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetHandBookAllEquipItemData_b__152_2(::RPG::Client::GridFightHandBookEquipItemConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLEQUIPITEMDATA_B__152_2_OFFSET))(this, a1);
		}

		::System::Boolean _GetHandBookEquipItemDataByType_b__153_0(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKEQUIPITEMDATABYTYPE_B__153_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetHandBookEquipItemDataByType_b__153_1(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKEQUIPITEMDATABYTYPE_B__153_1_OFFSET))(this, a1);
		}

		::System::UInt32 __GetHandBookConsumableEquipItemData_b__154_1(::RPG::Client::GridFightHandBookEquipItemConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKCONSUMABLEEQUIPITEMDATA_B__154_1_OFFSET))(this, a1);
		}

		::System::Boolean __GetHandBookBaseEquipItemData_b__155_0(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKBASEEQUIPITEMDATA_B__155_0_OFFSET))(this, a1);
		}

		::System::Boolean __GetHandBookCraftableEquipItemData_b__156_0(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKCRAFTABLEEQUIPITEMDATA_B__156_0_OFFSET))(this, a1);
		}

		::System::Boolean __GetHandBookSpecialEquipItemData_b__157_0(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKSPECIALEQUIPITEMDATA_B__157_0_OFFSET))(this, a1);
		}

		::System::UInt32 __GetHandBookEquipItemData_b__158_1(::RPG::Client::GridFightHandBookEquipItemConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKEQUIPITEMDATA_B__158_1_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightAugmentQuality _GetHandBookAllAugmentItemData_b__160_1(::RPG::Client::GridFightAugment* a1)
		{
			return ((::RPG::GameCore::GridFightAugmentQuality(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAUGMENTITEMDATA_B__160_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetHandBookAllAugmentItemData_b__160_2(::RPG::Client::GridFightAugment* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAUGMENTITEMDATA_B__160_2_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightAugmentQuality _GetHandBookAugmentItemDataByQuality_b__161_1(::RPG::Client::GridFightAugment* a1)
		{
			return ((::RPG::GameCore::GridFightAugmentQuality(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKAUGMENTITEMDATABYQUALITY_B__161_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetHandBookAugmentItemDataByQuality_b__161_2(::RPG::Client::GridFightAugment* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKAUGMENTITEMDATABYQUALITY_B__161_2_OFFSET))(this, a1);
		}

		::System::UInt32 _GetHandBookAllPortalData_b__162_1(::RPG::Client::GridFightPortalData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLPORTALDATA_B__162_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetNewHandBookQuestIDsByQuestArr_b__165_0(::RPG::Client::QuestData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETNEWHANDBOOKQUESTIDSBYQUESTARR_B__165_0_OFFSET))(this, a1);
		}

		::System::UInt32 _SetHandBookQuestSeenByQuestArr_b__167_0(::RPG::Client::QuestData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__SETHANDBOOKQUESTSEENBYQUESTARR_B__167_0_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* _GetFirstEquipItemListByRoleID_b__226_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETFIRSTEQUIPITEMLISTBYROLEID_B__226_0_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* _GetSecondEquipItemListByRoleID_b__227_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETSECONDEQUIPITEMLISTBYROLEID_B__227_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemConfig* __GetRecommendEquipListByRoleID_b__228_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETRECOMMENDEQUIPLISTBYROLEID_B__228_0_OFFSET))(this, a1);
		}

		::System::Boolean _CanShowNewTraitQuestReddot_b__239_1(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__CANSHOWNEWTRAITQUESTREDDOT_B__239_1_OFFSET))(this, a1);
		}

		::System::UInt32 __OnGridFightUpdatePosScRsp_b__327_0(::Class_1_D17272E82AE804C2_404* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_D17272E82AE804C2_404*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___ONGRIDFIGHTUPDATEPOSSCRSP_B__327_0_OFFSET))(this, a1);
		}
	};
}
