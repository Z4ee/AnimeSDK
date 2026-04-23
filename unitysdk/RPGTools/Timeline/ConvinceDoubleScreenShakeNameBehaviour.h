#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_469A5FF005CF3F5C;
namespace RPGTools::Timeline { class ConvinceDoubleScreenShakeNameClip; }

#define RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKENAMEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xB8B7C50)
#define RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKENAMEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB8B7F30)
#define RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKENAMEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8B7C70)
#define RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKENAMEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xB8B7C60)
#define RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKENAMEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8B7FC0)
#define RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKENAMEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB8B7FE0)
#define RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKENAMEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8B7FD0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ConvinceDoubleScreenShakeNameBehaviour_TypeDefinitionIndex = 44795;

	class ConvinceDoubleScreenShakeNameBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::ConvinceDoubleScreenShakeNameClip* _Clip_k__BackingField; // 0x10
		::Class_1_469A5FF005CF3F5C* _ShakeSource; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKENAMEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::ConvinceDoubleScreenShakeNameClip* get_Clip()
		{
			return ((::RPGTools::Timeline::ConvinceDoubleScreenShakeNameClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKENAMEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::ConvinceDoubleScreenShakeNameClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ConvinceDoubleScreenShakeNameClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKENAMEBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKENAMEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKENAMEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKENAMEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKENAMEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}
	};
}
