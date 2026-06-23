#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MiniJSON/Json_TOKEN.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IDictionary; }
namespace System::Collections { class IList; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define FOUNDATION_MINIJSON_JSON_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E4F13C0)
#define FOUNDATION_MINIJSON_JSON_EATWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1E4F3270)
#define FOUNDATION_MINIJSON_JSON_GETLASTERRORINDEX_OFFSET UNITYSDK_OFFSET(0x1E4F1D20)
#define FOUNDATION_MINIJSON_JSON_GETLASTERRORSNIPPET_OFFSET UNITYSDK_OFFSET(0x1E4F1DA0)
#define FOUNDATION_MINIJSON_JSON_GETLASTINDEXOFNUMBER_OFFSET UNITYSDK_OFFSET(0x1E4F3340)
#define FOUNDATION_MINIJSON_JSON_LASTDECODESUCCESSFUL_OFFSET UNITYSDK_OFFSET(0x1E4F1CA0)
#define FOUNDATION_MINIJSON_JSON_LOOKAHEAD_OFFSET UNITYSDK_OFFSET(0x1E4F2640)
#define FOUNDATION_MINIJSON_JSON_NEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x1E4F2230)
#define FOUNDATION_MINIJSON_JSON_PARSEARRAY_OFFSET UNITYSDK_OFFSET(0x1E4F2E80)
#define FOUNDATION_MINIJSON_JSON_PARSENUMBER_OFFSET UNITYSDK_OFFSET(0x1E4F3070)
#define FOUNDATION_MINIJSON_JSON_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x1E4F1F60)
#define FOUNDATION_MINIJSON_JSON_PARSESTRING_OFFSET UNITYSDK_OFFSET(0x1E4F26D0)
#define FOUNDATION_MINIJSON_JSON_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1E4F1580)
#define FOUNDATION_MINIJSON_JSON_PRINTPRETTYTAB_OFFSET UNITYSDK_OFFSET(0x1E4F4220)
#define FOUNDATION_MINIJSON_JSON_SERIALIZEARRAY_OFFSET UNITYSDK_OFFSET(0x1E4F4800)
#define FOUNDATION_MINIJSON_JSON_SERIALIZENUMBER_1_OFFSET UNITYSDK_OFFSET(0x1E4F4DB0)
#define FOUNDATION_MINIJSON_JSON_SERIALIZENUMBER_OFFSET UNITYSDK_OFFSET(0x1E4F4E20)
#define FOUNDATION_MINIJSON_JSON_SERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1E4F3420)
#define FOUNDATION_MINIJSON_JSON_SERIALIZESTRING_OFFSET UNITYSDK_OFFSET(0x1E4F4430)
#define FOUNDATION_MINIJSON_JSON_SERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x1E4F1910)
#define FOUNDATION_MINIJSON_JSON_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E4F17F0)
#define FOUNDATION_MINIJSON_JSON__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F4EA0)

namespace Foundation::MiniJSON
{
	inline static constexpr unsigned int Json_TypeDefinitionIndex = 8198;

