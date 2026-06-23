#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }

#define GAUSSIANBLURVOLUMETIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x17DAE900)
#define GAUSSIANBLURVOLUMETIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x17DAE990)
#define GAUSSIANBLURVOLUMETIMELINEBEHAVIOUR___BASE_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x17DAE9A0)

inline static constexpr unsigned int GaussianBlurVolumeTimelineBehaviour_TypeDefinitionIndex = 73324;

class GaussianBlurVolumeTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Single maskRotation; // 0x10
	::System::Boolean isActive; // 0x14
	::System::Single maskTiling; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUSSIANBLURVOLUMETIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + GAUSSIANBLURVOLUMETIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
	}

	::System::Void __base_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + GAUSSIANBLURVOLUMETIMELINEBEHAVIOUR___BASE_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
	}
};
