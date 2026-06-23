#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

#define FLATBUFFERS_BYTEBUFFERALLOCATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E212930)
#define FLATBUFFERS_BYTEBUFFERALLOCATOR_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1E212940)
#define FLATBUFFERS_BYTEBUFFERALLOCATOR_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1E212950)
#define FLATBUFFERS_BYTEBUFFERALLOCATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E20FEC0)

namespace FlatBuffers
{
	inline static constexpr unsigned int ByteBufferAllocator_TypeDefinitionIndex = 6718;

	class ByteBufferAllocator : public ::System::Object
	{
	public:
		::System::Int32 _Length_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFERALLOCATOR__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFERALLOCATOR_DISPOSE_OFFSET))(this);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFERALLOCATOR_GET_LENGTH_OFFSET))(this);
		}

		::System::Void set_Length(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFERALLOCATOR_SET_LENGTH_OFFSET))(this, value);
		}
	};
}
