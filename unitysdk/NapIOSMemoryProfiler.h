#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NAPIOSMEMORYPROFILER_CAPTURETOPATH_OFFSET UNITYSDK_OFFSET(0x11D98F70)
#define NAPIOSMEMORYPROFILER_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x11D98F60)

inline static constexpr unsigned int NapIOSMemoryProfiler_TypeDefinitionIndex = 70313;

class NapIOSMemoryProfiler : public ::System::Object
{
public:
	static ::System::Boolean get_IsEnabled()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NAPIOSMEMORYPROFILER_GET_ISENABLED_OFFSET))();
	}

	static ::System::Boolean CaptureToPath(::System::String* path)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + NAPIOSMEMORYPROFILER_CAPTURETOPATH_OFFSET))(path);
	}
};
