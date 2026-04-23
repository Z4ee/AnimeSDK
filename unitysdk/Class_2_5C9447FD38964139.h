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

#define CLASS_2_5C9447FD38964139_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xAA3A1B0)
#define CLASS_2_5C9447FD38964139_METHOD_2_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0xAA39F20)
#define CLASS_2_5C9447FD38964139_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAA3A370)
#define CLASS_2_5C9447FD38964139_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xAA3A5A0)
#define CLASS_2_5C9447FD38964139_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xAA3A4F0)
#define CLASS_2_5C9447FD38964139_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAA39AF0)
#define CLASS_2_5C9447FD38964139__CTOR_OFFSET UNITYSDK_OFFSET(0xAA3A650)
#define CLASS_2_5C9447FD38964139___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAA3A670)
#define CLASS_2_5C9447FD38964139___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xAA3A690)
#define CLASS_2_5C9447FD38964139___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xAA3A680)
#define CLASS_2_5C9447FD38964139___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAA3A660)

inline static constexpr unsigned int Class_2_5C9447FD38964139_TypeDefinitionIndex = 44812;

class Class_2_5C9447FD38964139 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	// static const ::System::Single Field_2_4; // 0x0
	// static const ::System::Single Field_2_5; // 0x0
	::UnityEngine::AnimationClip* Field_2_0; // 0x10
	::UnityEngine::Camera* Field_2_2; // 0x18
	::UnityEngine::Camera* Field_2_1; // 0x20
	::UnityEngine::GameObject* Field_2_8; // 0x28
	::System::Boolean Field_2_6; // 0x30
	::System::Boolean Field_2_9; // 0x31
	::UnityEngine::Vector3 Field_2_7; // 0x34
	::System::Single Field_2_11; // 0x40
	::System::Single Field_2_10; // 0x44
	::System::Double Field_2_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C9447FD38964139__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5C9447FD38964139_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_5C9447FD38964139_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C9447FD38964139_METHOD_2_6916CB2AB9451DD7_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C9447FD38964139_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_5C9447FD38964139_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_5C9447FD38964139_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5C9447FD38964139___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_5C9447FD38964139___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_5C9447FD38964139___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_5C9447FD38964139___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, P0);
	}
};
