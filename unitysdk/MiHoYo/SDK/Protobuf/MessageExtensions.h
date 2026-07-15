#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class ByteString; }
namespace MiHoYo::SDK::Protobuf { class IMessage; }

#define MIHOYO_SDK_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x196A4170)
#define MIHOYO_SDK_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x196A3EB0)

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int MessageExtensions_TypeDefinitionIndex = 34293;

	class MessageExtensions : public ::System::Object
	{
	public:
		static ::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::IMessage* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::Protobuf::IMessage*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_OFFSET))(a1, a2);
		}

		static ::System::Void MergeFrom_1(::MiHoYo::SDK::Protobuf::IMessage* a1, ::MiHoYo::SDK::Protobuf::ByteString* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::Protobuf::IMessage*, ::MiHoYo::SDK::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_MESSAGEEXTENSIONS_MERGEFROM_1_OFFSET))(a1, a2);
		}
	};
}
