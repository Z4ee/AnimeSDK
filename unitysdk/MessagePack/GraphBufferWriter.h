#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/BufferWriter.h"
#include "unitysdk/MessagePack/GraphBufferWriter_MODE.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueType.h"

namespace MessagePack { class GraphMemoryStreamBufferWriter; }
namespace MessagePack { class SequencePool; }

#define MESSAGEPACK_GRAPHBUFFERWRITER_ADVANCE_OFFSET UNITYSDK_OFFSET(0x981510)
#define MESSAGEPACK_GRAPHBUFFERWRITER_ENSUREMORE_OFFSET UNITYSDK_OFFSET(0x9BD2E0)
#define MESSAGEPACK_GRAPHBUFFERWRITER_ENSURE_OFFSET UNITYSDK_OFFSET(0x9BD1E0)
#define MESSAGEPACK_GRAPHBUFFERWRITER_GETPOINTER_OFFSET UNITYSDK_OFFSET(0x9BD130)
#define MESSAGEPACK_GRAPHBUFFERWRITER_GETRAWSPAN_OFFSET UNITYSDK_OFFSET(0x981030)
#define MESSAGEPACK_GRAPHBUFFERWRITER_GETSPAN_OFFSET UNITYSDK_OFFSET(0x9BD0C0)
#define MESSAGEPACK_GRAPHBUFFERWRITER_GET_BYTESCOMMITTED_OFFSET UNITYSDK_OFFSET(0x980ED0)
#define MESSAGEPACK_GRAPHBUFFERWRITER_GET_SPAN_OFFSET UNITYSDK_OFFSET(0x9BD090)
#define MESSAGEPACK_GRAPHBUFFERWRITER_TRYGETUNCOMMITTEDSPAN_OFFSET UNITYSDK_OFFSET(0x9BD200)
#define MESSAGEPACK_GRAPHBUFFERWRITER_WRITEMULTIBUFFER_OFFSET UNITYSDK_OFFSET(0x9BD2F0)
#define MESSAGEPACK_GRAPHBUFFERWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x981090)
#define MESSAGEPACK_GRAPHBUFFERWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9BCFD0)
#define MESSAGEPACK_GRAPHBUFFERWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x9BCF00)

namespace MessagePack
{
	inline static constexpr unsigned int GraphBufferWriter_TypeDefinitionIndex = 31101;

	struct alignas(8) GraphBufferWriter
	{
		::MessagePack::GraphMemoryStreamBufferWriter* _output; // 0x10
		::System::Span_1<::System::Byte> _span; // 0x18
		::System::Int64 _bytesCommitted; // 0x30
		::MessagePack::GraphBufferWriter_MODE _workMode; // 0x38
		::MessagePack::BufferWriter _wrapWriter; // 0x40

		::System::Void _ctor(::MessagePack::GraphMemoryStreamBufferWriter* output)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::GraphMemoryStreamBufferWriter*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER__CTOR_OFFSET))(this, output);
		}

		::System::Void _ctor_1(::MessagePack::SequencePool* sequencePool, ::Il2CppArray<::System::Byte>* array)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::SequencePool*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER__CTOR_1_OFFSET))(this, sequencePool, array);
		}

		::System::Span_1<::System::Byte> get_Span()
		{
			return ((::System::Span_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER_GET_SPAN_OFFSET))(this);
		}

		::System::Int64 get_BytesCommitted()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER_GET_BYTESCOMMITTED_OFFSET))(this);
		}

		::System::Span_1<::System::Byte> GetSpan(::System::Int32 sizeHint)
		{
			return ((::System::Span_1<::System::Byte>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER_GETSPAN_OFFSET))(this, sizeHint);
		}

		::System::Span_1<::System::Byte> GetRawSpan()
		{
			return ((::System::Span_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER_GETRAWSPAN_OFFSET))(this);
		}

		::System::Byte& GetPointer(::System::Int32 sizeHint)
		{
			return ((::System::Byte&(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER_GETPOINTER_OFFSET))(this, sizeHint);
		}

		::System::Void Advance(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER_ADVANCE_OFFSET))(this, count);
		}

		/*
		::System::Void Write(::System::ReadOnlySpan_1<::System::Byte> source)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER_WRITE_OFFSET))(this, source);
		}
		*/

		::System::Void Ensure(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER_ENSURE_OFFSET))(this, count);
		}

		/*
		::System::Boolean TryGetUncommittedSpan(::System::ReadOnlySpan_1<::System::Byte>& span)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>&))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER_TRYGETUNCOMMITTEDSPAN_OFFSET))(this, span);
		}
		*/

		::System::Void EnsureMore(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER_ENSUREMORE_OFFSET))(this, count);
		}

		/*
		::System::Void WriteMultiBuffer(::System::ReadOnlySpan_1<::System::Byte> source)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER_WRITEMULTIBUFFER_OFFSET))(this, source);
		}
		*/
	};
}
