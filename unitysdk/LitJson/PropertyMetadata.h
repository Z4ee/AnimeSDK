#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }

namespace LitJson
{
	inline static constexpr unsigned int PropertyMetadata_TypeDefinitionIndex = 8083;

	struct alignas(8) PropertyMetadata
	{
		::System::Reflection::MemberInfo* Info; // 0x10
		::System::Boolean IsField; // 0x18
		::System::Type* Type; // 0x20
	};
}
