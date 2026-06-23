#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JsonPath/QueryOperator.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq::JsonPath { class PathFilter; }
namespace Newtonsoft::Json::Linq::JsonPath { class QueryExpression; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_EATWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1DF06CA0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_ENSURELENGTH_OFFSET UNITYSDK_OFFSET(0x1DF079D0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_EVALUATE_1_OFFSET UNITYSDK_OFFSET(0x1DF0AEE0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1DF0AED0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_GET_FILTERS_OFFSET UNITYSDK_OFFSET(0x1DF06890)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_MATCH_OFFSET UNITYSDK_OFFSET(0x1DF0A990)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEARRAYINDEXER_OFFSET UNITYSDK_OFFSET(0x1DF08220)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1DF08D10)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEINDEXER_OFFSET UNITYSDK_OFFSET(0x1DF07790)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEMAIN_OFFSET UNITYSDK_OFFSET(0x1DF069B0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEOPERATOR_OFFSET UNITYSDK_OFFSET(0x1DF09AB0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEPATH_OFFSET UNITYSDK_OFFSET(0x1DF06D40)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEQUERY_OFFSET UNITYSDK_OFFSET(0x1DF07E80)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEQUOTEDFIELD_OFFSET UNITYSDK_OFFSET(0x1DF07A50)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1DF0A160)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_READQUOTEDSTRING_OFFSET UNITYSDK_OFFSET(0x1DF0AAC0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_SET_FILTERS_OFFSET UNITYSDK_OFFSET(0x1DF068A0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF068B0)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int JPath_TypeDefinitionIndex = 7209;

	class JPath : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* _Filters_k__BackingField; // 0x10
		::System::String* _expression; // 0x18
		::System::Int32 _currentIndex; // 0x20

		::System::Void _ctor(::System::String* expression)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH__CTOR_OFFSET))(this, expression);
		}

		::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* get_Filters()
		{
			return ((::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_GET_FILTERS_OFFSET))(this);
		}

		::System::Void set_Filters(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_SET_FILTERS_OFFSET))(this, value);
		}

		::System::Void ParseMain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEMAIN_OFFSET))(this);
		}

		::System::Boolean ParsePath(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* filters, ::System::Int32 currentPartStartIndex, ::System::Boolean query)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEPATH_OFFSET))(this, filters, currentPartStartIndex, query);
		}

		::Newtonsoft::Json::Linq::JsonPath::PathFilter* ParseIndexer(::System::Char indexerOpenChar)
		{
			return ((::Newtonsoft::Json::Linq::JsonPath::PathFilter*(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEINDEXER_OFFSET))(this, indexerOpenChar);
		}

		::Newtonsoft::Json::Linq::JsonPath::PathFilter* ParseArrayIndexer(::System::Char indexerCloseChar)
		{
			return ((::Newtonsoft::Json::Linq::JsonPath::PathFilter*(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEARRAYINDEXER_OFFSET))(this, indexerCloseChar);
		}

		::System::Void EatWhitespace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_EATWHITESPACE_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JsonPath::PathFilter* ParseQuery(::System::Char indexerCloseChar)
		{
			return ((::Newtonsoft::Json::Linq::JsonPath::PathFilter*(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEQUERY_OFFSET))(this, indexerCloseChar);
		}

		::Newtonsoft::Json::Linq::JsonPath::QueryExpression* ParseExpression()
		{
			return ((::Newtonsoft::Json::Linq::JsonPath::QueryExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEEXPRESSION_OFFSET))(this);
		}

		::System::Object* ParseValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEVALUE_OFFSET))(this);
		}

		::System::String* ReadQuotedString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_READQUOTEDSTRING_OFFSET))(this);
		}

		::System::Boolean Match(::System::String* s)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_MATCH_OFFSET))(this, s);
		}

		::Newtonsoft::Json::Linq::JsonPath::QueryOperator ParseOperator()
		{
			return ((::Newtonsoft::Json::Linq::JsonPath::QueryOperator(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEOPERATOR_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JsonPath::PathFilter* ParseQuotedField(::System::Char indexerCloseChar)
		{
			return ((::Newtonsoft::Json::Linq::JsonPath::PathFilter*(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEQUOTEDFIELD_OFFSET))(this, indexerCloseChar);
		}

		::System::Void EnsureLength(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_ENSURELENGTH_OFFSET))(this, message);
		}

		::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Evaluate(::Newtonsoft::Json::Linq::JToken* t, ::System::Boolean errorWhenNoMatch)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_EVALUATE_OFFSET))(this, t, errorWhenNoMatch);
		}

		static ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Evaluate_1(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* filters, ::Newtonsoft::Json::Linq::JToken* t, ::System::Boolean errorWhenNoMatch)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*, ::Newtonsoft::Json::Linq::JToken*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_EVALUATE_1_OFFSET))(filters, t, errorWhenNoMatch);
		}
	};
}
