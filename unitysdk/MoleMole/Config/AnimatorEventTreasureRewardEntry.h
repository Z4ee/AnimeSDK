#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTTREASUREREWARDENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xF12DFA0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTTREASUREREWARDENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xF12E020)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventTreasureRewardEntry_TypeDefinitionIndex = 71420;

	class AnimatorEventTreasureRewardEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Int32 overridePickType; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTREASUREREWARDENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTREASUREREWARDENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
