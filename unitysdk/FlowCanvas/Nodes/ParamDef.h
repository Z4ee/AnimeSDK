#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ParamMode.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ParamDef_TypeDefinitionIndex = 28033;

	struct alignas(8) ParamDef
	{
		::System::Type* paramType; // 0x10
		::System::Type* arrayType; // 0x18
		::FlowCanvas::Nodes::ParamMode paramMode; // 0x20
		::System::String* portName; // 0x28
		::System::String* portId; // 0x30
		::System::Boolean isParamsArray; // 0x38
		::System::Reflection::MemberInfo* presentedInfo; // 0x40
	};
}
