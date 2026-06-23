#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/ByteBufferAllocator.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

#define FLATBUFFERS_BYTEARRAYALLOCATOR_GET_READONLYSPAN_OFFSET UNITYSDK_OFFSET(0x1E210060)
#define FLATBUFFERS_BYTEARRAYALLOCATOR_GET_SPAN_OFFSET UNITYSDK_OFFSET(0x1E20FFE0)
#define FLATBUFFERS_BYTEARRAYALLOCATOR_GROWFRONT_OFFSET UNITYSDK_OFFSET(0x1E20FEF0)
#define FLATBUFFERS_BYTEARRAYALLOCATOR_INITBUFFER_OFFSET UNITYSDK_OFFSET(0x1E20FED0)
#define FLATBUFFERS_BYTEARRAYALLOCATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E20FEA0)

namespace FlatBuffers
{
	inline static constexpr unsigned int ByteArrayAllocator_TypeDefinitionIndex = 6719;

	class ByteArrayAllocator : public ::FlatBuffers::ByteBufferAllocator
	{
	public:
		::Il2CppArray<::System::Byte>* _buffer; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEARRAYALLOCATOR__CTOR_OFFSET))(this, buffer);
		}

		::System::Void GrowFront(::System::Int32 newSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEARRAYALLOCATOR_GROWFRONT_OFFSET))(this, newSize);
		}

		::System::Span_1<::System::Byte> get_Span()
		{
			return ((::System::Span_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEARRAYALLOCATOR_GET_SPAN_OFFSET))(this);
		}

		::System::ReadOnlySpan_1<::System::Byte> get_ReadOnlySpan()
		{
			return ((::System::ReadOnlySpan_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEARRAYALLOCATOR_GET_READONLYSPAN_OFFSET))(this);
		}

		::System::Void InitBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEARRAYALLOCATOR_INITBUFFER_OFFSET))(this);
		}
	};
}