	class Json : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_lastDecode()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Json_TypeDefinitionIndex)->GetStaticField(0x7360);
		}
		static ::System::Int32* StaticGet_lastErrorIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Json_TypeDefinitionIndex)->GetStaticField(0x3A70);
		}
		static ::System::Boolean* StaticGet_PrettyPrint()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Json_TypeDefinitionIndex)->GetStaticField(0x3A74);
		}
		static ::System::Int32* StaticGet_tabSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Json_TypeDefinitionIndex)->GetStaticField(0x3A78);
		}
		static ::System::Int32* StaticGet_tabCounter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Json_TypeDefinitionIndex)->GetStaticField(0x3A7C);
		}
		// static const ::System::Int32 BUILDER_CAPACITY = 0x7D0; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_MINIJSON_JSON__CCTOR_OFFSET))();
		}

		static ::System::Object* Deserialize(::System::String* json)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_MINIJSON_JSON_DESERIALIZE_OFFSET))(json);
		}

		static ::System::String* Serialize(::System::Object* json)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_MINIJSON_JSON_SERIALIZE_OFFSET))(json);
		}

		static ::System::Boolean LastDecodeSuccessful()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_MINIJSON_JSON_LASTDECODESUCCESSFUL_OFFSET))();
		}

		static ::System::Int32 GetLastErrorIndex()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_MINIJSON_JSON_GETLASTERRORINDEX_OFFSET))();
		}

		static ::System::String* GetLastErrorSnippet()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_MINIJSON_JSON_GETLASTERRORSNIPPET_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* ParseObject(::Il2CppArray<::System::Char>* json, ::System::Int32& index)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::Il2CppArray<::System::Char>*, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_MINIJSON_JSON_PARSEOBJECT_OFFSET))(json, index);
		}

		static ::System::Collections::Generic::List_1<::System::Object*>* ParseArray(::Il2CppArray<::System::Char>* json, ::System::Int32& index)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::Il2CppArray<::System::Char>*, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_MINIJSON_JSON_PARSEARRAY_OFFSET))(json, index);
		}

		static ::System::Object* ParseValue(::Il2CppArray<::System::Char>* json, ::System::Int32& index, ::System::Boolean& success)
		{
			return ((::System::Object*(*)(::Il2CppArray<::System::Char>*, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOUNDATION_MINIJSON_JSON_PARSEVALUE_OFFSET))(json, index, success);
		}

		static ::System::String* ParseString(::Il2CppArray<::System::Char>* json, ::System::Int32& index)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Char>*, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_MINIJSON_JSON_PARSESTRING_OFFSET))(json, index);
		}

		static ::System::Object* ParseNumber(::Il2CppArray<::System::Char>* json, ::System::Int32& index)
		{
			return ((::System::Object*(*)(::Il2CppArray<::System::Char>*, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_MINIJSON_JSON_PARSENUMBER_OFFSET))(json, index);
		}

		static ::System::Int32 GetLastIndexOfNumber(::Il2CppArray<::System::Char>* json, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_MINIJSON_JSON_GETLASTINDEXOFNUMBER_OFFSET))(json, index);
		}

		static ::System::Void EatWhitespace(::Il2CppArray<::System::Char>* json, ::System::Int32& index)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Char>*, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_MINIJSON_JSON_EATWHITESPACE_OFFSET))(json, index);
		}

		static ::Foundation::MiniJSON::Json_TOKEN LookAhead(::Il2CppArray<::System::Char>* json, ::System::Int32 index)
		{
			return ((::Foundation::MiniJSON::Json_TOKEN(*)(::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_MINIJSON_JSON_LOOKAHEAD_OFFSET))(json, index);
		}

		static ::Foundation::MiniJSON::Json_TOKEN NextToken(::Il2CppArray<::System::Char>* json, ::System::Int32& index)
		{
			return ((::Foundation::MiniJSON::Json_TOKEN(*)(::Il2CppArray<::System::Char>*, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_MINIJSON_JSON_NEXTTOKEN_OFFSET))(json, index);
		}

		static ::System::Boolean SerializeObject(::System::Collections::IDictionary* anObject, ::System::Text::StringBuilder* builder)
		{
			return ((::System::Boolean(*)(::System::Collections::IDictionary*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + FOUNDATION_MINIJSON_JSON_SERIALIZEOBJECT_OFFSET))(anObject, builder);
		}

		static ::System::Void PrintPrettyTab(::System::Text::StringBuilder* builder, ::System::Int32 count, ::System::Int32 tabSize)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_MINIJSON_JSON_PRINTPRETTYTAB_OFFSET))(builder, count, tabSize);
		}

		static ::System::Boolean SerializeArray(::System::Collections::IList* anArray, ::System::Text::StringBuilder* builder)
		{
			return ((::System::Boolean(*)(::System::Collections::IList*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + FOUNDATION_MINIJSON_JSON_SERIALIZEARRAY_OFFSET))(anArray, builder);
		}

		static ::System::Boolean SerializeValue(::System::Object* value, ::System::Text::StringBuilder* builder)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + FOUNDATION_MINIJSON_JSON_SERIALIZEVALUE_OFFSET))(value, builder);
		}

		static ::System::Void SerializeString(::System::String* aString, ::System::Text::StringBuilder* builder)
		{
			return ((::System::Void(*)(::System::String*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + FOUNDATION_MINIJSON_JSON_SERIALIZESTRING_OFFSET))(aString, builder);
		}

		static ::System::Void SerializeNumber(::System::Double number, ::System::Text::StringBuilder* builder)
		{
			return ((::System::Void(*)(::System::Double, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + FOUNDATION_MINIJSON_JSON_SERIALIZENUMBER_OFFSET))(number, builder);
		}

		static ::System::Void SerializeNumber_1(::System::Int64 number, ::System::Text::StringBuilder* builder)
		{
			return ((::System::Void(*)(::System::Int64, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + FOUNDATION_MINIJSON_JSON_SERIALIZENUMBER_1_OFFSET))(number, builder);
		}
	};
}
