#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::GameCore { class GridFightRoleRecommendEquipConfigRow; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTROLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x988F810)
#define RPG_CLIENT_GRIDFIGHTROLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x988F850)
#define RPG_CLIENT_GRIDFIGHTROLE___C__GETBACKFIRSTRECOMMENDEQUIP_B__8_0_OFFSET UNITYSDK_OFFSET(0x988F880)
#define RPG_CLIENT_GRIDFIGHTROLE___C__GETBACKSECONDRECOMMENDEQUIP_B__10_0_OFFSET UNITYSDK_OFFSET(0x988F8C0)
#define RPG_CLIENT_GRIDFIGHTROLE___C__GETFRONTFIRSTRECOMMENDEQUIP_B__7_0_OFFSET UNITYSDK_OFFSET(0x988F860)
#define RPG_CLIENT_GRIDFIGHTROLE___C__GETFRONTSECONDRECOMMENDEQUIP_B__9_0_OFFSET UNITYSDK_OFFSET(0x988F8A0)
#define RPG_CLIENT_GRIDFIGHTROLE___C__GETSECONDRECOMMENDEQUIP_B__11_0_OFFSET UNITYSDK_OFFSET(0x988F8E0)
#define RPG_CLIENT_GRIDFIGHTROLE___C___UPDATETRAITIDS_B__101_0_OFFSET UNITYSDK_OFFSET(0x988F900)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRole___c_TypeDefinitionIndex = 52860;

	class GridFightRole___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>** StaticGet___9__101_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRole___c_TypeDefinitionIndex)->GetStaticField(0x18BB0);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRole___c_TypeDefinitionIndex)->GetStaticField(0x18BB8);
		}
		static ::RPG::Client::GridFightRole___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightRole___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightRole___c_TypeDefinitionIndex)->GetStaticField(0x18BC0);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRole___c_TypeDefinitionIndex)->GetStaticField(0x18BC8);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRole___c_TypeDefinitionIndex)->GetStaticField(0x18BD0);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRole___c_TypeDefinitionIndex)->GetStaticField(0x18BD8);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRole___c_TypeDefinitionIndex)->GetStaticField(0x18BE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* _GetFrontFirstRecommendEquip_b__7_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* config)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C__GETFRONTFIRSTRECOMMENDEQUIP_B__7_0_OFFSET))(this, config);
		}

		::Il2CppArray<::System::UInt32>* _GetBackFirstRecommendEquip_b__8_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* config)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C__GETBACKFIRSTRECOMMENDEQUIP_B__8_0_OFFSET))(this, config);
		}

		::Il2CppArray<::System::UInt32>* _GetFrontSecondRecommendEquip_b__9_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* config)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C__GETFRONTSECONDRECOMMENDEQUIP_B__9_0_OFFSET))(this, config);
		}

		::Il2CppArray<::System::UInt32>* _GetBackSecondRecommendEquip_b__10_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* config)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C__GETBACKSECONDRECOMMENDEQUIP_B__10_0_OFFSET))(this, config);
		}

		::Il2CppArray<::System::UInt32>* _GetSecondRecommendEquip_b__11_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* config)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C__GETSECONDRECOMMENDEQUIP_B__11_0_OFFSET))(this, config);
		}

		::System::UInt32 __UpdateTraitIDs_b__101_0(::RPG::Client::GridFightEquipItemData* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___C___UPDATETRAITIDS_B__101_0_OFFSET))(this, x);
		}
	};
}
