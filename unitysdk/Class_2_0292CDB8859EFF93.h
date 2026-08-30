#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_C0B6729114B2E0B0;
namespace System { class Object; }

#define CLASS_2_0292CDB8859EFF93_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1A7C0A70)
#define CLASS_2_0292CDB8859EFF93_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1A7C0BD0)
#define CLASS_2_0292CDB8859EFF93__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C10B0)

inline static constexpr unsigned int Class_2_0292CDB8859EFF93_TypeDefinitionIndex = 48370;

class Class_2_0292CDB8859EFF93 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Class_1_C0B6729114B2E0B0* ENNACIEALGC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0292CDB8859EFF93__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_0292CDB8859EFF93_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0292CDB8859EFF93_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}
};
