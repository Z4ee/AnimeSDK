#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_StatusVerbosity.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ThriftSharedMemoryBufferType.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_ThriftServerOptions_TypeDefinitionIndex = 38338;

	struct alignas(8) HAPI_ThriftServerOptions
	{
		::System::Boolean autoClose; // 0x10
		::System::Single timeoutMs; // 0x14
		::HoudiniEngineUnity::HAPI_StatusVerbosity verbosity; // 0x18
		::HoudiniEngineUnity::HAPI_ThriftSharedMemoryBufferType sharedMemoryBufferType; // 0x1C
		::System::Int64 sharedMemoryBufferSize; // 0x20
	};
}
