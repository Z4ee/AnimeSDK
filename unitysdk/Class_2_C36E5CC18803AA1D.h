#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_C36E5CC18803AA1D_METHOD_2_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x186CFAF0)
#define CLASS_2_C36E5CC18803AA1D_METHOD_2_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0x186CFD80)
#define CLASS_2_C36E5CC18803AA1D_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x186CFF50)
#define CLASS_2_C36E5CC18803AA1D_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x186D00E0)
#define CLASS_2_C36E5CC18803AA1D_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x186D0030)
#define CLASS_2_C36E5CC18803AA1D_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x186CF6D0)
#define CLASS_2_C36E5CC18803AA1D__CTOR_OFFSET UNITYSDK_OFFSET(0x186D0190)

inline static constexpr unsigned int Class_2_C36E5CC18803AA1D_TypeDefinitionIndex = 46283;

class Class_2_C36E5CC18803AA1D : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	::UnityEngine::GameObject* Field_2_2; // 0x10
	::UnityEngine::AnimationClip* Field_2_3; // 0x18
	::UnityEngine::Camera* Field_2_4; // 0x20
	::UnityEngine::Camera* Field_2_5; // 0x28
	::System::Double Field_2_6; // 0x30
	::System::Single Field_2_7; // 0x38
	::UnityEngine::Vector3 Field_2_8; // 0x3C
	::System::Single Field_2_9; // 0x48
	::System::Boolean Field_2_10; // 0x4C
	::System::Boolean Field_2_11; // 0x4D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C36E5CC18803AA1D__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C36E5CC18803AA1D_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_C36E5CC18803AA1D_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C36E5CC18803AA1D_METHOD_2_6916CB2AB9451DD7_OFFSET))(this);
	}

	::System::Void Method_2_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C36E5CC18803AA1D_METHOD_2_B235E757922104A8_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_C36E5CC18803AA1D_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_C36E5CC18803AA1D_ONGRAPHSTOP_OFFSET))(this, a1);
	}
};
