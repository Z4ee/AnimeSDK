#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class FieldCodec_FromInt32Func_1; }
namespace Google::Protobuf { template <typename T> class FieldCodec_ToInt32Func_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_FIELDCODEC_FORBOOL_OFFSET UNITYSDK_OFFSET(0x19039DD0)
#define GOOGLE_PROTOBUF_FIELDCODEC_FORDOUBLE_OFFSET UNITYSDK_OFFSET(0x1903A910)
#define GOOGLE_PROTOBUF_FIELDCODEC_FORFLOAT_OFFSET UNITYSDK_OFFSET(0x1903A6D0)
#define GOOGLE_PROTOBUF_FIELDCODEC_FORINT32_OFFSET UNITYSDK_OFFSET(0x1903A010)
#define GOOGLE_PROTOBUF_FIELDCODEC_FORSTRING_OFFSET UNITYSDK_OFFSET(0x19039BA0)
#define GOOGLE_PROTOBUF_FIELDCODEC_FORUINT32_OFFSET UNITYSDK_OFFSET(0x1903A240)
#define GOOGLE_PROTOBUF_FIELDCODEC_FORUINT64_OFFSET UNITYSDK_OFFSET(0x1903A470)

namespace Google::Protobuf
{
	inline static constexpr unsigned int FieldCodec_TypeDefinitionIndex = 5381;

	class FieldCodec : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::System::String*>* ForString(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::Google::Protobuf::FieldCodec_1<::System::String*>*(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC_FORSTRING_OFFSET))(a1, a2);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::Boolean>* ForBool(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::Google::Protobuf::FieldCodec_1<::System::Boolean>*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC_FORBOOL_OFFSET))(a1, a2);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::Int32>* ForInt32(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::Google::Protobuf::FieldCodec_1<::System::Int32>*(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC_FORINT32_OFFSET))(a1, a2);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>* ForUInt32(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Google::Protobuf::FieldCodec_1<::System::UInt32>*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC_FORUINT32_OFFSET))(a1, a2);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt64>* ForUInt64(::System::UInt32 a1, ::System::UInt64 a2)
		{
			return ((::Google::Protobuf::FieldCodec_1<::System::UInt64>*(*)(::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC_FORUINT64_OFFSET))(a1, a2);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::Single>* ForFloat(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::Google::Protobuf::FieldCodec_1<::System::Single>*(*)(::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC_FORFLOAT_OFFSET))(a1, a2);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::Double>* ForDouble(::System::UInt32 a1, ::System::Double a2)
		{
			return ((::Google::Protobuf::FieldCodec_1<::System::Double>*(*)(::System::UInt32, ::System::Double))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC_FORDOUBLE_OFFSET))(a1, a2);
		}
	};
}
