#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/IOException.h"

namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_INVALIDTAG_OFFSET UNITYSDK_OFFSET(0x1F645150)
#define MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_MALFORMEDVARINT_OFFSET UNITYSDK_OFFSET(0x1F645090)
#define MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_MOREDATAAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1F644E50)
#define MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_NEGATIVESIZE_OFFSET UNITYSDK_OFFSET(0x1F644FD0)
#define MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_RECURSIONLIMITEXCEEDED_OFFSET UNITYSDK_OFFSET(0x1F645210)
#define MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_SIZELIMITEXCEEDED_OFFSET UNITYSDK_OFFSET(0x1F6452D0)
#define MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION_TRUNCATEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F644F10)
#define MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F644DC0)

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int InvalidProtocolBufferException_TypeDefinitionIndex = 29065;

	class InvalidProtocolBufferException : public ::System::IO::IOException
	{
	public:
		::System::Void _ctor(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_INVALIDPROTOCOLBUFFEREXCEPTION__CTOR_OFFSET))(this, message);
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
