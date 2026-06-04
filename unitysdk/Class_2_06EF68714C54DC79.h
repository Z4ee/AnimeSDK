#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline::VFX { class VFXAnimatorCrossFadeClip; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }

#define CLASS_2_06EF68714C54DC79_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xA9F3630)
#define CLASS_2_06EF68714C54DC79_METHOD_2_84BA6EEA01F1766D_OFFSET UNITYSDK_OFFSET(0xA9F3930)
#define CLASS_2_06EF68714C54DC79_METHOD_2_C1C0CB2C8B6124DE_OFFSET UNITYSDK_OFFSET(0xA9F3800)
#define CLASS_2_06EF68714C54DC79_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xA9F36D0)
#define CLASS_2_06EF68714C54DC79_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xA9F3650)
#define CLASS_2_06EF68714C54DC79_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xA9F3750)
#define CLASS_2_06EF68714C54DC79_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xA9F3640)
#define CLASS_2_06EF68714C54DC79__CTOR_OFFSET UNITYSDK_OFFSET(0xA9F39D0)
#define CLASS_2_06EF68714C54DC79___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xA9F39F0)
#define CLASS_2_06EF68714C54DC79___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xA9F39E0)
#define CLASS_2_06EF68714C54DC79___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xA9F3A00)

inline static constexpr unsigned int Class_2_06EF68714C54DC79_TypeDefinitionIndex = 45932;

class Class_2_06EF68714C54DC79 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::RPGTools::Timeline::VFX::VFXAnimatorCrossFadeClip* _Clip_k__BackingField; // 0x10
	::System::Boolean Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06EF68714C54DC79__CTOR_OFFSET))(this);
	}

	::RPGTools::Timeline::VFX::VFXAnimatorCrossFadeClip* get_Clip()
	{
		return ((::RPGTools::Timeline::VFX::VFXAnimatorCrossFadeClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06EF68714C54DC79_GET_CLIP_OFFSET))(this);
	}

	::System::Void set_Clip(::RPGTools::Timeline::VFX::VFXAnimatorCrossFadeClip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VFX::VFXAnimatorCrossFadeClip*))((::PBYTE)hIl2Cpp + CLASS_2_06EF68714C54DC79_SET_CLIP_OFFSET))(this, a1);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_06EF68714C54DC79_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_06EF68714C54DC79_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06EF68714C54DC79_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C1C0CB2C8B6124DE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06EF68714C54DC79_METHOD_2_C1C0CB2C8B6124DE_OFFSET))(this, a1);
	}

	::UnityEngine::Animator* Method_2_84BA6EEA01F1766D(::System::Object* a1)
	{
		return ((::UnityEngine::Animator*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06EF68714C54DC79_METHOD_2_84BA6EEA01F1766D_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_06EF68714C54DC79___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_06EF68714C54DC79___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06EF68714C54DC79___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}
};
