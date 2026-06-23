#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIRABBOSSSWEEPREWARDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16EBB8D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABBossSweepRewardRowWidgetController_Data_TypeDefinitionIndex = 49898;

	class UIRABBossSweepRewardRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Int32 rewardRuleId; // 0x10
		::System::Int32 bossChallengeId; // 0x14
		::System::Boolean isUnlock; // 0x18
		::System::Boolean isNowPhase; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSSWEEPREWARDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
