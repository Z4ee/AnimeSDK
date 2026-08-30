#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class CharacterStoryMoveStopData; }

#define CLASS_2_FAEB694DAA03B834_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1686EA50)
#define CLASS_2_FAEB694DAA03B834_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1686E900)
#define CLASS_2_FAEB694DAA03B834_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1686E9D0)
#define CLASS_2_FAEB694DAA03B834__CTOR_OFFSET UNITYSDK_OFFSET(0x1686EB70)

inline static constexpr unsigned int Class_2_FAEB694DAA03B834_TypeDefinitionIndex = 48475;

class Class_2_FAEB694DAA03B834 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::RPGTools::Timeline::CharacterStoryMoveStopData* EABKOHGCHFP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAEB694DAA03B834__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_FAEB694DAA03B834_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_FAEB694DAA03B834_PREPAREFRAME_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_FAEB694DAA03B834_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}
};
