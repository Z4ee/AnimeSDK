#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_E3C0F091037CDE77;
namespace System { class Object; }

#define CLASS_2_BB813FF6ACB075B0_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1521CA70)
#define CLASS_2_BB813FF6ACB075B0_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1521CF10)
#define CLASS_2_BB813FF6ACB075B0__CTOR_OFFSET UNITYSDK_OFFSET(0x1521D5C0)

inline static constexpr unsigned int Class_2_BB813FF6ACB075B0_TypeDefinitionIndex = 46128;

class Class_2_BB813FF6ACB075B0 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Class_1_E3C0F091037CDE77* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB813FF6ACB075B0__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_BB813FF6ACB075B0_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BB813FF6ACB075B0_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}
};
