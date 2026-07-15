#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::GameCore { class GridFightRoleRecommendEquipConfigRow; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTROLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEB2D40)
#define RPG_CLIENT_GRIDFIGHTROLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEB2D80)
#define RPG_CLIENT_GRIDFIGHTROLE___C__GETBACKFIRSTRECOMMENDEQUIP_B__8_0_OFFSET UNITYSDK_OFFSET(0x1AEB2DB0)
#define RPG_CLIENT_GRIDFIGHTROLE___C__GETBACKSECONDRECOMMENDEQUIP_B__10_0_OFFSET UNITYSDK_OFFSET(0x1AEB2DF0)
#define RPG_CLIENT_GRIDFIGHTROLE___C__GETFRONTFIRSTRECOMMENDEQUIP_B__7_0_OFFSET UNITYSDK_OFFSET(0x1AEB2D90)
#define RPG_CLIENT_GRIDFIGHTROLE___C__GETFRONTSECONDRECOMMENDEQUIP_B__9_0_OFFSET UNITYSDK_OFFSET(0x1AEB2DD0)
#define RPG_CLIENT_GRIDFIGHTROLE___C__GETSECONDRECOMMENDEQUIP_B__11_0_OFFSET UNITYSDK_OFFSET(0x1AEB2E10)
#define RPG_CLIENT_GRIDFIGHTROLE___C__GET_EQUIPS_B__32_0_OFFSET UNITYSDK_OFFSET(0x1AEB2E30)
#define RPG_CLIENT_GRIDFIGHTROLE___C___GETEFFECTTRAITIDS_B__105_0_OFFSET UNITYSDK_OFFSET(0x1AEB2E80)
#define RPG_CLIENT_GRIDFIGHTROLE___C___GETEFFECTTRAITIDS_B__105_1_OFFSET UNITYSDK_OFFSET(0x1AEB2EE0)
#define RPG_CLIENT_GRIDFIGHTROLE___C___UPDATETRAITIDS_B__104_0_OFFSET UNITYSDK_OFFSET(0x1AEB2E60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRole___c_TypeDefinitionIndex = 62183;

	class GridFightRole___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightTraitConfig*, ::System::Boolean>** StaticGet___9__105_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRole___c_TypeDefinitionIndex)->GetStaticField(0x2B1F0);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRole___c_TypeDefinitionIndex)->GetStaticField(0x2B1F8);
		}
		static ::System::Func_2<::RPG::Client::GridFightTraitConfig*, ::System::UInt32>** StaticGet___9__105_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRole___c_TypeDefinitionIndex)->GetStaticField(0x2B200);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRole___c_TypeDefinitionIndex)->GetStaticField(0x2B208);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>** StaticGet___9__104_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRole___c_TypeDefinitionIndex)->GetStaticField(0x2B210);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRole___c_TypeDefinitionIndex)->GetStaticField(0x2B218);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRole___c_TypeDefinitionIndex)->GetStaticField(0x2B220);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRole___c_TypeDefinitionIndex)->GetStaticField(0x2B228);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRole___c_TypeDefinitionIndex)->GetStaticField(0x2B230);
		}
		static ::RPG::Client::GridFightRole___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightRole___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightRole___c_TypeDefinitionIndex)->GetStaticField(0x2B238);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* _GetFrontFirstRecommendEquip_b__7_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C__GETFRONTFIRSTRECOMMENDEQUIP_B__7_0_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* _GetBackFirstRecommendEquip_b__8_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C__GETBACKFIRSTRECOMMENDEQUIP_B__8_0_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* _GetFrontSecondRecommendEquip_b__9_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C__GETFRONTSECONDRECOMMENDEQUIP_B__9_0_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* _GetBackSecondRecommendEquip_b__10_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C__GETBACKSECONDRECOMMENDEQUIP_B__10_0_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* _GetSecondRecommendEquip_b__11_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C__GETSECONDRECOMMENDEQUIP_B__11_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_Equips_b__32_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C__GET_EQUIPS_B__32_0_OFFSET))(this, a1);
		}

		::System::UInt32 __UpdateTraitIDs_b__104_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C___UPDATETRAITIDS_B__104_0_OFFSET))(this, a1);
		}

		::System::Boolean __GetEffectTraitIDs_b__105_0(::RPG::Client::GridFightTraitConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C___GETEFFECTTRAITIDS_B__105_0_OFFSET))(this, a1);
		}

		::System::UInt32 __GetEffectTraitIDs_b__105_1(::RPG::Client::GridFightTraitConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C___GETEFFECTTRAITIDS_B__105_1_OFFSET))(this, a1);
		}
	};
}
