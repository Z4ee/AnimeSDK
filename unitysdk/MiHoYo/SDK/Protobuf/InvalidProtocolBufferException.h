#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/IOException.h"

namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_INVALIDTAG_OFFSET UNITYSDK_OFFSET(0x1819A410)
#define MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_MALFORMEDVARINT_OFFSET UNITYSDK_OFFSET(0x1819BF70)
#define MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_MOREDATAAVAILABLE_OFFSET UNITYSDK_OFFSET(0x18199F50)
#define MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_NEGATIVESIZE_OFFSET UNITYSDK_OFFSET(0x1819C010)
#define MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_RECURSIONLIMITEXCEEDED_OFFSET UNITYSDK_OFFSET(0x1819A850)
#define MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_SIZELIMITEXCEEDED_OFFSET UNITYSDK_OFFSET(0x1819C270)
#define MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_TRUNCATEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x1819A8F0)
#define MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1819A6E0)

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int InvalidProtocolBufferException_TypeDefinitionIndex = 33917;

	class InvalidProtocolBufferException : public ::System::IO::IOException
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION__CTOR_OFFSET))(this, a1);
		}

		static ::MiHoYo::SDK::Protobuf::InvalidProtocolBufferException* MoreDataAvailable()
		{
			return ((::MiHoYo::SDK::Protobuf::InvalidProtocolBufferException*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_MOREDATAAVAILABLE_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::InvalidProtocolBufferException* TruncatedMessage()
		{
			return ((::MiHoYo::SDK::Protobuf::InvalidProtocolBufferException*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_TRUNCATEDMESSAGE_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::InvalidProtocolBufferException* NegativeSize()
		{
			return ((::MiHoYo::SDK::Protobuf::InvalidProtocolBufferException*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_NEGATIVESIZE_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::InvalidProtocolBufferException* MalformedVarint()
		{
			return ((::MiHoYo::SDK::Protobuf::InvalidProtocolBufferException*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_MALFORMEDVARINT_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::InvalidProtocolBufferException* InvalidTag()
		{
			return ((::MiHoYo::SDK::Protobuf::InvalidProtocolBufferException*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_INVALIDTAG_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::InvalidProtocolBufferException* RecursionLimitExceeded()
		{
			return ((::MiHoYo::SDK::Protobuf::InvalidProtocolBufferException*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_RECURSIONLIMITEXCEEDED_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::InvalidProtocolBufferException* SizeLimitExceeded()
		{
			return ((::MiHoYo::SDK::Protobuf::InvalidProtocolBufferException*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_SIZELIMITEXCEEDED_OFFSET))();
		}
	};
}
