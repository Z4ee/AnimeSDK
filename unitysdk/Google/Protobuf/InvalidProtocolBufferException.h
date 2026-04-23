#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/IOException.h"

namespace System { class String; }

#define GOOGLE_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_INVALIDTAG_OFFSET UNITYSDK_OFFSET(0x170D5240)
#define GOOGLE_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_INVALIDWIRETYPE_OFFSET UNITYSDK_OFFSET(0x170DBC40)
#define GOOGLE_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_MALFORMEDVARINT_OFFSET UNITYSDK_OFFSET(0x170D6F70)
#define GOOGLE_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_MOREDATAAVAILABLE_OFFSET UNITYSDK_OFFSET(0x170D4D30)
#define GOOGLE_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_NEGATIVESIZE_OFFSET UNITYSDK_OFFSET(0x170D7010)
#define GOOGLE_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_RECURSIONLIMITEXCEEDED_OFFSET UNITYSDK_OFFSET(0x170D56A0)
#define GOOGLE_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_SIZELIMITEXCEEDED_OFFSET UNITYSDK_OFFSET(0x170D7240)
#define GOOGLE_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_TRUNCATEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x170D5740)
#define GOOGLE_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x170D5530)

namespace Google::Protobuf
{
	inline static constexpr unsigned int InvalidProtocolBufferException_TypeDefinitionIndex = 6198;

	class InvalidProtocolBufferException : public ::System::IO::IOException
	{
	public:
		::System::Void _ctor(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION__CTOR_OFFSET))(this, message);
		}

		static ::Google::Protobuf::InvalidProtocolBufferException* MoreDataAvailable()
		{
			return ((::Google::Protobuf::InvalidProtocolBufferException*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_MOREDATAAVAILABLE_OFFSET))();
		}

		static ::Google::Protobuf::InvalidProtocolBufferException* TruncatedMessage()
		{
			return ((::Google::Protobuf::InvalidProtocolBufferException*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_TRUNCATEDMESSAGE_OFFSET))();
		}

		static ::Google::Protobuf::InvalidProtocolBufferException* NegativeSize()
		{
			return ((::Google::Protobuf::InvalidProtocolBufferException*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_NEGATIVESIZE_OFFSET))();
		}

		static ::Google::Protobuf::InvalidProtocolBufferException* MalformedVarint()
		{
			return ((::Google::Protobuf::InvalidProtocolBufferException*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_MALFORMEDVARINT_OFFSET))();
		}

		static ::Google::Protobuf::InvalidProtocolBufferException* InvalidTag()
		{
			return ((::Google::Protobuf::InvalidProtocolBufferException*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_INVALIDTAG_OFFSET))();
		}

		static ::Google::Protobuf::InvalidProtocolBufferException* InvalidWireType()
		{
			return ((::Google::Protobuf::InvalidProtocolBufferException*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_INVALIDWIRETYPE_OFFSET))();
		}

		static ::Google::Protobuf::InvalidProtocolBufferException* RecursionLimitExceeded()
		{
			return ((::Google::Protobuf::InvalidProtocolBufferException*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_RECURSIONLIMITEXCEEDED_OFFSET))();
		}

		static ::Google::Protobuf::InvalidProtocolBufferException* SizeLimitExceeded()
		{
			return ((::Google::Protobuf::InvalidProtocolBufferException*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_SIZELIMITEXCEEDED_OFFSET))();
		}
	};
}
