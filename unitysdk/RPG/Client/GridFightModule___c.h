#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightHandBookEquipItemType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_391;
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

#define RPG_CLIENT_GRIDFIGHTMODULE___C__CANSHOWNEWTRAITQUESTREDDOT_B__249_1_OFFSET UNITYSDK_OFFSET(0xA50C450)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA50BED0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA50BF10)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETALLMONSTERCAMPDATA_B__161_0_OFFSET UNITYSDK_OFFSET(0xA50C050)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETALLMONSTERCAMPDATA_B__161_2_OFFSET UNITYSDK_OFFSET(0xA50C0A0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETFIRSTEQUIPITEMLISTBYROLEID_B__236_0_OFFSET UNITYSDK_OFFSET(0xA50C390)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAUGMENTITEMDATA_B__170_1_OFFSET UNITYSDK_OFFSET(0xA50C220)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAUGMENTITEMDATA_B__170_2_OFFSET UNITYSDK_OFFSET(0xA50C260)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLEQUIPITEMDATA_B__162_1_OFFSET UNITYSDK_OFFSET(0xA50C0C0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLEQUIPITEMDATA_B__162_2_OFFSET UNITYSDK_OFFSET(0xA50C0E0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLPORTALDATA_B__172_1_OFFSET UNITYSDK_OFFSET(0xA50C320)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKAUGMENTITEMDATABYQUALITY_B__171_1_OFFSET UNITYSDK_OFFSET(0xA50C2A0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKAUGMENTITEMDATABYQUALITY_B__171_2_OFFSET UNITYSDK_OFFSET(0xA50C2E0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKEQUIPITEMDATABYTYPE_B__163_0_OFFSET UNITYSDK_OFFSET(0xA50C110)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKEQUIPITEMDATABYTYPE_B__163_1_OFFSET UNITYSDK_OFFSET(0xA50C130)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETMONSTERCAMPDATABYTYPEID_B__160_1_OFFSET UNITYSDK_OFFSET(0xA50C030)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETNEWHANDBOOKQUESTIDSBYQUESTARR_B__175_0_OFFSET UNITYSDK_OFFSET(0xA50C350)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETSECONDEQUIPITEMLISTBYROLEID_B__237_0_OFFSET UNITYSDK_OFFSET(0xA50C3B0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__SETHANDBOOKQUESTSEENBYQUESTARR_B__177_0_OFFSET UNITYSDK_OFFSET(0xA50C370)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKBASEEQUIPITEMDATA_B__165_0_OFFSET UNITYSDK_OFFSET(0xA50C180)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKCONSUMABLEEQUIPITEMDATA_B__164_1_OFFSET UNITYSDK_OFFSET(0xA50C150)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKCRAFTABLEEQUIPITEMDATA_B__166_0_OFFSET UNITYSDK_OFFSET(0xA50C1A0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKEQUIPITEMDATA_B__168_1_OFFSET UNITYSDK_OFFSET(0xA50C1F0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKSPECIALEQUIPITEMDATA_B__167_0_OFFSET UNITYSDK_OFFSET(0xA50C1C0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETRECOMMENDEQUIPLISTBYROLEID_B__238_0_OFFSET UNITYSDK_OFFSET(0xA50C3D0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___ONGRIDFIGHTUPDATEPOSSCRSP_B__337_0_OFFSET UNITYSDK_OFFSET(0xA50C470)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___SORTHANDBOOKROLES_B__144_0_OFFSET UNITYSDK_OFFSET(0xA50BF20)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___SORTHANDBOOKROLES_B__144_2_OFFSET UNITYSDK_OFFSET(0xA50BF70)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___SORTHANDBOOKROLES_B__144_3_OFFSET UNITYSDK_OFFSET(0xA50BFC0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___TRYGETROLENAMESWICHNAMES_B__154_0_OFFSET UNITYSDK_OFFSET(0xA50BFF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___c_TypeDefinitionIndex = 59718;

	class GridFightModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::RPG::GameCore::GridFightAugmentQuality>** StaticGet___9__170_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::RPG::GameCore::GridFightAugmentQuality>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x15630);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>** StaticGet___9__177_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x15638);
		}
		static ::RPG::Client::GridFightModule___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightModule___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x15640);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::Int32>** StaticGet___9__144_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x15648);
		}
		static ::System::Func_2<::RPG::Client::GridFightPortalData*, ::System::UInt32>** StaticGet___9__172_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightPortalData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x15650);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__249_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x15658);
		}
		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::System::UInt32>** StaticGet___9__171_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x15660);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>** StaticGet___9__175_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x15668);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>** StaticGet___9__164_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x15670);
		}
		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::System::UInt32>** StaticGet___9__170_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x15678);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_391*, ::System::UInt32>** StaticGet___9__337_0()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_391*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x15680);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::UInt32>** StaticGet___9__160_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x15688);
		}
		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::RPG::GameCore::GridFightAugmentQuality>** StaticGet___9__171_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::RPG::GameCore::GridFightAugmentQuality>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x15690);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__163_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x15698);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__165_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x156A0);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::RPG::Client::GridFightHandBookEquipItemType>** StaticGet___9__162_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::RPG::Client::GridFightHandBookEquipItemType>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x156A8);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>** StaticGet___9__144_3()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x156B0);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__238_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x156B8);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>** StaticGet___9__144_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x156C0);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>** StaticGet___9__162_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x156C8);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__167_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x156D0);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::RPG::Client::TextID>** StaticGet___9__154_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x156D8);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__237_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x156E0);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__236_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x156E8);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::Boolean>** StaticGet___9__161_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x156F0);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__166_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x156F8);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__163_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x15700);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::UInt32>** StaticGet___9__161_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x15708);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>** StaticGet___9__168_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x15710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SortHandBookRoles_b__144_0(::RPG::Client::GridFightHandbookRole* x)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___SORTHANDBOOKROLES_B__144_0_OFFSET))(this, x);
		}

		::System::UInt32 __SortHandBookRoles_b__144_2(::RPG::Client::GridFightHandbookRole* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___SORTHANDBOOKROLES_B__144_2_OFFSET))(this, x);
		}

		::System::UInt32 __SortHandBookRoles_b__144_3(::RPG::Client::GridFightHandbookRole* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___SORTHANDBOOKROLES_B__144_3_OFFSET))(this, x);
		}

		::RPG::Client::TextID __TryGetRoleNameSwichNames_b__154_0(::RPG::Client::GridFightRole* x)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___TRYGETROLENAMESWICHNAMES_B__154_0_OFFSET))(this, x);
		}

		::System::UInt32 _GetMonsterCampDataByTypeID_b__160_1(::RPG::Client::GridFightMonsterCampConfig* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETMONSTERCAMPDATABYTYPEID_B__160_1_OFFSET))(this, x);
		}

		::System::Boolean _GetAllMonsterCampData_b__161_0(::RPG::Client::GridFightMonsterCampConfig* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETALLMONSTERCAMPDATA_B__161_0_OFFSET))(this, x);
		}

		::System::UInt32 _GetAllMonsterCampData_b__161_2(::RPG::Client::GridFightMonsterCampConfig* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETALLMONSTERCAMPDATA_B__161_2_OFFSET))(this, x);
		}

		::RPG::Client::GridFightHandBookEquipItemType _GetHandBookAllEquipItemData_b__162_1(::RPG::Client::GridFightHandBookEquipItemConfig* item)
		{
			return ((::RPG::Client::GridFightHandBookEquipItemType(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLEQUIPITEMDATA_B__162_1_OFFSET))(this, item);
		}

		::System::UInt32 _GetHandBookAllEquipItemData_b__162_2(::RPG::Client::GridFightHandBookEquipItemConfig* item)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLEQUIPITEMDATA_B__162_2_OFFSET))(this, item);
		}

		::System::Boolean _GetHandBookEquipItemDataByType_b__163_0(::RPG::Client::GridFightEquipItemConfig* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKEQUIPITEMDATABYTYPE_B__163_0_OFFSET))(this, x);
		}

		::System::Boolean _GetHandBookEquipItemDataByType_b__163_1(::RPG::Client::GridFightEquipItemConfig* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKEQUIPITEMDATABYTYPE_B__163_1_OFFSET))(this, x);
		}

		::System::UInt32 __GetHandBookConsumableEquipItemData_b__164_1(::RPG::Client::GridFightHandBookEquipItemConfig* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKCONSUMABLEEQUIPITEMDATA_B__164_1_OFFSET))(this, x);
		}

		::System::Boolean __GetHandBookBaseEquipItemData_b__165_0(::RPG::Client::GridFightEquipItemConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKBASEEQUIPITEMDATA_B__165_0_OFFSET))(this, config);
		}

		::System::Boolean __GetHandBookCraftableEquipItemData_b__166_0(::RPG::Client::GridFightEquipItemConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKCRAFTABLEEQUIPITEMDATA_B__166_0_OFFSET))(this, config);
		}

		::System::Boolean __GetHandBookSpecialEquipItemData_b__167_0(::RPG::Client::GridFightEquipItemConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKSPECIALEQUIPITEMDATA_B__167_0_OFFSET))(this, config);
		}

		::System::UInt32 __GetHandBookEquipItemData_b__168_1(::RPG::Client::GridFightHandBookEquipItemConfig* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKEQUIPITEMDATA_B__168_1_OFFSET))(this, x);
		}

		::RPG::GameCore::GridFightAugmentQuality _GetHandBookAllAugmentItemData_b__170_1(::RPG::Client::GridFightAugment* x)
		{
			return ((::RPG::GameCore::GridFightAugmentQuality(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAUGMENTITEMDATA_B__170_1_OFFSET))(this, x);
		}

		::System::UInt32 _GetHandBookAllAugmentItemData_b__170_2(::RPG::Client::GridFightAugment* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAUGMENTITEMDATA_B__170_2_OFFSET))(this, x);
		}

		::RPG::GameCore::GridFightAugmentQuality _GetHandBookAugmentItemDataByQuality_b__171_1(::RPG::Client::GridFightAugment* x)
		{
			return ((::RPG::GameCore::GridFightAugmentQuality(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKAUGMENTITEMDATABYQUALITY_B__171_1_OFFSET))(this, x);
		}

		::System::UInt32 _GetHandBookAugmentItemDataByQuality_b__171_2(::RPG::Client::GridFightAugment* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKAUGMENTITEMDATABYQUALITY_B__171_2_OFFSET))(this, x);
		}

		::System::UInt32 _GetHandBookAllPortalData_b__172_1(::RPG::Client::GridFightPortalData* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLPORTALDATA_B__172_1_OFFSET))(this, x);
		}

		::System::UInt32 _GetNewHandBookQuestIDsByQuestArr_b__175_0(::RPG::Client::QuestData* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETNEWHANDBOOKQUESTIDSBYQUESTARR_B__175_0_OFFSET))(this, x);
		}

		::System::UInt32 _SetHandBookQuestSeenByQuestArr_b__177_0(::RPG::Client::QuestData* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__SETHANDBOOKQUESTSEENBYQUESTARR_B__177_0_OFFSET))(this, x);
		}

		::Il2CppArray<::System::UInt32>* _GetFirstEquipItemListByRoleID_b__236_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* row)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETFIRSTEQUIPITEMLISTBYROLEID_B__236_0_OFFSET))(this, row);
		}

		::Il2CppArray<::System::UInt32>* _GetSecondEquipItemListByRoleID_b__237_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* row)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETSECONDEQUIPITEMLISTBYROLEID_B__237_0_OFFSET))(this, row);
		}

		::RPG::Client::GridFightEquipItemConfig* __GetRecommendEquipListByRoleID_b__238_0(::System::UInt32 itemID)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETRECOMMENDEQUIPLISTBYROLEID_B__238_0_OFFSET))(this, itemID);
		}

		::System::Boolean _CanShowNewTraitQuestReddot_b__249_1(::RPG::Client::QuestData* quest)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__CANSHOWNEWTRAITQUESTREDDOT_B__249_1_OFFSET))(this, quest);
		}

		::System::UInt32 __OnGridFightUpdatePosScRsp_b__337_0(::Class_1_D17272E82AE804C2_391* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_D17272E82AE804C2_391*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___ONGRIDFIGHTUPDATEPOSSCRSP_B__337_0_OFFSET))(this, x);
		}
	};
}
