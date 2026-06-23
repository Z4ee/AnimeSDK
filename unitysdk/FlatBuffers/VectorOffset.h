#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FLATBUFFERS_VECTOROFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x2B66C0)

namespace FlatBuffers
{
	inline static constexpr unsigned int VectorOffset_TypeDefinitionIndex = 6731;

	struct alignas(4) VectorOffset
	{
		::System::Int32 Value; // 0x10

		::System::Void _ctor(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_VECTOROFFSET__CTOR_OFFSET))(this, value);
		}
	};
}
