#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPGTools::Timeline { class CameraData; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Camera; }

#define CLASS_3_C434B835169B9137_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xE6510B0)
#define CLASS_3_C434B835169B9137_METHOD_3_235878319DB7536E_OFFSET UNITYSDK_OFFSET(0xE650670)
#define CLASS_3_C434B835169B9137_METHOD_3_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0xE6511B0)
#define CLASS_3_C434B835169B9137_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE650B50)
#define CLASS_3_C434B835169B9137_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xE651020)
#define CLASS_3_C434B835169B9137_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xE650E30)
#define CLASS_3_C434B835169B9137_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE6505C0)
#define CLASS_3_C434B835169B9137__CTOR_OFFSET UNITYSDK_OFFSET(0xE651160)
#define CLASS_3_C434B835169B9137___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE651180)
#define CLASS_3_C434B835169B9137___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xE6511A0)
#define CLASS_3_C434B835169B9137___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xE651190)
#define CLASS_3_C434B835169B9137___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE651170)

inline static constexpr unsigned int Class_3_C434B835169B9137_TypeDefinitionIndex = 45167;

class Class_3_C434B835169B9137 : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
{
public:
	// static const ::System::Single Field_3_5; // 0x0
	// static const ::System::Single Field_3_6; // 0x0
	::UnityEngine::AnimationClip* Field_3_0; // 0x18
	::UnityEngine::Animation* Field_3_1; // 0x20
	::RPGTools::Timeline::CameraData* Field_3_7; // 0x28
	::UnityEngine::Camera* Field_3_2; // 0x30
	::System::Double Field_3_3; // 0x38
	::System::Double Field_3_4; // 0x40
	::System::Single Field_3_9; // 0x48
	::System::Single Field_3_10; // 0x4C
	::System::Boolean Field_3_8; // 0x50
	::System::Single Field_3_12; // 0x54
	::System::Single Field_3_11; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C434B835169B9137__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_C434B835169B9137_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_3_C434B835169B9137_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_C434B835169B9137_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_C434B835169B9137_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_3_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C434B835169B9137_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_3_235878319DB7536E(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_C434B835169B9137_METHOD_3_235878319DB7536E_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_C434B835169B9137___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_3_C434B835169B9137___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_C434B835169B9137___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_C434B835169B9137___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, P0);
	}

	::System::Void Method_3_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C434B835169B9137_METHOD_3_BB2928BEC244DEB7_OFFSET))(this);
	}
};
