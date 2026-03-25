#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class ByteString; }
namespace MiHoYo::SDK::Protobuf { class IMessage; }

#define MIHOYO_SDK_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x15D9DF50)
#define MIHOYO_SDK_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x15D9DCF0)

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int MessageExtensions_TypeDefinitionIndex = 28016;

	class MessageExtensions : public ::System::Object
	{
	public:
		static ::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::IMessage* message, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::Protobuf::IMessage*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_OFFSET))(message, data);
		}

		static ::System::Void MergeFrom_1(::MiHoYo::SDK::Protobuf::IMessage* message, ::MiHoYo::SDK::Protobuf::ByteString* data)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::Protobuf::IMessage*, ::MiHoYo::SDK::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_1_OFFSET))(message, data);
		}
	};
}
