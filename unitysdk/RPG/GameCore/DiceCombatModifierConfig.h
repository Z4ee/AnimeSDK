#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatModifierFlag.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatTaskConfig; }

#define RPG_GAMECORE_DICECOMBATMODIFIERCONFIG_METHOD_2_C979AB0429B43E79_OFFSET UNITYSDK_OFFSET(0x1D02D500)
#define RPG_GAMECORE_DICECOMBATMODIFIERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02DD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatModifierConfig_TypeDefinitionIndex = 15887;

	class DiceCombatModifierConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ModifierID; // 0x10
		::Il2CppArray<::RPG::GameCore::DiceCombatModifierFlag>* Flags; // 0x18
		::System::Int32 EventExecutePriority; // 0x20
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnAdd; // 0x28
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnStack; // 0x30
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnRemove; // 0x38
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnTurnPrepare; // 0x40
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnPreAttackerConfirm; // 0x48
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnAttackerConfirm; // 0x50
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnDefenderRoll; // 0x58
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnPreDefenderConfirm; // 0x60
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnDefenderConfirm; // 0x68
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnTurnEnd; // 0x70
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnBeforeCombat; // 0x78
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnAfterCombat; // 0x80
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnAfterRoll; // 0x88
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnAttackSucc; // 0x90
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnAttackFail; // 0x98
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnDefendSucc; // 0xA0
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnDefendFail; // 0xA8
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnDamage; // 0xB0
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnTakeDamage; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATMODIFIERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C979AB0429B43E79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatModifierConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatModifierConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATMODIFIERCONFIG_METHOD_2_C979AB0429B43E79_OFFSET))(a1, a2);
		}
	};
}
