#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonToken.h"
#include "unitysdk/Newtonsoft/Json/JsonWriter.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/TimeSpan.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json::Linq { class JContainer; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq { class JValue; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Uri; }

#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_ADDPARENT_OFFSET UNITYSDK_OFFSET(0x1BC32050)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_ADDVALUE_1_OFFSET UNITYSDK_OFFSET(0x1BC323E0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x1BC32340)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1BC31F60)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1BC31F50)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_GET_CURRENTTOKEN_OFFSET UNITYSDK_OFFSET(0x1BC31DF0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x1BC31E00)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_REMOVEPARENT_OFFSET UNITYSDK_OFFSET(0x1BC32090)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x1BC32600)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEEND_OFFSET UNITYSDK_OFFSET(0x1BC32220)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITENULL_OFFSET UNITYSDK_OFFSET(0x1BC32500)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1BC32280)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x1BC32560)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITESTARTARRAY_OFFSET UNITYSDK_OFFSET(0x1BC320F0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITESTARTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1BC32180)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITESTARTOBJECT_OFFSET UNITYSDK_OFFSET(0x1BC31FC0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITETOKEN_OFFSET UNITYSDK_OFFSET(0x1BC33AE0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEUNDEFINED_OFFSET UNITYSDK_OFFSET(0x1BC32530)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_10_OFFSET UNITYSDK_OFFSET(0x1BC32F70)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_11_OFFSET UNITYSDK_OFFSET(0x1BC33070)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_12_OFFSET UNITYSDK_OFFSET(0x1BC331A0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_13_OFFSET UNITYSDK_OFFSET(0x1BC332A0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_14_OFFSET UNITYSDK_OFFSET(0x1BC333A0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_15_OFFSET UNITYSDK_OFFSET(0x1BC334B0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_16_OFFSET UNITYSDK_OFFSET(0x1BC335E0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_17_OFFSET UNITYSDK_OFFSET(0x1BC336F0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_18_OFFSET UNITYSDK_OFFSET(0x1BC337D0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_19_OFFSET UNITYSDK_OFFSET(0x1BC338B0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_1_OFFSET UNITYSDK_OFFSET(0x1BC326A0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_20_OFFSET UNITYSDK_OFFSET(0x1BC33990)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_2_OFFSET UNITYSDK_OFFSET(0x1BC32760)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_3_OFFSET UNITYSDK_OFFSET(0x1BC32860)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_4_OFFSET UNITYSDK_OFFSET(0x1BC32960)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_5_OFFSET UNITYSDK_OFFSET(0x1BC32A70)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_6_OFFSET UNITYSDK_OFFSET(0x1BC32B80)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_7_OFFSET UNITYSDK_OFFSET(0x1BC32C90)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_8_OFFSET UNITYSDK_OFFSET(0x1BC32D70)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_9_OFFSET UNITYSDK_OFFSET(0x1BC32E70)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1BC324F0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BC31EE0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC31E10)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JTokenWriter_TypeDefinitionIndex = 7063;

	class JTokenWriter : public ::Newtonsoft::Json::JsonWriter
	{
	public:
		::Newtonsoft::Json::Linq::JContainer* _token; // 0x60
		::Newtonsoft::Json::Linq::JContainer* _parent; // 0x68
		::Newtonsoft::Json::Linq::JToken* _current; // 0x70
		::Newtonsoft::Json::Linq::JValue* _value; // 0x78

		::System::Void _ctor(::Newtonsoft::Json::Linq::JContainer* container)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JContainer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER__CTOR_OFFSET))(this, container);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER__CTOR_1_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JToken* get_CurrentToken()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_GET_CURRENTTOKEN_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JToken* get_Token()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_GET_TOKEN_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_FLUSH_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void WriteStartObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITESTARTOBJECT_OFFSET))(this);
		}

		::System::Void AddParent(::Newtonsoft::Json::Linq::JContainer* container)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JContainer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_ADDPARENT_OFFSET))(this, container);
		}

		::System::Void RemoveParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_REMOVEPARENT_OFFSET))(this);
		}

		::System::Void WriteStartArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITESTARTARRAY_OFFSET))(this);
		}

		::System::Void WriteStartConstructor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITESTARTCONSTRUCTOR_OFFSET))(this, name);
		}

		::System::Void WriteEnd(::Newtonsoft::Json::JsonToken token)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEEND_OFFSET))(this, token);
		}

		::System::Void WritePropertyName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEPROPERTYNAME_OFFSET))(this, name);
		}

		::System::Void AddValue(::System::Object* value, ::Newtonsoft::Json::JsonToken token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_ADDVALUE_OFFSET))(this, value, token);
		}

		::System::Void AddValue_1(::Newtonsoft::Json::Linq::JValue* value, ::Newtonsoft::Json::JsonToken token)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JValue*, ::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_ADDVALUE_1_OFFSET))(this, value, token);
		}

		::System::Void WriteValue(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET))(this, value);
		}

		::System::Void WriteNull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITENULL_OFFSET))(this);
		}

		::System::Void WriteUndefined()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEUNDEFINED_OFFSET))(this);
		}

		::System::Void WriteRaw(::System::String* json)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITERAW_OFFSET))(this, json);
		}

		::System::Void WriteComment(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITECOMMENT_OFFSET))(this, text);
		}

		::System::Void WriteValue_1(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_1_OFFSET))(this, value);
		}

		::System::Void WriteValue_2(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_2_OFFSET))(this, value);
		}

		::System::Void WriteValue_3(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_3_OFFSET))(this, value);
		}

		::System::Void WriteValue_4(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_4_OFFSET))(this, value);
		}

		::System::Void WriteValue_5(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_5_OFFSET))(this, value);
		}

		::System::Void WriteValue_6(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_6_OFFSET))(this, value);
		}

		::System::Void WriteValue_7(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_7_OFFSET))(this, value);
		}

		::System::Void WriteValue_8(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_8_OFFSET))(this, value);
		}

		::System::Void WriteValue_9(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_9_OFFSET))(this, value);
		}

		::System::Void WriteValue_10(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_10_OFFSET))(this, value);
		}

		::System::Void WriteValue_11(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_11_OFFSET))(this, value);
		}

		::System::Void WriteValue_12(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_12_OFFSET))(this, value);
		}

		::System::Void WriteValue_13(::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_13_OFFSET))(this, value);
		}

		::System::Void WriteValue_14(::System::Decimal value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_14_OFFSET))(this, value);
		}

		::System::Void WriteValue_15(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_15_OFFSET))(this, value);
		}

		::System::Void WriteValue_16(::System::DateTimeOffset value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_16_OFFSET))(this, value);
		}

		::System::Void WriteValue_17(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_17_OFFSET))(this, value);
		}

		::System::Void WriteValue_18(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_18_OFFSET))(this, value);
		}

		::System::Void WriteValue_19(::System::Guid value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_19_OFFSET))(this, value);
		}

		::System::Void WriteValue_20(::System::Uri* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_20_OFFSET))(this, value);
		}

		::System::Void WriteToken(::Newtonsoft::Json::JsonReader* reader, ::System::Boolean writeChildren, ::System::Boolean writeDateConstructorAsDate, ::System::Boolean writeComments)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITETOKEN_OFFSET))(this, reader, writeChildren, writeDateConstructorAsDate, writeComments);
		}
	};
}
