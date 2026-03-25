#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_YCORRECTIONENABLEMIXER_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xABBA550)
#define RPGTOOLS_TIMELINE_YCORRECTIONENABLEMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0xABBA990)
#define RPGTOOLS_TIMELINE_YCORRECTIONENABLEMIXER___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xABBA9A0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int YCorrectionEnableMixer_TypeDefinitionIndex = 39233;

	class YCorrectionEnableMixer : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* _CharacterUniqueName; // 0x10
		::System::Boolean _Work; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_YCORRECTIONENABLEMIXER__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_YCORRECTIONENABLEMIXER_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_YCORRECTIONENABLEMIXER___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
