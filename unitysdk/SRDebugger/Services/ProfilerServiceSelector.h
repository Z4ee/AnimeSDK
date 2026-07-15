#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define SRDEBUGGER_SERVICES_PROFILERSERVICESELECTOR_GETPROFILERSERVICETYPE_OFFSET UNITYSDK_OFFSET(0x1A20AF50)

namespace SRDebugger::Services
{
	inline static constexpr unsigned int ProfilerServiceSelector_TypeDefinitionIndex = 36516;

	class ProfilerServiceSelector : public ::System::Object
	{
	public:
		static ::System::Type* GetProfilerServiceType()
		{
			return ((::System::Type*(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_PROFILERSERVICESELECTOR_GETPROFILERSERVICETYPE_OFFSET))();
		}
	};
}
