#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/VariantUnion_VariantType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

namespace NodeGraph
{
	inline static constexpr unsigned int VariantUnion_InternalUnionValue_TypeDefinitionIndex = 64411;

	struct alignas(8) VariantUnion_InternalUnionValue
	{
		::System::Boolean boolValue; // 0x18
		::System::Int32 intValue; // 0x18
		::System::Int64 longValue; // 0x18
		::System::Single floatValue; // 0x18
		::System::Double doubleValue; // 0x18
		::NodeGraph::VariantUnion_VariantType ValueType; // 0x20
		::System::String* stringValue; // 0x10
		::System::Object* objectValue; // 0x10
	};
}
