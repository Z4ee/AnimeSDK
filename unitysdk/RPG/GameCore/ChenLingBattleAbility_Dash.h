#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_DASH_METHOD_3_94798A74CF4D3DC3_OFFSET UNITYSDK_OFFSET(0x187DE8D0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_DASH_METHOD_3_DA1005979443DEF4_OFFSET UNITYSDK_OFFSET(0x187DE870)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_DASH__CTOR_OFFSET UNITYSDK_OFFSET(0x187DE8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_Dash_TypeDefinitionIndex = 14895;

	class ChenLingBattleAbility_Dash : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* DashTarget; // 0x10
		::System::Single RotationSpeed; // 0x18
		::System::Single DashSpeed; // 0x1C
		::System::Single StartDashNormalizedTime; // 0x20
		::System::Single EndDashNormalizedTime; // 0x24
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*>* OnCollision; // 0x28
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*>* OnStartDash; // 0x30
		::System::Single CollisionRadius; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_DASH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DA1005979443DEF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_Dash*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_Dash*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_DASH_METHOD_3_DA1005979443DEF4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_94798A74CF4D3DC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_Dash* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_Dash*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_DASH_METHOD_3_94798A74CF4D3DC3_OFFSET))(a1, a2);
		}
	};
}
