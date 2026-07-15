#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_TELEPORT_METHOD_3_C4F4A77FDAA48714_OFFSET UNITYSDK_OFFSET(0x1C378860)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_TELEPORT_METHOD_3_F7CAB374E93B8F26_OFFSET UNITYSDK_OFFSET(0x1C3788C0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_TELEPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3788B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_Teleport_TypeDefinitionIndex = 15123;

	class ChenLingBattleAbility_Teleport : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Sources; // 0x10
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Targets; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_TELEPORT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C4F4A77FDAA48714(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_Teleport*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_Teleport*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_TELEPORT_METHOD_3_C4F4A77FDAA48714_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F7CAB374E93B8F26(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_Teleport* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_Teleport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_TELEPORT_METHOD_3_F7CAB374E93B8F26_OFFSET))(a1, a2);
		}
	};
}
