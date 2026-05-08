#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Bson/BsonType.h"
#include "unitysdk/Newtonsoft/Json/JsonToken.h"
#include "unitysdk/Newtonsoft/Json/JsonWriter.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeKind.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/TimeSpan.h"

namespace Newtonsoft::Json::Bson { class BsonBinaryWriter; }
namespace Newtonsoft::Json::Bson { class BsonToken; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class Stream; }

#define NEWTONSOFT_JSON_BSON_BSONWRITER_ADDPARENT_OFFSET UNITYSDK_OFFSET(0x1B238280)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_ADDTOKEN_OFFSET UNITYSDK_OFFSET(0x1B238450)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x1B238610)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1B2383C0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1B237F80)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_GET_DATETIMEKINDHANDLING_OFFSET UNITYSDK_OFFSET(0x1B237CC0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_REMOVEPARENT_OFFSET UNITYSDK_OFFSET(0x1B238030)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_SET_DATETIMEKINDHANDLING_OFFSET UNITYSDK_OFFSET(0x1B237CE0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x1B238050)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEEND_OFFSET UNITYSDK_OFFSET(0x1B237FC0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITENULL_OFFSET UNITYSDK_OFFSET(0x1B238680)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEOBJECTID_OFFSET UNITYSDK_OFFSET(0x1B239520)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1B238390)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITERAWVALUE_OFFSET UNITYSDK_OFFSET(0x1B238140)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x1B2380F0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEREGEX_OFFSET UNITYSDK_OFFSET(0x1B239640)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITESTARTARRAY_OFFSET UNITYSDK_OFFSET(0x1B238190)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITESTARTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1B2380A0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITESTARTOBJECT_OFFSET UNITYSDK_OFFSET(0x1B2382A0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEUNDEFINED_OFFSET UNITYSDK_OFFSET(0x1B2386F0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_10_OFFSET UNITYSDK_OFFSET(0x1B238D60)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_11_OFFSET UNITYSDK_OFFSET(0x1B238E00)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_12_OFFSET UNITYSDK_OFFSET(0x1B238F00)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_13_OFFSET UNITYSDK_OFFSET(0x1B238FA0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_14_OFFSET UNITYSDK_OFFSET(0x1B239040)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_15_OFFSET UNITYSDK_OFFSET(0x1B2390F0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_16_OFFSET UNITYSDK_OFFSET(0x1B2391C0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_17_OFFSET UNITYSDK_OFFSET(0x1B239270)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_18_OFFSET UNITYSDK_OFFSET(0x1B2392F0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_19_OFFSET UNITYSDK_OFFSET(0x1B239370)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_1_OFFSET UNITYSDK_OFFSET(0x1B238760)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_20_OFFSET UNITYSDK_OFFSET(0x1B239430)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_2_OFFSET UNITYSDK_OFFSET(0x1B238810)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_3_OFFSET UNITYSDK_OFFSET(0x1B2388B0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_4_OFFSET UNITYSDK_OFFSET(0x1B238970)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_5_OFFSET UNITYSDK_OFFSET(0x1B238A10)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_6_OFFSET UNITYSDK_OFFSET(0x1B238AE0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_7_OFFSET UNITYSDK_OFFSET(0x1B238B90)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_8_OFFSET UNITYSDK_OFFSET(0x1B238C20)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_9_OFFSET UNITYSDK_OFFSET(0x1B238CC0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1B238670)
#define NEWTONSOFT_JSON_BSON_BSONWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B237EA0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B237D00)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonWriter_TypeDefinitionIndex = 7113;

	class BsonWriter : public ::Newtonsoft::Json::JsonWriter
	{
	public:
		::Newtonsoft::Json::Bson::BsonToken* _root; // 0x60
		::Newtonsoft::Json::Bson::BsonBinaryWriter* _writer; // 0x68
		::Newtonsoft::Json::Bson::BsonToken* _parent; // 0x70
		::System::String* _propertyName; // 0x78

		::System::Void _ctor(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER__CTOR_OFFSET))(this, stream);
		}

		::System::Void _ctor_1(::System::IO::BinaryWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER__CTOR_1_OFFSET))(this, writer);
		}

		::System::DateTimeKind get_DateTimeKindHandling()
		{
			return ((::System::DateTimeKind(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_GET_DATETIMEKINDHANDLING_OFFSET))(this);
		}

		::System::Void set_DateTimeKindHandling(::System::DateTimeKind value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTimeKind))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_SET_DATETIMEKINDHANDLING_OFFSET))(this, value);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_FLUSH_OFFSET))(this);
		}

		::System::Void WriteEnd(::Newtonsoft::Json::JsonToken token)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEEND_OFFSET))(this, token);
		}

		::System::Void WriteComment(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITECOMMENT_OFFSET))(this, text);
		}

		::System::Void WriteStartConstructor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITESTARTCONSTRUCTOR_OFFSET))(this, name);
		}

		::System::Void WriteRaw(::System::String* json)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITERAW_OFFSET))(this, json);
		}

		::System::Void WriteRawValue(::System::String* json)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITERAWVALUE_OFFSET))(this, json);
		}

		::System::Void WriteStartArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITESTARTARRAY_OFFSET))(this);
		}

		::System::Void WriteStartObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITESTARTOBJECT_OFFSET))(this);
		}

		::System::Void WritePropertyName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEPROPERTYNAME_OFFSET))(this, name);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void AddParent(::Newtonsoft::Json::Bson::BsonToken* container)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Bson::BsonToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_ADDPARENT_OFFSET))(this, container);
		}

		::System::Void RemoveParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_REMOVEPARENT_OFFSET))(this);
		}

		::System::Void AddValue(::System::Object* value, ::Newtonsoft::Json::Bson::BsonType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::Bson::BsonType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_ADDVALUE_OFFSET))(this, value, type);
		}

		::System::Void AddToken(::Newtonsoft::Json::Bson::BsonToken* token)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Bson::BsonToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_ADDTOKEN_OFFSET))(this, token);
		}

		::System::Void WriteValue(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET))(this, value);
		}

		::System::Void WriteNull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITENULL_OFFSET))(this);
		}

		::System::Void WriteUndefined()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEUNDEFINED_OFFSET))(this);
		}

		::System::Void WriteValue_1(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_1_OFFSET))(this, value);
		}

		::System::Void WriteValue_2(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_2_OFFSET))(this, value);
		}

		::System::Void WriteValue_3(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_3_OFFSET))(this, value);
		}

		::System::Void WriteValue_4(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_4_OFFSET))(this, value);
		}

		::System::Void WriteValue_5(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_5_OFFSET))(this, value);
		}

		::System::Void WriteValue_6(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_6_OFFSET))(this, value);
		}

		::System::Void WriteValue_7(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_7_OFFSET))(this, value);
		}

		::System::Void WriteValue_8(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_8_OFFSET))(this, value);
		}

		::System::Void WriteValue_9(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_9_OFFSET))(this, value);
		}

		::System::Void WriteValue_10(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_10_OFFSET))(this, value);
		}

		::System::Void WriteValue_11(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_11_OFFSET))(this, value);
		}

		::System::Void WriteValue_12(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_12_OFFSET))(this, value);
		}

		::System::Void WriteValue_13(::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_13_OFFSET))(this, value);
		}

		::System::Void WriteValue_14(::System::Decimal value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_14_OFFSET))(this, value);
		}

		::System::Void WriteValue_15(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_15_OFFSET))(this, value);
		}

		::System::Void WriteValue_16(::System::DateTimeOffset value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_16_OFFSET))(this, value);
		}

		::System::Void WriteValue_17(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_17_OFFSET))(this, value);
		}

		::System::Void WriteValue_18(::System::Guid value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_18_OFFSET))(this, value);
		}

		::System::Void WriteValue_19(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_19_OFFSET))(this, value);
		}

		::System::Void WriteValue_20(::System::Uri* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_20_OFFSET))(this, value);
		}

		::System::Void WriteObjectId(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEOBJECTID_OFFSET))(this, value);
		}

		::System::Void WriteRegex(::System::String* pattern, ::System::String* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEREGEX_OFFSET))(this, pattern, options);
		}
	};
}
