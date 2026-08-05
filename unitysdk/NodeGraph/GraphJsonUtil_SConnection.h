#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace NodeGraph
{
	inline static constexpr unsigned int GraphJsonUtil_SConnection_TypeDefinitionIndex = 52348;

	struct alignas(8) GraphJsonUtil_SConnection
	{
		::System::UInt32 SourceId; // 0x10
		::System::UInt32 TargetId; // 0x14
		::System::String* SourcePortName; // 0x18
		::System::String* TargetPortName; // 0x20
	};
}
