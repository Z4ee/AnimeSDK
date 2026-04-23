#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Formatting.h"
#include "unitysdk/Newtonsoft/Json/Linq/JEnumerable_1.h"
#include "unitysdk/Newtonsoft/Json/Linq/JTokenType.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace Newtonsoft::Json { class IJsonLineInfo; }
namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json::Linq { class JContainer; }
namespace Newtonsoft::Json::Linq { class JValue; }
namespace Newtonsoft::Json::Linq { class JsonLoadSettings; }
namespace System { class String; }
namespace System { class Type; }
namespace System { class Uri; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define NEWTONSOFT_JSON_LINQ_JTOKEN_ADDANNOTATION_OFFSET UNITYSDK_OFFSET(0x17A93280)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_CHILDREN_OFFSET UNITYSDK_OFFSET(0x17A8C300)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_CREATEREADER_OFFSET UNITYSDK_OFFSET(0x17A917A0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0x17A93670)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_DEEPEQUALS_OFFSET UNITYSDK_OFFSET(0x17A8BE20)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_ENSUREVALUE_OFFSET UNITYSDK_OFFSET(0x17A8C640)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_FROMOBJECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x17A91890)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_FROMOBJECT_OFFSET UNITYSDK_OFFSET(0x17A91B00)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GETTYPE_OFFSET UNITYSDK_OFFSET(0x17A8C740)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_FIRST_OFFSET UNITYSDK_OFFSET(0x17A8C200)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x17A8C180)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_LAST_OFFSET UNITYSDK_OFFSET(0x17A8C280)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x17A8BE50)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x17A8BDF0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_PATH_OFFSET UNITYSDK_OFFSET(0x17A8BE90)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_PREVIOUS_OFFSET UNITYSDK_OFFSET(0x17A8BE70)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x17A8BE10)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT_JSON_IJSONLINEINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x17A935C0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT_JSON_IJSONLINEINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x17A93610)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT_JSON_IJSONLINEINFO_HASLINEINFO_OFFSET UNITYSDK_OFFSET(0x17A93580)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_10_OFFSET UNITYSDK_OFFSET(0x17A8DF80)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_11_OFFSET UNITYSDK_OFFSET(0x17A8E110)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_12_OFFSET UNITYSDK_OFFSET(0x17A8E2A0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_13_OFFSET UNITYSDK_OFFSET(0x17A8E430)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_14_OFFSET UNITYSDK_OFFSET(0x17A8E5C0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_15_OFFSET UNITYSDK_OFFSET(0x17A8E750)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_16_OFFSET UNITYSDK_OFFSET(0x17A8E9B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_17_OFFSET UNITYSDK_OFFSET(0x17A8EC10)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_18_OFFSET UNITYSDK_OFFSET(0x17A8EE70)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_19_OFFSET UNITYSDK_OFFSET(0x17A8F0C0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x17A8CA40)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_20_OFFSET UNITYSDK_OFFSET(0x17A8F310)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_21_OFFSET UNITYSDK_OFFSET(0x17A8F4E0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_22_OFFSET UNITYSDK_OFFSET(0x17A8F750)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_23_OFFSET UNITYSDK_OFFSET(0x17A8F9B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_24_OFFSET UNITYSDK_OFFSET(0x17A8FB50)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_25_OFFSET UNITYSDK_OFFSET(0x17A8FDB0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_26_OFFSET UNITYSDK_OFFSET(0x17A90020)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_27_OFFSET UNITYSDK_OFFSET(0x17A901B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_28_OFFSET UNITYSDK_OFFSET(0x17A90340)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_29_OFFSET UNITYSDK_OFFSET(0x17A90620)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_2_OFFSET UNITYSDK_OFFSET(0x17A8CCA0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_30_OFFSET UNITYSDK_OFFSET(0x17A907B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_31_OFFSET UNITYSDK_OFFSET(0x17A90940)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_32_OFFSET UNITYSDK_OFFSET(0x17A90B70)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_33_OFFSET UNITYSDK_OFFSET(0x17A90E90)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_34_OFFSET UNITYSDK_OFFSET(0x17A91080)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_35_OFFSET UNITYSDK_OFFSET(0x17A91330)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_3_OFFSET UNITYSDK_OFFSET(0x17A8CEF0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_4_OFFSET UNITYSDK_OFFSET(0x17A8D080)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_5_OFFSET UNITYSDK_OFFSET(0x17A8D310)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_6_OFFSET UNITYSDK_OFFSET(0x17A8D690)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_7_OFFSET UNITYSDK_OFFSET(0x17A8D910)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_8_OFFSET UNITYSDK_OFFSET(0x17A8DB90)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_9_OFFSET UNITYSDK_OFFSET(0x17A8DDF0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x17A8C8B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x17A91600)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_READFROM_1_OFFSET UNITYSDK_OFFSET(0x17A92B80)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_READFROM_OFFSET UNITYSDK_OFFSET(0x17A92B50)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_REMOVE_OFFSET UNITYSDK_OFFSET(0x17A8C360)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_REPLACE_OFFSET UNITYSDK_OFFSET(0x17A8C3E0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SETLINEINFO_1_OFFSET UNITYSDK_OFFSET(0x17A93230)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SETLINEINFO_OFFSET UNITYSDK_OFFSET(0x17A92F50)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SET_NEXT_OFFSET UNITYSDK_OFFSET(0x17A8BE60)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x17A8BE00)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SET_PREVIOUS_OFFSET UNITYSDK_OFFSET(0x17A8BE80)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_NEWTONSOFT_JSON_LINQ_JTOKEN__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17A91750)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17A91690)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x17A93660)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_TOOBJECT_1_OFFSET UNITYSDK_OFFSET(0x17A92960)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_TOOBJECT_OFFSET UNITYSDK_OFFSET(0x17A91B40)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x17A8C4A0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A8C470)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_VALIDATETOKEN_OFFSET UNITYSDK_OFFSET(0x17A8C810)
#define NEWTONSOFT_JSON_LINQ_JTOKEN__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A93680)
#define NEWTONSOFT_JSON_LINQ_JTOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x17A8C170)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JToken_TypeDefinitionIndex = 8528;

	class JToken : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_BytesTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)Il2CppClass::FromTypeDefinitionIndex(JToken_TypeDefinitionIndex)->GetStaticField(0x343D0);
		}
		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_TimeSpanTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)Il2CppClass::FromTypeDefinitionIndex(JToken_TypeDefinitionIndex)->GetStaticField(0x343D8);
		}
		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_GuidTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)Il2CppClass::FromTypeDefinitionIndex(JToken_TypeDefinitionIndex)->GetStaticField(0x343E0);
		}
		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_BooleanTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)Il2CppClass::FromTypeDefinitionIndex(JToken_TypeDefinitionIndex)->GetStaticField(0x343E8);
		}
		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_StringTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)Il2CppClass::FromTypeDefinitionIndex(JToken_TypeDefinitionIndex)->GetStaticField(0x343F0);
		}
		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_DateTimeTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)Il2CppClass::FromTypeDefinitionIndex(JToken_TypeDefinitionIndex)->GetStaticField(0x343F8);
		}
		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_NumberTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)Il2CppClass::FromTypeDefinitionIndex(JToken_TypeDefinitionIndex)->GetStaticField(0x34400);
		}
		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_CharTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)Il2CppClass::FromTypeDefinitionIndex(JToken_TypeDefinitionIndex)->GetStaticField(0x34408);
		}
		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_UriTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)Il2CppClass::FromTypeDefinitionIndex(JToken_TypeDefinitionIndex)->GetStaticField(0x34410);
		}
		::System::Object* _annotations; // 0x10
		::Newtonsoft::Json::Linq::JToken* _next; // 0x18
		::Newtonsoft::Json::Linq::JToken* _previous; // 0x20
		::Newtonsoft::Json::Linq::JContainer* _parent; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN__CCTOR_OFFSET))();
		}

		::Newtonsoft::Json::Linq::JContainer* get_Parent()
		{
			return ((::Newtonsoft::Json::Linq::JContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_PARENT_OFFSET))(this);
		}

		::System::Void set_Parent(::Newtonsoft::Json::Linq::JContainer* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JContainer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SET_PARENT_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Linq::JToken* get_Root()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_ROOT_OFFSET))(this);
		}

		static ::System::Boolean DeepEquals(::Newtonsoft::Json::Linq::JToken* t1, ::Newtonsoft::Json::Linq::JToken* t2)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_DEEPEQUALS_OFFSET))(t1, t2);
		}

		::Newtonsoft::Json::Linq::JToken* get_Next()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_NEXT_OFFSET))(this);
		}

		::System::Void set_Next(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SET_NEXT_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Linq::JToken* get_Previous()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_PREVIOUS_OFFSET))(this);
		}

		::System::Void set_Previous(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SET_PREVIOUS_OFFSET))(this, value);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_PATH_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JToken* get_Item(::System::Object* key)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_ITEM_OFFSET))(this, key);
		}

		::Newtonsoft::Json::Linq::JToken* get_First()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_FIRST_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JToken* get_Last()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_LAST_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*> Children()
		{
			return ((::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_CHILDREN_OFFSET))(this);
		}

		::System::Void Remove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_REMOVE_OFFSET))(this);
		}

		::System::Void Replace(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_REPLACE_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::Newtonsoft::Json::Formatting formatting, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>* converters)
		{
			return ((::System::String*(*)(::PVOID, ::Newtonsoft::Json::Formatting, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_TOSTRING_1_OFFSET))(this, formatting, converters);
		}

		static ::Newtonsoft::Json::Linq::JValue* EnsureValue(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::Newtonsoft::Json::Linq::JValue*(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_ENSUREVALUE_OFFSET))(value);
		}

		static ::System::String* GetType(::Newtonsoft::Json::Linq::JToken* token)
		{
			return ((::System::String*(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GETTYPE_OFFSET))(token);
		}

		static ::System::Boolean ValidateToken(::Newtonsoft::Json::Linq::JToken* o, ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>* validTypes, ::System::Boolean nullable)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_VALIDATETOKEN_OFFSET))(o, validTypes, nullable);
		}

		static ::System::Boolean op_Explicit(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(value);
		}

		static ::System::DateTimeOffset op_Explicit_1(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::DateTimeOffset(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_1_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::Boolean> op_Explicit_2(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_2_OFFSET))(value);
		}

		static ::System::Int64 op_Explicit_3(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Int64(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_3_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::DateTime> op_Explicit_4(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::DateTime>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_4_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::DateTimeOffset> op_Explicit_5(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_5_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::Decimal> op_Explicit_6(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::Decimal>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_6_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::Double> op_Explicit_7(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::Double>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_7_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::Char> op_Explicit_8(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::Char>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_8_OFFSET))(value);
		}

		static ::System::Int32 op_Explicit_9(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Int32(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_9_OFFSET))(value);
		}

		static ::System::Int16 op_Explicit_10(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Int16(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_10_OFFSET))(value);
		}

		static ::System::UInt16 op_Explicit_11(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::UInt16(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_11_OFFSET))(value);
		}

		static ::System::Char op_Explicit_12(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Char(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_12_OFFSET))(value);
		}

		static ::System::Byte op_Explicit_13(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Byte(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_13_OFFSET))(value);
		}

		static ::System::SByte op_Explicit_14(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::SByte(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_14_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::Int32> op_Explicit_15(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_15_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::Int16> op_Explicit_16(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::Int16>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_16_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::UInt16> op_Explicit_17(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::UInt16>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_17_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::Byte> op_Explicit_18(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::Byte>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_18_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::SByte> op_Explicit_19(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::SByte>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_19_OFFSET))(value);
		}

		static ::System::DateTime op_Explicit_20(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::DateTime(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_20_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::Int64> op_Explicit_21(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_21_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::Single> op_Explicit_22(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::Single>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_22_OFFSET))(value);
		}

		static ::System::Decimal op_Explicit_23(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Decimal(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_23_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::UInt32> op_Explicit_24(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_24_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::UInt64> op_Explicit_25(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::UInt64>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_25_OFFSET))(value);
		}

		static ::System::Double op_Explicit_26(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Double(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_26_OFFSET))(value);
		}

		static ::System::Single op_Explicit_27(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Single(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_27_OFFSET))(value);
		}

		static ::System::String* op_Explicit_28(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::String*(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_28_OFFSET))(value);
		}

		static ::System::UInt32 op_Explicit_29(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::UInt32(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_29_OFFSET))(value);
		}

		static ::System::UInt64 op_Explicit_30(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::UInt64(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_30_OFFSET))(value);
		}

		static ::System::Guid op_Explicit_31(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Guid(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_31_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::Guid> op_Explicit_32(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::Guid>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_32_OFFSET))(value);
		}

		static ::System::TimeSpan op_Explicit_33(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::TimeSpan(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_33_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::TimeSpan> op_Explicit_34(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::TimeSpan>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_34_OFFSET))(value);
		}

		static ::System::Uri* op_Explicit_35(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Uri*(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_35_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit(::System::String* value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(value);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_NEWTONSOFT_JSON_LINQ_JTOKEN__GETENUMERATOR_OFFSET))(this);
		}

		::Newtonsoft::Json::JsonReader* CreateReader()
		{
			return ((::Newtonsoft::Json::JsonReader*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_CREATEREADER_OFFSET))(this);
		}

		static ::Newtonsoft::Json::Linq::JToken* FromObjectInternal(::System::Object* o, ::Newtonsoft::Json::JsonSerializer* jsonSerializer)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_FROMOBJECTINTERNAL_OFFSET))(o, jsonSerializer);
		}

		static ::Newtonsoft::Json::Linq::JToken* FromObject(::System::Object* o)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_FROMOBJECT_OFFSET))(o);
		}

		::System::Object* ToObject(::System::Type* objectType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_TOOBJECT_OFFSET))(this, objectType);
		}

		::System::Object* ToObject_1(::System::Type* objectType, ::Newtonsoft::Json::JsonSerializer* jsonSerializer)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_TOOBJECT_1_OFFSET))(this, objectType, jsonSerializer);
		}

		static ::Newtonsoft::Json::Linq::JToken* ReadFrom(::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_READFROM_OFFSET))(reader);
		}

		static ::Newtonsoft::Json::Linq::JToken* ReadFrom_1(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_READFROM_1_OFFSET))(reader, settings);
		}

		::System::Void SetLineInfo(::Newtonsoft::Json::IJsonLineInfo* lineInfo, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::IJsonLineInfo*, ::Newtonsoft::Json::Linq::JsonLoadSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SETLINEINFO_OFFSET))(this, lineInfo, settings);
		}

		::System::Void SetLineInfo_1(::System::Int32 lineNumber, ::System::Int32 linePosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SETLINEINFO_1_OFFSET))(this, lineNumber, linePosition);
		}

		::System::Boolean Newtonsoft_Json_IJsonLineInfo_HasLineInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT_JSON_IJSONLINEINFO_HASLINEINFO_OFFSET))(this);
		}

		::System::Int32 Newtonsoft_Json_IJsonLineInfo_get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT_JSON_IJSONLINEINFO_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Int32 Newtonsoft_Json_IJsonLineInfo_get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT_JSON_IJSONLINEINFO_GET_LINEPOSITION_OFFSET))(this);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JToken* DeepClone()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_DEEPCLONE_OFFSET))(this);
		}

		::System::Void AddAnnotation(::System::Object* annotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_ADDANNOTATION_OFFSET))(this, annotation);
		}
	};
}
