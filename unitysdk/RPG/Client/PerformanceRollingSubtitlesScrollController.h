#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::GameCore { class PerformanceRollingSubtitlesScrollEffectParam; }
namespace System { class Action; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESSCROLLCONTROLLER_STARTSCROLL_OFFSET UNITYSDK_OFFSET(0xDA5A5D0)
#define RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESSCROLLCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xDA5A230)
#define RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESSCROLLCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xDA5A310)
#define RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESSCROLLCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDA5A730)
#define RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESSCROLLCONTROLLER__ONSCROLLFINISH_OFFSET UNITYSDK_OFFSET(0xDA5A440)
#define RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESSCROLLCONTROLLER___ONSCROLLFINISH_B__3_0_OFFSET UNITYSDK_OFFSET(0xDA5A740)

namespace RPG::Client
{
	inline static constexpr unsigned int PerformanceRollingSubtitlesScrollController_TypeDefinitionIndex = 72771;

	class PerformanceRollingSubtitlesScrollController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* ScrollRectTransform; // 0x18
		::System::Single IntervalTime; // 0x20
		::System::Single ScrollSpeed; // 0x24
		::System::Action* _ScrollEndCallback; // 0x28
		::System::Boolean _IsScrolling; // 0x30
		::System::Single _TotalDistance; // 0x34
		::System::Single _IntervalTime; // 0x38
		::System::Single _ScrollSpeed; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESSCROLLCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESSCROLLCONTROLLER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESSCROLLCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void StartScroll(::System::Action* a1, ::RPG::GameCore::PerformanceRollingSubtitlesScrollEffectParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::RPG::GameCore::PerformanceRollingSubtitlesScrollEffectParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESSCROLLCONTROLLER_STARTSCROLL_OFFSET))(this, a1, a2);
		}

		::System::Void _OnScrollFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESSCROLLCONTROLLER__ONSCROLLFINISH_OFFSET))(this);
		}

		::System::Void __OnScrollFinish_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEROLLINGSUBTITLESSCROLLCONTROLLER___ONSCROLLFINISH_B__3_0_OFFSET))(this);
		}
	};
}
