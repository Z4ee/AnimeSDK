#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIRABBOSSREWARDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x11B917F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABBossRewardRowWidgetController_Data_TypeDefinitionIndex = 82033;

	class UIRABBossRewardRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Int32 rewardRuleId; // 0x10
		::System::Int32 bossChallengeId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSREWARDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
