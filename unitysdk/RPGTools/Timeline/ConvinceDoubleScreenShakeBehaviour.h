#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_469A5FF005CF3F5C;
namespace RPGTools::Timeline { class ConvinceDoubleScreenShakeClip; }

#define RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xAB429A0)
#define RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB42C20)
#define RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB429C0)
#define RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xAB429B0)
#define RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB42CB0)
#define RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB42CD0)
#define RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB42CC0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ConvinceDoubleScreenShakeBehaviour_TypeDefinitionIndex = 38890;

	class ConvinceDoubleScreenShakeBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::ConvinceDoubleScreenShakeClip* _Clip_k__BackingField; // 0x10
		::Class_1_469A5FF005CF3F5C* _ShakeSource; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::ConvinceDoubleScreenShakeClip* get_Clip()
		{
			return ((::RPGTools::Timeline::ConvinceDoubleScreenShakeClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::ConvinceDoubleScreenShakeClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ConvinceDoubleScreenShakeClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKEBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}
	};
}
