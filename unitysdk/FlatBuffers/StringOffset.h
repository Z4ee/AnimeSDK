#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FLATBUFFERS_STRINGOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x3253A0)

namespace FlatBuffers
{
	inline static constexpr unsigned int StringOffset_TypeDefinitionIndex = 6734;

	struct alignas(4) StringOffset
	{
		::System::Int32 Value; // 0x10

		::System::Void _ctor(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_STRINGOFFSET__CTOR_OFFSET))(this, value);
		}
	};
}
