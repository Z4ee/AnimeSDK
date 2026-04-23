#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonWriter.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/TimeSpan.h"

namespace Newtonsoft::Json { class JsonTextWriter; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::IO { class StringWriter; }

#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x17AC11D0)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_GETSERIALIZEDJSONMESSAGE_OFFSET UNITYSDK_OFFSET(0x17AC0070)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x17AC0D40)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEENDARRAY_OFFSET UNITYSDK_OFFSET(0x17AC0E30)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEENDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x17AC0EF0)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEENDOBJECT_OFFSET UNITYSDK_OFFSET(0x17AC10A0)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITENULL_OFFSET UNITYSDK_OFFSET(0x17AC06C0)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEPROPERTYNAME_1_OFFSET UNITYSDK_OFFSET(0x17AC0FA0)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x17AC0F40)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITERAWVALUE_OFFSET UNITYSDK_OFFSET(0x17AC10F0)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x17AC1170)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITESTARTARRAY_OFFSET UNITYSDK_OFFSET(0x17AC0D90)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITESTARTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x17AC0E80)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITESTARTOBJECT_OFFSET UNITYSDK_OFFSET(0x17AC1000)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEUNDEFINED_OFFSET UNITYSDK_OFFSET(0x17AC0610)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_10_OFFSET UNITYSDK_OFFSET(0x17AC07E0)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_11_OFFSET UNITYSDK_OFFSET(0x17AC0860)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_12_OFFSET UNITYSDK_OFFSET(0x17AC08C0)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_13_OFFSET UNITYSDK_OFFSET(0x17AC0920)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_14_OFFSET UNITYSDK_OFFSET(0x17AC0970)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_15_OFFSET UNITYSDK_OFFSET(0x17AC09D0)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_16_OFFSET UNITYSDK_OFFSET(0x17AC0A30)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_17_OFFSET UNITYSDK_OFFSET(0x17AC0A90)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_18_OFFSET UNITYSDK_OFFSET(0x17AC0AF0)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_19_OFFSET UNITYSDK_OFFSET(0x17AC0B90)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_1_OFFSET UNITYSDK_OFFSET(0x17AC0170)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_20_OFFSET UNITYSDK_OFFSET(0x17AC0C10)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_21_OFFSET UNITYSDK_OFFSET(0x17AC0CA0)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_2_OFFSET UNITYSDK_OFFSET(0x17AC0250)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_3_OFFSET UNITYSDK_OFFSET(0x17AC02F0)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_4_OFFSET UNITYSDK_OFFSET(0x17AC0390)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_5_OFFSET UNITYSDK_OFFSET(0x17AC0440)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_6_OFFSET UNITYSDK_OFFSET(0x17AC04C0)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_7_OFFSET UNITYSDK_OFFSET(0x17AC0520)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_8_OFFSET UNITYSDK_OFFSET(0x17AC05A0)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_9_OFFSET UNITYSDK_OFFSET(0x17AC0770)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x17AC00A0)
#define NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x17ABFD60)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int TraceJsonWriter_TypeDefinitionIndex = 8443;

	class TraceJsonWriter : public ::Newtonsoft::Json::JsonWriter
	{
	public:
		::Newtonsoft::Json::JsonWriter* _innerWriter; // 0x60
		::Newtonsoft::Json::JsonTextWriter* _textWriter; // 0x68
		::System::IO::StringWriter* _sw; // 0x70

		::System::Void _ctor(::Newtonsoft::Json::JsonWriter* innerWriter)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER__CTOR_OFFSET))(this, innerWriter);
		}

		::System::String* GetSerializedJsonMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_GETSERIALIZEDJSONMESSAGE_OFFSET))(this);
		}

		::System::Void WriteValue(::System::Decimal value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_OFFSET))(this, value);
		}

		::System::Void WriteValue_1(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_1_OFFSET))(this, value);
		}

		::System::Void WriteValue_2(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_2_OFFSET))(this, value);
		}

		::System::Void WriteValue_3(::System::Nullable_1<::System::Byte> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Byte>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_3_OFFSET))(this, value);
		}

		::System::Void WriteValue_4(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_4_OFFSET))(this, value);
		}

		::System::Void WriteValue_5(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_5_OFFSET))(this, value);
		}

		::System::Void WriteValue_6(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_6_OFFSET))(this, value);
		}

		::System::Void WriteValue_7(::System::DateTimeOffset value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_7_OFFSET))(this, value);
		}

		::System::Void WriteValue_8(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_8_OFFSET))(this, value);
		}

		::System::Void WriteUndefined()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEUNDEFINED_OFFSET))(this);
		}

		::System::Void WriteNull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITENULL_OFFSET))(this);
		}

		::System::Void WriteValue_9(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_9_OFFSET))(this, value);
		}

		::System::Void WriteValue_10(::System::Guid value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_10_OFFSET))(this, value);
		}

		::System::Void WriteValue_11(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_11_OFFSET))(this, value);
		}

		::System::Void WriteValue_12(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_12_OFFSET))(this, value);
		}

		::System::Void WriteValue_13(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_13_OFFSET))(this, value);
		}

		::System::Void WriteValue_14(::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_14_OFFSET))(this, value);
		}

		::System::Void WriteValue_15(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_15_OFFSET))(this, value);
		}

		::System::Void WriteValue_16(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_16_OFFSET))(this, value);
		}

		::System::Void WriteValue_17(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_17_OFFSET))(this, value);
		}

		::System::Void WriteValue_18(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_18_OFFSET))(this, value);
		}

		::System::Void WriteValue_19(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_19_OFFSET))(this, value);
		}

		::System::Void WriteValue_20(::System::Uri* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_20_OFFSET))(this, value);
		}

		::System::Void WriteValue_21(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEVALUE_21_OFFSET))(this, value);
		}

		::System::Void WriteComment(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITECOMMENT_OFFSET))(this, text);
		}

		::System::Void WriteStartArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITESTARTARRAY_OFFSET))(this);
		}

		::System::Void WriteEndArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEENDARRAY_OFFSET))(this);
		}

		::System::Void WriteStartConstructor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITESTARTCONSTRUCTOR_OFFSET))(this, name);
		}

		::System::Void WriteEndConstructor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEENDCONSTRUCTOR_OFFSET))(this);
		}

		::System::Void WritePropertyName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEPROPERTYNAME_OFFSET))(this, name);
		}

		::System::Void WritePropertyName_1(::System::String* name, ::System::Boolean escape)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEPROPERTYNAME_1_OFFSET))(this, name, escape);
		}

		::System::Void WriteStartObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITESTARTOBJECT_OFFSET))(this);
		}

		::System::Void WriteEndObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITEENDOBJECT_OFFSET))(this);
		}

		::System::Void WriteRawValue(::System::String* json)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITERAWVALUE_OFFSET))(this, json);
		}

		::System::Void WriteRaw(::System::String* json)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_WRITERAW_OFFSET))(this, json);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_TRACEJSONWRITER_CLOSE_OFFSET))(this);
		}
	};
}
