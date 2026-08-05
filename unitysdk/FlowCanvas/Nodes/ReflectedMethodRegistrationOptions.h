#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ReflectedMethodRegistrationOptions_TypeDefinitionIndex = 29934;

	struct alignas(4) ReflectedMethodRegistrationOptions
	{
		::System::Boolean callable; // 0x10
		::System::Boolean exposeParams; // 0x11
		::System::Int32 exposedParamsCount; // 0x14
	};
}
