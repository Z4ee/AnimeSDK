#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_C0B6729114B2E0B0;
namespace System { class Object; }

#define CLASS_2_BB813FF6ACB075B0_METHOD_2_BF721A0C6A4509F1_OFFSET UNITYSDK_OFFSET(0xB8DFBF0)
#define CLASS_2_BB813FF6ACB075B0_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB8DF3D0)
#define CLASS_2_BB813FF6ACB075B0_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8DEF30)
#define CLASS_2_BB813FF6ACB075B0_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB8DF500)
#define CLASS_2_BB813FF6ACB075B0__CTOR_OFFSET UNITYSDK_OFFSET(0xB8DFE70)

inline static constexpr unsigned int Class_2_BB813FF6ACB075B0_TypeDefinitionIndex = 47902;

class Class_2_BB813FF6ACB075B0 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Class_1_C0B6729114B2E0B0* ENNACIEALGC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB813FF6ACB075B0__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_BB813FF6ACB075B0_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_BB813FF6ACB075B0_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BB813FF6ACB075B0_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_BF721A0C6A4509F1(::UnityEngine::Playables::Playable a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BB813FF6ACB075B0_METHOD_2_BF721A0C6A4509F1_OFFSET))(this, a1, a2);
	}
};
