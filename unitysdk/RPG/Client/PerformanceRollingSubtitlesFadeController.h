#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::GameCore { class PerformanceRollingSubtitlesFullScreenEffectParam; }
namespace System { class Action; }
namespace UnityEngine { class CanvasGroup; }

#define RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESFADECONTROLLER_STARTFADE_OFFSET UNITYSDK_OFFSET(0x9F2E480)
#define RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESFADECONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x9F2E050)
#define RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESFADECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9F2E110)
#define RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESFADECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9F2E690)
#define RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESFADECONTROLLER__ONFADEOUTFINISH_OFFSET UNITYSDK_OFFSET(0x9F2E340)
#define RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESFADECONTROLLER__STARTFADEIN_OFFSET UNITYSDK_OFFSET(0x9F2E5B0)
#define RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESFADECONTROLLER__STARTFADEOUT_OFFSET UNITYSDK_OFFSET(0x9F2E620)
#define RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESFADECONTROLLER___ONFADEOUTFINISH_B__5_0_OFFSET UNITYSDK_OFFSET(0x9F2E6A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PerformanceRollingSubtitlesFadeController_TypeDefinitionIndex = 59716;

	class PerformanceRollingSubtitlesFadeController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::CanvasGroup* FadeCanvas; // 0x18
		::System::Single IntervalTime; // 0x20
		::System::Single ResidenceTime; // 0x24
		::System::Single FadeInDuration; // 0x28
		::System::Single FadeOutDuration; // 0x2C
		::System::Action* _FadeEndCallback; // 0x30
		::System::Boolean _IsFadeIn; // 0x38
		::System::Boolean _IsInDuration; // 0x39
		::System::Single _FadeTime; // 0x3C
		::System::Single _IntervalTime; // 0x40
		::System::Single _ResidenceTime; // 0x44
		::System::Single _FadeInDuration; // 0x48
		::System::Single _FadeOutDuration; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESFADECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESFADECONTROLLER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESFADECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void StartFade(::System::Action* fadeEndCallback, ::RPG::GameCore::PerformanceRollingSubtitlesFullScreenEffectParam* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::RPG::GameCore::PerformanceRollingSubtitlesFullScreenEffectParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESFADECONTROLLER_STARTFADE_OFFSET))(this, fadeEndCallback, param);
		}

		::System::Void _StartFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESFADECONTROLLER__STARTFADEIN_OFFSET))(this);
		}

		::System::Void _StartFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESFADECONTROLLER__STARTFADEOUT_OFFSET))(this);
		}

		::System::Void _OnFadeOutFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESFADECONTROLLER__ONFADEOUTFINISH_OFFSET))(this);
		}

		::System::Void __OnFadeOutFinish_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESFADECONTROLLER___ONFADEOUTFINISH_B__5_0_OFFSET))(this);
		}
	};
}
