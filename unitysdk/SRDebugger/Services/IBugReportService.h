#pragma once
#include "unitysdk/unitysdk.h"

namespace SRDebugger::Services { class BugReport; }
namespace SRDebugger::Services { class BugReportCompleteCallback; }
namespace SRDebugger::Services { class BugReportProgressCallback; }

namespace SRDebugger::Services
{
	inline static constexpr unsigned int IBugReportService_TypeDefinitionIndex = 36501;

	class IBugReportService
	{
	public:
	};
}
