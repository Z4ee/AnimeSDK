#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/SequencePool_Rental.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/SequencePosition.h"

namespace Nerdbank::Streams { template <typename T> class Sequence_1; }
namespace System::IO { class Stream; }

#define MESSAGEPACK_MESSAGEPACKSTREAMREADER_DISCARDBUFFEREDDATA_OFFSET UNITYSDK_OFFSET(0x1C629ED0)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C629F10)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER_GET_READDATA_OFFSET UNITYSDK_OFFSET(0x1C629EC0)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER_GET_REMAININGBYTES_OFFSET UNITYSDK_OFFSET(0x1C629CA0)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER_RECYCLELASTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C629F60)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER_TRYREADNEXTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C62A000)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C629BD0)
#define MESSAGEPACK_MESSAGEPACKSTREAMREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C629BC0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackStreamReader_TypeDefinitionIndex = 30875;

	class MessagePackStreamReader : public ::System::Object
	{
	public:
		::System::IO::Stream* stream; // 0x10
		::System::Nullable_1<::System::SequencePosition> endOfLastMessage; // 0x18
		::MessagePack::SequencePool_Rental sequenceRental; // 0x30
		::System::Boolean leaveOpen; // 0x40

		::System::Void _ctor(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER__CTOR_OFFSET))(this, stream);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream, ::System::Boolean leaveOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER__CTOR_1_OFFSET))(this, stream, leaveOpen);
		}

		::System::Buffers::ReadOnlySequence_1<::System::Byte> get_RemainingBytes()
		{
			return ((::System::Buffers::ReadOnlySequence_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER_GET_REMAININGBYTES_OFFSET))(this);
		}

		::Nerdbank::Streams::Sequence_1<::System::Byte>* get_ReadData()
		{
			return ((::Nerdbank::Streams::Sequence_1<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER_GET_READDATA_OFFSET))(this);
		}

		::System::Void DiscardBufferedData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER_DISCARDBUFFEREDDATA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER_DISPOSE_OFFSET))(this);
		}

		::System::Void RecycleLastMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER_RECYCLELASTMESSAGE_OFFSET))(this);
		}

		::System::Boolean TryReadNextMessage(::System::Buffers::ReadOnlySequence_1<::System::Byte>& completeMessage)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Buffers::ReadOnlySequence_1<::System::Byte>&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSTREAMREADER_TRYREADNEXTMESSAGE_OFFSET))(this, completeMessage);
		}
	};
}
