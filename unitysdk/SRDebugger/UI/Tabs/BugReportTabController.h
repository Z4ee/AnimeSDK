#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace SRDebugger::UI::Other { class BugReportSheetController; }
namespace UnityEngine { class RectTransform; }

#define SRDEBUGGER_UI_TABS_BUGREPORTTABCONTROLLER_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x1E675C50)
#define SRDEBUGGER_UI_TABS_BUGREPORTTABCONTROLLER_SCREENSHOTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1E69E050)
#define SRDEBUGGER_UI_TABS_BUGREPORTTABCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x1E69DE40)
#define SRDEBUGGER_UI_TABS_BUGREPORTTABCONTROLLER_TAKINGSCREENSHOT_OFFSET UNITYSDK_OFFSET(0x1E69DFB0)
#define SRDEBUGGER_UI_TABS_BUGREPORTTABCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E69E0D0)

namespace SRDebugger::UI::Tabs
{
	inline static constexpr unsigned int BugReportTabController_TypeDefinitionIndex = 37292;

	class BugReportTabController : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::SRDebugger::UI::Other::BugReportSheetController* BugReportSheetPrefab; // 0x48
		::UnityEngine::RectTransform* Container; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_BUGREPORTTABCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_BUGREPORTTABCONTROLLER_GET_ISENABLED_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_BUGREPORTTABCONTROLLER_START_OFFSET))(this);
		}

		::System::Void TakingScreenshot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_BUGREPORTTABCONTROLLER_TAKINGSCREENSHOT_OFFSET))(this);
		}

		::System::Void ScreenshotComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_BUGREPORTTABCONTROLLER_SCREENSHOTCOMPLETE_OFFSET))(this);
		}
	};
}
