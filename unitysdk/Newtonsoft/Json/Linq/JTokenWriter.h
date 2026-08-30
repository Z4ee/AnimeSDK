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

#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_ADDPARENT_OFFSET UNITYSDK_OFFSET(0x1BEBFFB0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_ADDVALUE_1_OFFSET UNITYSDK_OFFSET(0x1BEC03A0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x1BEC0320)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1BEBFDC0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x1BEBC1C0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_REMOVEPARENT_OFFSET UNITYSDK_OFFSET(0x1BEBFFF0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x1BEC0630)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEEND_OFFSET UNITYSDK_OFFSET(0x1BEC0240)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITENULL_OFFSET UNITYSDK_OFFSET(0x1BEC0580)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1BEC0250)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x1BEC05E0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITESTARTARRAY_OFFSET UNITYSDK_OFFSET(0x1BEC00B0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITESTARTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1BEC01A0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITESTARTOBJECT_OFFSET UNITYSDK_OFFSET(0x1BEBFF20)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITETOKEN_OFFSET UNITYSDK_OFFSET(0x1BEC1760)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEUNDEFINED_OFFSET UNITYSDK_OFFSET(0x1BEC05B0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_10_OFFSET UNITYSDK_OFFSET(0x1BEC0CC0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_11_OFFSET UNITYSDK_OFFSET(0x1BEC0D70)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_12_OFFSET UNITYSDK_OFFSET(0x1BEC0E60)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_13_OFFSET UNITYSDK_OFFSET(0x1BEC0F10)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_14_OFFSET UNITYSDK_OFFSET(0x1BEC0FC0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_15_OFFSET UNITYSDK_OFFSET(0x1BEC1070)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_16_OFFSET UNITYSDK_OFFSET(0x1BEC13C0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_17_OFFSET UNITYSDK_OFFSET(0x1BEC1470)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_18_OFFSET UNITYSDK_OFFSET(0x1BEC1580)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_19_OFFSET UNITYSDK_OFFSET(0x1BEC1630)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_1_OFFSET UNITYSDK_OFFSET(0x1BEC06B0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_20_OFFSET UNITYSDK_OFFSET(0x1BEC16E0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_2_OFFSET UNITYSDK_OFFSET(0x1BEC0740)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_3_OFFSET UNITYSDK_OFFSET(0x1BEC07F0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_4_OFFSET UNITYSDK_OFFSET(0x1BEC08A0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_5_OFFSET UNITYSDK_OFFSET(0x1BEC0950)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_6_OFFSET UNITYSDK_OFFSET(0x1BEC0A00)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_7_OFFSET UNITYSDK_OFFSET(0x1BEC0AB0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_8_OFFSET UNITYSDK_OFFSET(0x1BEC0B60)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_9_OFFSET UNITYSDK_OFFSET(0x1BEC0C10)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1BEC0570)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEBC180)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JTokenWriter_TypeDefinitionIndex = 9721;

	class JTokenWriter : public ::Newtonsoft::Json::JsonWriter
	{
	public:
		::Newtonsoft::Json::Linq::JToken* _current; // 0x60
		::Newtonsoft::Json::Linq::JContainer* _parent; // 0x68
		::Newtonsoft::Json::Linq::JContainer* _token; // 0x70
		::Newtonsoft::Json::Linq::JValue* _value; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER__CTOR_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JToken* get_Token()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_GET_TOKEN_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void WriteStartObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITESTARTOBJECT_OFFSET))(this);
		}

		::System::Void AddParent(::Newtonsoft::Json::Linq::JContainer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JContainer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_ADDPARENT_OFFSET))(this, a1);
		}

		::System::Void RemoveParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_REMOVEPARENT_OFFSET))(this);
		}

		::System::Void WriteStartArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITESTARTARRAY_OFFSET))(this);
		}

		::System::Void WriteStartConstructor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITESTARTCONSTRUCTOR_OFFSET))(this, a1);
		}

		::System::Void WriteEnd(::Newtonsoft::Json::JsonToken a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEEND_OFFSET))(this, a1);
		}

		::System::Void WritePropertyName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEPROPERTYNAME_OFFSET))(this, a1);
		}

		::System::Void AddValue(::System::Object* a1, ::Newtonsoft::Json::JsonToken a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_ADDVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void AddValue_1(::Newtonsoft::Json::Linq::JValue* a1, ::Newtonsoft::Json::JsonToken a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JValue*, ::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_ADDVALUE_1_OFFSET))(this, a1, a2);
		}

		::System::Void WriteValue(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET))(this, a1);
		}

		::System::Void WriteNull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITENULL_OFFSET))(this);
		}

		::System::Void WriteUndefined()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEUNDEFINED_OFFSET))(this);
		}

		::System::Void WriteRaw(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITERAW_OFFSET))(this, a1);
		}

		::System::Void WriteComment(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITECOMMENT_OFFSET))(this, a1);
		}

		::System::Void WriteValue_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_1_OFFSET))(this, a1);
		}

		::System::Void WriteValue_2(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_2_OFFSET))(this, a1);
		}

		::System::Void WriteValue_3(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_3_OFFSET))(this, a1);
		}

		::System::Void WriteValue_4(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_4_OFFSET))(this, a1);
		}

		::System::Void WriteValue_5(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_5_OFFSET))(this, a1);
		}

		::System::Void WriteValue_6(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_6_OFFSET))(this, a1);
		}

		::System::Void WriteValue_7(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_7_OFFSET))(this, a1);
		}

		::System::Void WriteValue_8(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_8_OFFSET))(this, a1);
		}

		::System::Void WriteValue_9(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_9_OFFSET))(this, a1);
		}

		::System::Void WriteValue_10(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_10_OFFSET))(this, a1);
		}

		::System::Void WriteValue_11(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_11_OFFSET))(this, a1);
		}

		::System::Void WriteValue_12(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_12_OFFSET))(this, a1);
		}

		::System::Void WriteValue_13(::System::SByte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_13_OFFSET))(this, a1);
		}

		::System::Void WriteValue_14(::System::Decimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_14_OFFSET))(this, a1);
		}

		::System::Void WriteValue_15(::System::DateTime a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_15_OFFSET))(this, a1);
		}

		::System::Void WriteValue_16(::System::DateTimeOffset a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_16_OFFSET))(this, a1);
		}

		::System::Void WriteValue_17(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_17_OFFSET))(this, a1);
		}

		::System::Void WriteValue_18(::System::TimeSpan a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_18_OFFSET))(this, a1);
		}

		::System::Void WriteValue_19(::System::Guid a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_19_OFFSET))(this, a1);
		}

		::System::Void WriteValue_20(::System::Uri* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_20_OFFSET))(this, a1);
		}

		::System::Void WriteToken(::Newtonsoft::Json::JsonReader* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITETOKEN_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
