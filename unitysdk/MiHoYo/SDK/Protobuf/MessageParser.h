#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class ByteString; }
namespace MiHoYo::SDK::Protobuf { class IMessage; }
namespace System { template <typename T> class Func_1; }

#define MIHOYO_SDK_PROTOBUF_MESSAGEPARSER_PARSEFROM_OFFSET UNITYSDK_OFFSET(0x181A4C00)
#define MIHOYO_SDK_PROTOBUF_MESSAGEPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x181A59E0)

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int MessageParser_TypeDefinitionIndex = 33923;

	class MessageParser : public ::System::Object
	{
	public:
		::System::Func_1<::MiHoYo::SDK::Protobuf::IMessage*>* factory; // 0x10

		::System::Void _ctor(::System::Func_1<::MiHoYo::SDK::Protobuf::IMessage*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::MiHoYo::SDK::Protobuf::IMessage*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_MESSAGEPARSER__CTOR_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::Protobuf::IMessage* ParseFrom(::MiHoYo::SDK::Protobuf::ByteString* a1)
		{
			return ((::MiHoYo::SDK::Protobuf::IMessage*(*)(::PVOID, ::MiHoYo::SDK::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_MESSAGEPARSER_PARSEFROM_OFFSET))(this, a1);
		}
	};
}
