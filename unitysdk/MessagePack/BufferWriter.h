#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/SequencePool_Rental.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueType.h"

namespace MessagePack { class SequencePool; }
namespace System::Buffers { template <typename T> class IBufferWriter_1; }

#define MESSAGEPACK_BUFFERWRITER_ADVANCE_OFFSET UNITYSDK_OFFSET(0xA57300)
#define MESSAGEPACK_BUFFERWRITER_COMMIT_OFFSET UNITYSDK_OFFSET(0xA572F0)
#define MESSAGEPACK_BUFFERWRITER_ENSUREMORE_OFFSET UNITYSDK_OFFSET(0xA57540)
#define MESSAGEPACK_BUFFERWRITER_ENSURE_OFFSET UNITYSDK_OFFSET(0xA573E0)
#define MESSAGEPACK_BUFFERWRITER_GETPOINTER_OFFSET UNITYSDK_OFFSET(0xA57270)
#define MESSAGEPACK_BUFFERWRITER_GETRAWSPAN_OFFSET UNITYSDK_OFFSET(0xA57220)
#define MESSAGEPACK_BUFFERWRITER_GETSPAN_OFFSET UNITYSDK_OFFSET(0xA571E0)
#define MESSAGEPACK_BUFFERWRITER_GET_BYTESCOMMITTED_OFFSET UNITYSDK_OFFSET(0x45C240)
#define MESSAGEPACK_BUFFERWRITER_GET_SEQUENCERENTAL_OFFSET UNITYSDK_OFFSET(0xA571D0)
#define MESSAGEPACK_BUFFERWRITER_GET_SPAN_OFFSET UNITYSDK_OFFSET(0x41E9C0)
#define MESSAGEPACK_BUFFERWRITER_GET_UNDERLYINGWRITER_OFFSET UNITYSDK_OFFSET(0x259D70)
#define MESSAGEPACK_BUFFERWRITER_MIGRATETOSEQUENCE_OFFSET UNITYSDK_OFFSET(0xA57580)
#define MESSAGEPACK_BUFFERWRITER_TRYGETUNCOMMITTEDSPAN_OFFSET UNITYSDK_OFFSET(0xA573F0)
#define MESSAGEPACK_BUFFERWRITER_WRITEMULTIBUFFER_OFFSET UNITYSDK_OFFSET(0xA57550)
#define MESSAGEPACK_BUFFERWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0xA57330)
#define MESSAGEPACK_BUFFERWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA571C0)
#define MESSAGEPACK_BUFFERWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0xA570C0)

namespace MessagePack
{
	inline static constexpr unsigned int BufferWriter_TypeDefinitionIndex = 29941;

	struct alignas(8) BufferWriter
	{
		::System::Buffers::IBufferWriter_1<::System::Byte>* _output; // 0x10
		::System::Span_1<::System::Byte> _span; // 0x18
		::System::ArraySegment_1<::System::Byte> _segment; // 0x30
		::System::Int32 _buffered; // 0x40
		::System::Int64 _bytesCommitted; // 0x48
		::MessagePack::SequencePool* _sequencePool; // 0x50
		::MessagePack::SequencePool_Rental _rental; // 0x58

		::System::Void _ctor(::System::Buffers::IBufferWriter_1<::System::Byte>* output)
		{
			return ((::System::Void(*)(::PVOID, ::System::Buffers::IBufferWriter_1<::System::Byte>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER__CTOR_OFFSET))(this, output);
		}

		::System::Void _ctor_1(::MessagePack::SequencePool* sequencePool, ::Il2CppArray<::System::Byte>* array)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::SequencePool*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER__CTOR_1_OFFSET))(this, sequencePool, array);
		}

		::System::Span_1<::System::Byte> get_Span()
		{
			return ((::System::Span_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_GET_SPAN_OFFSET))(this);
		}

		::System::Int64 get_BytesCommitted()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_GET_BYTESCOMMITTED_OFFSET))(this);
		}

		::System::Buffers::IBufferWriter_1<::System::Byte>* get_UnderlyingWriter()
		{
			return ((::System::Buffers::IBufferWriter_1<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_GET_UNDERLYINGWRITER_OFFSET))(this);
		}

		::MessagePack::SequencePool_Rental get_SequenceRental()
		{
			return ((::MessagePack::SequencePool_Rental(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_GET_SEQUENCERENTAL_OFFSET))(this);
		}

		::System::Span_1<::System::Byte> GetSpan(::System::Int32 sizeHint)
		{
			return ((::System::Span_1<::System::Byte>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_GETSPAN_OFFSET))(this, sizeHint);
		}

		::System::Span_1<::System::Byte> GetRawSpan()
		{
			return ((::System::Span_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_GETRAWSPAN_OFFSET))(this);
		}

		::System::Byte& GetPointer(::System::Int32 sizeHint)
		{
			return ((::System::Byte&(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_GETPOINTER_OFFSET))(this, sizeHint);
		}

		::System::Void Commit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_COMMIT_OFFSET))(this);
		}

		::System::Void Advance(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_ADVANCE_OFFSET))(this, count);
		}

		/*
		::System::Void Write(::System::ReadOnlySpan_1<::System::Byte> source)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_WRITE_OFFSET))(this, source);
		}
		*/

		::System::Void Ensure(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_ENSURE_OFFSET))(this, count);
		}

		/*
		::System::Boolean TryGetUncommittedSpan(::System::ReadOnlySpan_1<::System::Byte>& span)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>&))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_TRYGETUNCOMMITTEDSPAN_OFFSET))(this, span);
		}
		*/

		::System::Void EnsureMore(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_ENSUREMORE_OFFSET))(this, count);
		}

		/*
		::System::Void WriteMultiBuffer(::System::ReadOnlySpan_1<::System::Byte> source)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_WRITEMULTIBUFFER_OFFSET))(this, source);
		}
		*/

		::System::Void MigrateToSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_MIGRATETOSEQUENCE_OFFSET))(this);
		}
	};
}
