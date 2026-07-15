#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MESSAGEPACK_UNITY_EXTENSION_REVERSEENDIANESSHELPERSIMPLESINGLE_REVERSEENDIANESS_OFFSET UNITYSDK_OFFSET(0x3AFF530)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int ReverseEndianessHelperSimpleSingle_TypeDefinitionIndex = 9863;

	struct alignas(1) ReverseEndianessHelperSimpleSingle
	{
		/*
		::System::Void ReverseEndianess(::System::Span_1<::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_REVERSEENDIANESSHELPERSIMPLESINGLE_REVERSEENDIANESS_OFFSET))(this, a1);
		}
		*/
	};
}
