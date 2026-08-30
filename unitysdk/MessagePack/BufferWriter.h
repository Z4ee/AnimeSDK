#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/SequencePool_Rental.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueType.h"

namespace MessagePack { class SequencePool; }
namespace System::Buffers { template <typename T> class IBufferWriter_1; }

#define MESSAGEPACK_BUFFERWRITER_ADVANCE_OFFSET UNITYSDK_OFFSET(0x3A94040)
#define MESSAGEPACK_BUFFERWRITER_COMMIT_OFFSET UNITYSDK_OFFSET(0x3A94030)
#define MESSAGEPACK_BUFFERWRITER_ENSUREMORE_OFFSET UNITYSDK_OFFSET(0x3A941C0)
#define MESSAGEPACK_BUFFERWRITER_ENSURE_OFFSET UNITYSDK_OFFSET(0x3A940E0)
#define MESSAGEPACK_BUFFERWRITER_GETPOINTER_OFFSET UNITYSDK_OFFSET(0x3A93F80)
#define MESSAGEPACK_BUFFERWRITER_GETSPAN_OFFSET UNITYSDK_OFFSET(0x3A93F40)
#define MESSAGEPACK_BUFFERWRITER_GET_SEQUENCERENTAL_OFFSET UNITYSDK_OFFSET(0x3A93F30)
#define MESSAGEPACK_BUFFERWRITER_GET_SPAN_OFFSET UNITYSDK_OFFSET(0x835390)
#define MESSAGEPACK_BUFFERWRITER_MIGRATETOSEQUENCE_OFFSET UNITYSDK_OFFSET(0x3A94200)
#define MESSAGEPACK_BUFFERWRITER_TRYGETUNCOMMITTEDSPAN_OFFSET UNITYSDK_OFFSET(0x3A940F0)
#define MESSAGEPACK_BUFFERWRITER_WRITEMULTIBUFFER_OFFSET UNITYSDK_OFFSET(0x3A941D0)
#define MESSAGEPACK_BUFFERWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x3A940B0)
#define MESSAGEPACK_BUFFERWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3A93F20)
#define MESSAGEPACK_BUFFERWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x3A93F10)

namespace MessagePack
{
	inline static constexpr unsigned int BufferWriter_TypeDefinitionIndex = 7105;

	struct alignas(8) BufferWriter
	{
		::System::Buffers::IBufferWriter_1<::System::Byte>* _output; // 0x10
		::System::Span_1<::System::Byte> _span; // 0x18
		::System::ArraySegment_1<::System::Byte> _segment; // 0x30
		::System::Int32 _buffered; // 0x40
		::System::Int64 _bytesCommitted; // 0x48
		::MessagePack::SequencePool* _sequencePool; // 0x50
		::MessagePack::SequencePool_Rental _rental; // 0x58

		::System::Void _ctor(::System::Buffers::IBufferWriter_1<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Buffers::IBufferWriter_1<::System::Byte>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::MessagePack::SequencePool* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::SequencePool*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Span_1<::System::Byte> get_Span()
		{
			return ((::System::Span_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_GET_SPAN_OFFSET))(this);
		}

		::MessagePack::SequencePool_Rental get_SequenceRental()
		{
			return ((::MessagePack::SequencePool_Rental(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_GET_SEQUENCERENTAL_OFFSET))(this);
		}

		::System::Span_1<::System::Byte> GetSpan(::System::Int32 a1)
		{
			return ((::System::Span_1<::System::Byte>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_GETSPAN_OFFSET))(this, a1);
		}

		::System::Byte& GetPointer(::System::Int32 a1)
		{
			return ((::System::Byte&(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_GETPOINTER_OFFSET))(this, a1);
		}

		::System::Void Commit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_COMMIT_OFFSET))(this);
		}

		::System::Void Advance(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_ADVANCE_OFFSET))(this, a1);
		}

		/*
		::System::Void Write(::System::ReadOnlySpan_1<::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_WRITE_OFFSET))(this, a1);
		}
		*/

		::System::Void Ensure(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_ENSURE_OFFSET))(this, a1);
		}

		/*
		::System::Boolean TryGetUncommittedSpan(::System::ReadOnlySpan_1<::System::Byte>& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>&))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_TRYGETUNCOMMITTEDSPAN_OFFSET))(this, a1);
		}
		*/

		::System::Void EnsureMore(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_ENSUREMORE_OFFSET))(this, a1);
		}

		/*
		::System::Void WriteMultiBuffer(::System::ReadOnlySpan_1<::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_WRITEMULTIBUFFER_OFFSET))(this, a1);
		}
		*/

		::System::Void MigrateToSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_BUFFERWRITER_MIGRATETOSEQUENCE_OFFSET))(this);
		}
	};
}
