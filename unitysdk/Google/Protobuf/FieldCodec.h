#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class FieldCodec_FromInt32Func_1; }
namespace Google::Protobuf { template <typename T> class FieldCodec_ToInt32Func_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define GOOGLE_PROTOBUF_FIELDCODEC_FORBOOL_OFFSET UNITYSDK_OFFSET(0x15ADE590)
#define GOOGLE_PROTOBUF_FIELDCODEC_FORDOUBLE_OFFSET UNITYSDK_OFFSET(0x15ADEF90)
#define GOOGLE_PROTOBUF_FIELDCODEC_FORFLOAT_OFFSET UNITYSDK_OFFSET(0x15ADED90)
#define GOOGLE_PROTOBUF_FIELDCODEC_FORINT32_OFFSET UNITYSDK_OFFSET(0x15ADE790)
#define GOOGLE_PROTOBUF_FIELDCODEC_FORSTRING_OFFSET UNITYSDK_OFFSET(0x15ADE380)
#define GOOGLE_PROTOBUF_FIELDCODEC_FORUINT32_OFFSET UNITYSDK_OFFSET(0x15ADE9A0)
#define GOOGLE_PROTOBUF_FIELDCODEC_FORUINT64_OFFSET UNITYSDK_OFFSET(0x15ADEBB0)

namespace Google::Protobuf
{
	inline static constexpr unsigned int FieldCodec_TypeDefinitionIndex = 6162;

	class FieldCodec : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::System::String*>* ForString(::System::UInt32 tag, ::System::String* defaultValue)
		{
			return ((::Google::Protobuf::FieldCodec_1<::System::String*>*(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC_FORSTRING_OFFSET))(tag, defaultValue);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::Boolean>* ForBool(::System::UInt32 tag, ::System::Boolean defaultValue)
		{
			return ((::Google::Protobuf::FieldCodec_1<::System::Boolean>*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC_FORBOOL_OFFSET))(tag, defaultValue);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::Int32>* ForInt32(::System::UInt32 tag, ::System::Int32 defaultValue)
		{
			return ((::Google::Protobuf::FieldCodec_1<::System::Int32>*(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC_FORINT32_OFFSET))(tag, defaultValue);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>* ForUInt32(::System::UInt32 tag, ::System::UInt32 defaultValue)
		{
			return ((::Google::Protobuf::FieldCodec_1<::System::UInt32>*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC_FORUINT32_OFFSET))(tag, defaultValue);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt64>* ForUInt64(::System::UInt32 tag, ::System::UInt64 defaultValue)
		{
			return ((::Google::Protobuf::FieldCodec_1<::System::UInt64>*(*)(::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC_FORUINT64_OFFSET))(tag, defaultValue);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::Single>* ForFloat(::System::UInt32 tag, ::System::Single defaultValue)
		{
			return ((::Google::Protobuf::FieldCodec_1<::System::Single>*(*)(::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC_FORFLOAT_OFFSET))(tag, defaultValue);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::Double>* ForDouble(::System::UInt32 tag, ::System::Double defaultValue)
		{
			return ((::Google::Protobuf::FieldCodec_1<::System::Double>*(*)(::System::UInt32, ::System::Double))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC_FORDOUBLE_OFFSET))(tag, defaultValue);
		}
	};
}
