#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryTracingFramework/Foundation/GuidUtils_GuidWarp__buffer_e__FixedBuffer.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/ValueType.h"

namespace BinaryTracingFramework::Foundation
{
	inline static constexpr unsigned int GuidUtils_GuidWarp_TypeDefinitionIndex = 32439;

	struct alignas(8) GuidUtils_GuidWarp
	{
		::System::Guid guid; // 0x10
		::BinaryTracingFramework::Foundation::GuidUtils_GuidWarp__buffer_e__FixedBuffer buffer; // 0x10
	};
}
