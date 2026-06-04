#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"
#include "unitysdk/RPG/GameCore/ChenLingTeamSelectorType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LEAPSLAMTARGET_METHOD_3_86376D488D8DD5BD_OFFSET UNITYSDK_OFFSET(0x19624190)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LEAPSLAMTARGET_METHOD_3_B5CC814241005665_OFFSET UNITYSDK_OFFSET(0x19624130)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LEAPSLAMTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19624180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_LeapSlamTarget_TypeDefinitionIndex = 15001;

	class ChenLingBattleTargetEvaluator_LeapSlamTarget : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::RPG::GameCore::ChenLingTeamSelectorType TeamSelectorType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LEAPSLAMTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B5CC814241005665(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LeapSlamTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LeapSlamTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LEAPSLAMTARGET_METHOD_3_B5CC814241005665_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_86376D488D8DD5BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LeapSlamTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LeapSlamTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LEAPSLAMTARGET_METHOD_3_86376D488D8DD5BD_OFFSET))(a1, a2);
		}
	};
}
