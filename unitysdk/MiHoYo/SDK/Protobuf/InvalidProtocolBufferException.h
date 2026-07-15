#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/IOException.h"

namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_INVALIDTAG_OFFSET UNITYSDK_OFFSET(0x196961D0)
#define MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_MALFORMEDVARINT_OFFSET UNITYSDK_OFFSET(0x19697E90)
#define MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_MOREDATAAVAILABLE_OFFSET UNITYSDK_OFFSET(0x19695D10)
#define MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_NEGATIVESIZE_OFFSET UNITYSDK_OFFSET(0x19697F30)
#define MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_RECURSIONLIMITEXCEEDED_OFFSET UNITYSDK_OFFSET(0x19696610)
#define MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_SIZELIMITEXCEEDED_OFFSET UNITYSDK_OFFSET(0x19698200)
#define MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_TRUNCATEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x196966B0)
#define MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x196964A0)

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int InvalidProtocolBufferException_TypeDefinitionIndex = 34288;

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
