#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightHandBookEquipItemType.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_375;
namespace RPG::Client { class GridFightAugment; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightHandBookEquipItemConfig; }
namespace RPG::Client { class GridFightHandbookRole; }
namespace RPG::Client { class GridFightMonsterCampConfig; }
namespace RPG::Client { class GridFightPortalData; }
namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class GridFightRoleRecommendEquipConfigRow; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTMODULE___C__CANSHOWNEWTRAITQUESTREDDOT_B__240_1_OFFSET UNITYSDK_OFFSET(0x9869DC0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9869750)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9869790)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETALLMONSTERCAMPDATA_B__155_0_OFFSET UNITYSDK_OFFSET(0x98699E0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETALLMONSTERCAMPDATA_B__155_2_OFFSET UNITYSDK_OFFSET(0x9869A10)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETEXPERTHANDBOOKROLECONFIG_B__145_1_OFFSET UNITYSDK_OFFSET(0x9869870)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETEXPERTHANDBOOKROLECONFIG_B__145_2_OFFSET UNITYSDK_OFFSET(0x98698C0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETFIRSTEQUIPITEMLISTBYROLEID_B__227_0_OFFSET UNITYSDK_OFFSET(0x9869D00)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAUGMENTITEMDATA_B__164_1_OFFSET UNITYSDK_OFFSET(0x9869B90)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAUGMENTITEMDATA_B__164_2_OFFSET UNITYSDK_OFFSET(0x9869BD0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLEQUIPITEMDATA_B__156_1_OFFSET UNITYSDK_OFFSET(0x9869A30)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLEQUIPITEMDATA_B__156_2_OFFSET UNITYSDK_OFFSET(0x9869A50)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLPORTALDATA_B__166_1_OFFSET UNITYSDK_OFFSET(0x9869C90)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLROLECONFIG_B__146_1_OFFSET UNITYSDK_OFFSET(0x98698F0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLROLECONFIG_B__146_2_OFFSET UNITYSDK_OFFSET(0x9869940)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLROLECONFIG_B__146_3_OFFSET UNITYSDK_OFFSET(0x9869990)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKAUGMENTITEMDATABYQUALITY_B__165_1_OFFSET UNITYSDK_OFFSET(0x9869C10)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKAUGMENTITEMDATABYQUALITY_B__165_2_OFFSET UNITYSDK_OFFSET(0x9869C50)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKEQUIPITEMDATABYTYPE_B__157_0_OFFSET UNITYSDK_OFFSET(0x9869A80)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKEQUIPITEMDATABYTYPE_B__157_1_OFFSET UNITYSDK_OFFSET(0x9869AA0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKROLECONFIGBYPRICE_B__144_1_OFFSET UNITYSDK_OFFSET(0x98697A0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKROLECONFIGBYPRICE_B__144_2_OFFSET UNITYSDK_OFFSET(0x98697F0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKROLECONFIGBYPRICE_B__144_3_OFFSET UNITYSDK_OFFSET(0x9869840)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETMONSTERCAMPDATABYTYPEID_B__154_1_OFFSET UNITYSDK_OFFSET(0x98699C0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETNEWHANDBOOKQUESTIDSBYQUESTARR_B__169_0_OFFSET UNITYSDK_OFFSET(0x9869CC0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETSECONDEQUIPITEMLISTBYROLEID_B__228_0_OFFSET UNITYSDK_OFFSET(0x9869D20)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__SETHANDBOOKQUESTSEENBYQUESTARR_B__171_0_OFFSET UNITYSDK_OFFSET(0x9869CE0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKBASEEQUIPITEMDATA_B__159_0_OFFSET UNITYSDK_OFFSET(0x9869AF0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKCONSUMABLEEQUIPITEMDATA_B__158_1_OFFSET UNITYSDK_OFFSET(0x9869AC0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKCRAFTABLEEQUIPITEMDATA_B__160_0_OFFSET UNITYSDK_OFFSET(0x9869B10)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKEQUIPITEMDATA_B__162_1_OFFSET UNITYSDK_OFFSET(0x9869B60)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKSPECIALEQUIPITEMDATA_B__161_0_OFFSET UNITYSDK_OFFSET(0x9869B30)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETRECOMMENDEQUIPLISTBYROLEID_B__229_0_OFFSET UNITYSDK_OFFSET(0x9869D40)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___ONGRIDFIGHTUPDATEPOSSCRSP_B__336_0_OFFSET UNITYSDK_OFFSET(0x9869DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___c_TypeDefinitionIndex = 52665;

	class GridFightModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__160_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16EE0);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__228_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16EE8);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>** StaticGet___9__145_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16EF0);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__161_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16EF8);
		}
		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::RPG::GameCore::GridFightAugmentQuality>** StaticGet___9__164_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::RPG::GameCore::GridFightAugmentQuality>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16F00);
		}
		static ::RPG::Client::GridFightModule___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightModule___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16F08);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::Boolean>** StaticGet___9__155_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16F10);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::Int32>** StaticGet___9__146_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16F18);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__227_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16F20);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>** StaticGet___9__162_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16F28);
		}
		static ::System::Func_2<::Class_1_FA4F4A67B1C04320_375*, ::System::UInt32>** StaticGet___9__336_0()
		{
			return (::System::Func_2<::Class_1_FA4F4A67B1C04320_375*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16F30);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>** StaticGet___9__146_3()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16F38);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__157_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16F40);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>** StaticGet___9__144_3()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16F48);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::RPG::Client::GridFightHandBookEquipItemType>** StaticGet___9__156_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::RPG::Client::GridFightHandBookEquipItemType>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16F50);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>** StaticGet___9__146_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16F58);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::Int32>** StaticGet___9__144_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16F60);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__159_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16F68);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__157_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16F70);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>** StaticGet___9__144_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16F78);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>** StaticGet___9__171_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16F80);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::UInt32>** StaticGet___9__155_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16F88);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>** StaticGet___9__169_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16F90);
		}
		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::System::UInt32>** StaticGet___9__164_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16F98);
		}
		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::System::UInt32>** StaticGet___9__165_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16FA0);
		}
		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::RPG::GameCore::GridFightAugmentQuality>** StaticGet___9__165_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::RPG::GameCore::GridFightAugmentQuality>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16FA8);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>** StaticGet___9__158_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16FB0);
		}
		static ::System::Func_2<::RPG::Client::GridFightPortalData*, ::System::UInt32>** StaticGet___9__166_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightPortalData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16FB8);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__229_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16FC0);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>** StaticGet___9__156_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16FC8);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__240_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16FD0);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>** StaticGet___9__145_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16FD8);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::UInt32>** StaticGet___9__154_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x16FE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetHandBookRoleConfigByPrice_b__144_1(::RPG::Client::GridFightHandbookRole* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKROLECONFIGBYPRICE_B__144_1_OFFSET))(this, x);
		}

		::System::Int32 _GetHandBookRoleConfigByPrice_b__144_2(::RPG::Client::GridFightHandbookRole* x)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKROLECONFIGBYPRICE_B__144_2_OFFSET))(this, x);
		}

		::System::UInt32 _GetHandBookRoleConfigByPrice_b__144_3(::RPG::Client::GridFightHandbookRole* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKROLECONFIGBYPRICE_B__144_3_OFFSET))(this, x);
		}

		::System::UInt32 _GetExpertHandbookRoleConfig_b__145_1(::RPG::Client::GridFightHandbookRole* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETEXPERTHANDBOOKROLECONFIG_B__145_1_OFFSET))(this, x);
		}

		::System::UInt32 _GetExpertHandbookRoleConfig_b__145_2(::RPG::Client::GridFightHandbookRole* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETEXPERTHANDBOOKROLECONFIG_B__145_2_OFFSET))(this, x);
		}

		::System::UInt32 _GetHandBookAllRoleConfig_b__146_1(::RPG::Client::GridFightHandbookRole* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLROLECONFIG_B__146_1_OFFSET))(this, x);
		}

		::System::Int32 _GetHandBookAllRoleConfig_b__146_2(::RPG::Client::GridFightHandbookRole* x)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLROLECONFIG_B__146_2_OFFSET))(this, x);
		}

		::System::UInt32 _GetHandBookAllRoleConfig_b__146_3(::RPG::Client::GridFightHandbookRole* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLROLECONFIG_B__146_3_OFFSET))(this, x);
		}

		::System::UInt32 _GetMonsterCampDataByTypeID_b__154_1(::RPG::Client::GridFightMonsterCampConfig* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETMONSTERCAMPDATABYTYPEID_B__154_1_OFFSET))(this, x);
		}

		::System::Boolean _GetAllMonsterCampData_b__155_0(::RPG::Client::GridFightMonsterCampConfig* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETALLMONSTERCAMPDATA_B__155_0_OFFSET))(this, x);
		}

		::System::UInt32 _GetAllMonsterCampData_b__155_2(::RPG::Client::GridFightMonsterCampConfig* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETALLMONSTERCAMPDATA_B__155_2_OFFSET))(this, x);
		}

		::RPG::Client::GridFightHandBookEquipItemType _GetHandBookAllEquipItemData_b__156_1(::RPG::Client::GridFightHandBookEquipItemConfig* item)
		{
			return ((::RPG::Client::GridFightHandBookEquipItemType(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLEQUIPITEMDATA_B__156_1_OFFSET))(this, item);
		}

		::System::UInt32 _GetHandBookAllEquipItemData_b__156_2(::RPG::Client::GridFightHandBookEquipItemConfig* item)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLEQUIPITEMDATA_B__156_2_OFFSET))(this, item);
		}

		::System::Boolean _GetHandBookEquipItemDataByType_b__157_0(::RPG::Client::GridFightEquipItemConfig* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKEQUIPITEMDATABYTYPE_B__157_0_OFFSET))(this, x);
		}

		::System::Boolean _GetHandBookEquipItemDataByType_b__157_1(::RPG::Client::GridFightEquipItemConfig* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKEQUIPITEMDATABYTYPE_B__157_1_OFFSET))(this, x);
		}

		::System::UInt32 __GetHandBookConsumableEquipItemData_b__158_1(::RPG::Client::GridFightHandBookEquipItemConfig* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKCONSUMABLEEQUIPITEMDATA_B__158_1_OFFSET))(this, x);
		}

		::System::Boolean __GetHandBookBaseEquipItemData_b__159_0(::RPG::Client::GridFightEquipItemConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKBASEEQUIPITEMDATA_B__159_0_OFFSET))(this, config);
		}

		::System::Boolean __GetHandBookCraftableEquipItemData_b__160_0(::RPG::Client::GridFightEquipItemConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKCRAFTABLEEQUIPITEMDATA_B__160_0_OFFSET))(this, config);
		}

		::System::Boolean __GetHandBookSpecialEquipItemData_b__161_0(::RPG::Client::GridFightEquipItemConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKSPECIALEQUIPITEMDATA_B__161_0_OFFSET))(this, config);
		}

		::System::UInt32 __GetHandBookEquipItemData_b__162_1(::RPG::Client::GridFightHandBookEquipItemConfig* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKEQUIPITEMDATA_B__162_1_OFFSET))(this, x);
		}

		::RPG::GameCore::GridFightAugmentQuality _GetHandBookAllAugmentItemData_b__164_1(::RPG::Client::GridFightAugment* x)
		{
			return ((::RPG::GameCore::GridFightAugmentQuality(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAUGMENTITEMDATA_B__164_1_OFFSET))(this, x);
		}

		::System::UInt32 _GetHandBookAllAugmentItemData_b__164_2(::RPG::Client::GridFightAugment* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAUGMENTITEMDATA_B__164_2_OFFSET))(this, x);
		}

		::RPG::GameCore::GridFightAugmentQuality _GetHandBookAugmentItemDataByQuality_b__165_1(::RPG::Client::GridFightAugment* x)
		{
			return ((::RPG::GameCore::GridFightAugmentQuality(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKAUGMENTITEMDATABYQUALITY_B__165_1_OFFSET))(this, x);
		}

		::System::UInt32 _GetHandBookAugmentItemDataByQuality_b__165_2(::RPG::Client::GridFightAugment* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKAUGMENTITEMDATABYQUALITY_B__165_2_OFFSET))(this, x);
		}

		::System::UInt32 _GetHandBookAllPortalData_b__166_1(::RPG::Client::GridFightPortalData* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLPORTALDATA_B__166_1_OFFSET))(this, x);
		}

		::System::UInt32 _GetNewHandBookQuestIDsByQuestArr_b__169_0(::RPG::Client::QuestData* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETNEWHANDBOOKQUESTIDSBYQUESTARR_B__169_0_OFFSET))(this, x);
		}

		::System::UInt32 _SetHandBookQuestSeenByQuestArr_b__171_0(::RPG::Client::QuestData* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__SETHANDBOOKQUESTSEENBYQUESTARR_B__171_0_OFFSET))(this, x);
		}

		::Il2CppArray<::System::UInt32>* _GetFirstEquipItemListByRoleID_b__227_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* row)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETFIRSTEQUIPITEMLISTBYROLEID_B__227_0_OFFSET))(this, row);
		}

		::Il2CppArray<::System::UInt32>* _GetSecondEquipItemListByRoleID_b__228_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* row)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETSECONDEQUIPITEMLISTBYROLEID_B__228_0_OFFSET))(this, row);
		}

		::RPG::Client::GridFightEquipItemConfig* __GetRecommendEquipListByRoleID_b__229_0(::System::UInt32 itemID)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETRECOMMENDEQUIPLISTBYROLEID_B__229_0_OFFSET))(this, itemID);
		}

		::System::Boolean _CanShowNewTraitQuestReddot_b__240_1(::RPG::Client::QuestData* quest)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__CANSHOWNEWTRAITQUESTREDDOT_B__240_1_OFFSET))(this, quest);
		}

		::System::UInt32 __OnGridFightUpdatePosScRsp_b__336_0(::Class_1_FA4F4A67B1C04320_375* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_375*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___ONGRIDFIGHTUPDATEPOSSCRSP_B__336_0_OFFSET))(this, x);
		}
	};
}
