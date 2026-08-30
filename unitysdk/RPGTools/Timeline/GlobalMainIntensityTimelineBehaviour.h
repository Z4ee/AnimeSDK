#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }

#define RPGTOOLS_TIMELINE_GLOBALMAININTENSITYTIMELINEBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xE85F9D0)
#define RPGTOOLS_TIMELINE_GLOBALMAININTENSITYTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE85F1F0)
#define RPGTOOLS_TIMELINE_GLOBALMAININTENSITYTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE85FC70)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int GlobalMainIntensityTimelineBehaviour_TypeDefinitionIndex = 48925;

	class GlobalMainIntensityTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Boolean AutoReset; // 0x10
		::System::Single TargetInstensity; // 0x14
		::System::Single TargetFogDensity; // 0x18
		::System::Single StartDuration; // 0x1C
		::System::Single EndDuration; // 0x20
		::System::Boolean EnableEffect; // 0x24
		::System::Boolean _IsEnable; // 0x25
		::System::Boolean _EnableKeyFrame; // 0x26

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GLOBALMAININTENSITYTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GLOBALMAININTENSITYTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GLOBALMAININTENSITYTIMELINEBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}
	};
}
