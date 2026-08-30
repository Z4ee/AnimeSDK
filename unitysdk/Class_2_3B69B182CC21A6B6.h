#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class CharacterStoryMoveStartData; }

#define CLASS_2_3B69B182CC21A6B6_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x18E57CB0)
#define CLASS_2_3B69B182CC21A6B6_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x18E57B60)
#define CLASS_2_3B69B182CC21A6B6_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x18E57C30)
#define CLASS_2_3B69B182CC21A6B6__CTOR_OFFSET UNITYSDK_OFFSET(0x18E57DD0)

inline static constexpr unsigned int Class_2_3B69B182CC21A6B6_TypeDefinitionIndex = 48471;

class Class_2_3B69B182CC21A6B6 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::RPGTools::Timeline::CharacterStoryMoveStartData* EABKOHGCHFP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B69B182CC21A6B6__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_3B69B182CC21A6B6_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_3B69B182CC21A6B6_PREPAREFRAME_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_3B69B182CC21A6B6_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}
};
