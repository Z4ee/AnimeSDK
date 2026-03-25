#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Story/BaseStoryMoveData.h"

namespace UnityEngine { class AnimationCurve; }

#define RPGTOOLS_TIMELINE_STORY_BASESTORYMOVEWALKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xABA1F10)

namespace RPGTools::Timeline::Story
{
	inline static constexpr unsigned int BaseStoryMoveWalkData_TypeDefinitionIndex = 39481;

	class BaseStoryMoveWalkData : public ::RPGTools::Timeline::Story::BaseStoryMoveData
	{
	public:
		::UnityEngine::AnimationCurve* StopDistCurve; // 0x28
		::UnityEngine::AnimationCurve* TransitionDurationCurve; // 0x30
		::UnityEngine::AnimationCurve* TransitionOffsetCurve; // 0x38
		::UnityEngine::AnimationCurve* WalkStateSlowCurve; // 0x40
		::UnityEngine::AnimationCurve* StopSideCurve; // 0x48
		::System::Single StopBackLDist; // 0x50
		::System::Single StopBackRDist; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORY_BASESTORYMOVEWALKDATA__CTOR_OFFSET))(this);
		}
	};
}
