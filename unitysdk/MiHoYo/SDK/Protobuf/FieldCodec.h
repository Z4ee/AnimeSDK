#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { template <typename T> class FieldCodec_1; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_FIELDCODEC_FORINT32_OFFSET UNITYSDK_OFFSET(0x1B0D41E0)
#define MIHOYO_SDK_PROTOBUF_FIELDCODEC_FORSTRING_OFFSET UNITYSDK_OFFSET(0x1B0D3F80)

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int FieldCodec_TypeDefinitionIndex = 35045;

	class FieldCodec : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::System::String*>* ForString(::System::UInt32 a1)
		{
			return ((::MiHoYo::SDK::Protobuf::FieldCodec_1<::System::String*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_FIELDCODEC_FORSTRING_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::System::Int32>* ForInt32(::System::UInt32 a1)
		{
			return ((::MiHoYo::SDK::Protobuf::FieldCodec_1<::System::Int32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_FIELDCODEC_FORINT32_OFFSET))(a1);
		}
	};
}
