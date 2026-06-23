#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace UnityEngine { class Animation; }

#define CLASS_2_B7EE00AB623C98BE_METHOD_2_2FE6E80B753999C0_OFFSET UNITYSDK_OFFSET(0x123A0AE0)
#define CLASS_2_B7EE00AB623C98BE_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0x123A0AD0)
#define CLASS_2_B7EE00AB623C98BE_METHOD_2_79ED6854413CA2F4_2_OFFSET UNITYSDK_OFFSET(0x123A0DE0)
#define CLASS_2_B7EE00AB623C98BE_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x123A0AC0)
#define CLASS_2_B7EE00AB623C98BE_METHOD_2_F46C7E53386150D3_OFFSET UNITYSDK_OFFSET(0x123A0B30)
#define CLASS_2_B7EE00AB623C98BE_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x123A0A30)
#define CLASS_2_B7EE00AB623C98BE_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x123A09B0)
#define CLASS_2_B7EE00AB623C98BE_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x123A06C0)
#define CLASS_2_B7EE00AB623C98BE__CTOR_OFFSET UNITYSDK_OFFSET(0x123A0AB0)

inline static constexpr unsigned int Class_2_B7EE00AB623C98BE_TypeDefinitionIndex = 55728;

class Class_2_B7EE00AB623C98BE : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::UnityEngine::Animation* Field_2_2; // 0x10
	::System::Single Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7EE00AB623C98BE__CTOR_OFFSET))(this);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_B7EE00AB623C98BE_PREPAREFRAME_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_B7EE00AB623C98BE_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_B7EE00AB623C98BE_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_B7EE00AB623C98BE_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_B7EE00AB623C98BE_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2FE6E80B753999C0(::UnityEngine::Animation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + CLASS_2_B7EE00AB623C98BE_METHOD_2_2FE6E80B753999C0_OFFSET))(this, a1);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::Class_2_B7EE00AB623C98BE*> Method_2_F46C7E53386150D3(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Animation* a2)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::Class_2_B7EE00AB623C98BE*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + CLASS_2_B7EE00AB623C98BE_METHOD_2_F46C7E53386150D3_OFFSET))(a1, a2);
	}

	::System::Void Method_2_79ED6854413CA2F4_2(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_B7EE00AB623C98BE_METHOD_2_79ED6854413CA2F4_2_OFFSET))(this, a1, a2);
	}
};
