#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }

#define RPGTOOLS_TIMELINE_HIDEPROMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x19A5DFE0)
#define RPGTOOLS_TIMELINE_HIDEPROMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A5E530)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int HideProMixer_TypeDefinitionIndex = 46364;

	class HideProMixer : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Boolean PropStateInLevel; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEPROMIXER__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEPROMIXER_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}
	};
}
