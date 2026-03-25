#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_ThriftServerOptions_TypeDefinitionIndex = 37710;

	struct alignas(4) HAPI_ThriftServerOptions
	{
		::System::Boolean autoClose; // 0x10
		::System::Single timeoutMs; // 0x14
	};
}
