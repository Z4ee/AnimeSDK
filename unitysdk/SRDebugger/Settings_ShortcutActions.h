#pragma once
#include "unitysdk/unitysdk.h"

namespace SRDebugger
{
	inline static constexpr unsigned int Settings_ShortcutActions_TypeDefinitionIndex = 36422;

	enum class Settings_ShortcutActions : ::System::Int32
	{
		None = 0,
		OpenSystemInfoTab = 1,
		OpenConsoleTab = 2,
		OpenCommonOptionsTab = 3,
		OpenProfilerTab = 4,
		OpenBugReporterTab = 5,
		ClosePanel = 6,
		OpenPanel = 7,
		TogglePanel = 8,
		ShowBugReportPopover = 9,
		ToggleDockedConsole = 10,
		ToggleDockedProfiler = 11,
	};
}
