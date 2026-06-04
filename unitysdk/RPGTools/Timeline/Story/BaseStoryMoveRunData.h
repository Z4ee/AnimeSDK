#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Story/BaseStoryMoveData.h"

namespace UnityEngine { class AnimationCurve; }

#define RPGTOOLS_TIMELINE_STORY_BASESTORYMOVERUNDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD057AE0)

namespace RPGTools::Timeline::Story
{
	inline static constexpr unsigned int BaseStoryMoveRunData_TypeDefinitionIndex = 45974;

	class BaseStoryMoveRunData : public ::RPGTools::Timeline::Story::BaseStoryMoveData
	{
	public:
		::UnityEngine::AnimationCurve* Pivot2StopDist; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORY_BASESTORYMOVERUNDATA__CTOR_OFFSET))(this);
		}
	};
}
