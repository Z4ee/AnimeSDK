#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JsonPath/QueryExpression.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_COMPOSITEEXPRESSION_GET_EXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1BC33D60)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_COMPOSITEEXPRESSION_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1BC33E00)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_COMPOSITEEXPRESSION_SET_EXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1BC33D70)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_COMPOSITEEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC33D80)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int CompositeExpression_TypeDefinitionIndex = 7082;

	class CompositeExpression : public ::Newtonsoft::Json::Linq::JsonPath::QueryExpression
	{
	public:
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* _Expressions_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_COMPOSITEEXPRESSION__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* get_Expressions()
		{
			return ((::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_COMPOSITEEXPRESSION_GET_EXPRESSIONS_OFFSET))(this);
		}

		::System::Void set_Expressions(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_COMPOSITEEXPRESSION_SET_EXPRESSIONS_OFFSET))(this, value);
		}

		::System::Boolean IsMatch(::Newtonsoft::Json::Linq::JToken* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_COMPOSITEEXPRESSION_ISMATCH_OFFSET))(this, t);
		}
	};
}
