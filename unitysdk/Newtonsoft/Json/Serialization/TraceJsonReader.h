#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonReader.h"
#include "unitysdk/Newtonsoft/Json/JsonToken.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Nullable_1.h"

namespace Newtonsoft::Json { class JsonTextWriter; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::IO { class StringWriter; }

#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x16494300)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_GETDESERIALIZEDJSONMESSAGE_OFFSET UNITYSDK_OFFSET(0x16493E40)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x16494210)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_GET_PATH_OFFSET UNITYSDK_OFFSET(0x16494240)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_GET_TOKENTYPE_OFFSET UNITYSDK_OFFSET(0x16494270)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x164942D0)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x164942A0)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_NEWTONSOFT_JSON_IJSONLINEINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x164943F0)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_NEWTONSOFT_JSON_IJSONLINEINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x164944B0)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_NEWTONSOFT_JSON_IJSONLINEINFO_HASLINEINFO_OFFSET UNITYSDK_OFFSET(0x16494330)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_READASBOOLEAN_OFFSET UNITYSDK_OFFSET(0x164940D0)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_READASBYTES_OFFSET UNITYSDK_OFFSET(0x16493F90)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_READASDATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x164941A0)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_READASDATETIME_OFFSET UNITYSDK_OFFSET(0x16494130)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_READASDECIMAL_OFFSET UNITYSDK_OFFSET(0x16493FF0)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_READASDOUBLE_OFFSET UNITYSDK_OFFSET(0x16494060)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_READASINT32_OFFSET UNITYSDK_OFFSET(0x16493ED0)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_READASSTRING_OFFSET UNITYSDK_OFFSET(0x16493F30)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_READ_OFFSET UNITYSDK_OFFSET(0x16493E70)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x16493CE0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int TraceJsonReader_TypeDefinitionIndex = 8296;

	class TraceJsonReader : public ::Newtonsoft::Json::JsonReader
	{
	public:
		::Newtonsoft::Json::JsonTextWriter* _textWriter; // 0x70
		::System::IO::StringWriter* _sw; // 0x78
		::Newtonsoft::Json::JsonReader* _innerReader; // 0x80

		::System::Void _ctor(::Newtonsoft::Json::JsonReader* innerReader)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER__CTOR_OFFSET))(this, innerReader);
		}

		::System::String* GetDeserializedJsonMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_GETDESERIALIZEDJSONMESSAGE_OFFSET))(this);
		}

		::System::Boolean Read()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_READ_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> ReadAsInt32()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_READASINT32_OFFSET))(this);
		}

		::System::String* ReadAsString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_READASSTRING_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* ReadAsBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_READASBYTES_OFFSET))(this);
		}

		::System::Nullable_1<::System::Decimal> ReadAsDecimal()
		{
			return ((::System::Nullable_1<::System::Decimal>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_READASDECIMAL_OFFSET))(this);
		}

		::System::Nullable_1<::System::Double> ReadAsDouble()
		{
			return ((::System::Nullable_1<::System::Double>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_READASDOUBLE_OFFSET))(this);
		}

		::System::Nullable_1<::System::Boolean> ReadAsBoolean()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_READASBOOLEAN_OFFSET))(this);
		}

		::System::Nullable_1<::System::DateTime> ReadAsDateTime()
		{
			return ((::System::Nullable_1<::System::DateTime>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_READASDATETIME_OFFSET))(this);
		}

		::System::Nullable_1<::System::DateTimeOffset> ReadAsDateTimeOffset()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_READASDATETIMEOFFSET_OFFSET))(this);
		}

		::System::Int32 get_Depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_GET_DEPTH_OFFSET))(this);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_GET_PATH_OFFSET))(this);
		}

		::Newtonsoft::Json::JsonToken get_TokenType()
		{
			return ((::Newtonsoft::Json::JsonToken(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_GET_TOKENTYPE_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_GET_VALUE_OFFSET))(this);
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_CLOSE_OFFSET))(this);
		}

		::System::Boolean Newtonsoft_Json_IJsonLineInfo_HasLineInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_NEWTONSOFT_JSON_IJSONLINEINFO_HASLINEINFO_OFFSET))(this);
		}

		::System::Int32 Newtonsoft_Json_IJsonLineInfo_get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_NEWTONSOFT_JSON_IJSONLINEINFO_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Int32 Newtonsoft_Json_IJsonLineInfo_get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONREADER_NEWTONSOFT_JSON_IJSONLINEINFO_GET_LINEPOSITION_OFFSET))(this);
		}
	};
}
