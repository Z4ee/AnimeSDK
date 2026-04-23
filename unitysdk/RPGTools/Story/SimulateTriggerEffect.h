#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Story/CapturePropConfig.h"

namespace RPG::GameCore { class TriggerEffectList; }

#define RPGTOOLS_STORY_SIMULATETRIGGEREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xB88DAB0)

namespace RPGTools::Story
{
	inline static constexpr unsigned int SimulateTriggerEffect_TypeDefinitionIndex = 45581;

	class SimulateTriggerEffect : public ::RPGTools::Story::CapturePropConfig
	{
	public:
		::RPG::GameCore::TriggerEffectList* TriggerEffectList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_STORY_SIMULATETRIGGEREFFECT__CTOR_OFFSET))(this);
		}
	};
}
