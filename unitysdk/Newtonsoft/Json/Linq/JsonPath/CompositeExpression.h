#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JsonPath/QueryExpression.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_COMPOSITEEXPRESSION_SET_EXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x17A97EF0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_COMPOSITEEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x17A97F00)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int CompositeExpression_TypeDefinitionIndex = 8555;

	class CompositeExpression : public ::Newtonsoft::Json::Linq::JsonPath::QueryExpression
	{
	public:
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* _Expressions_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_COMPOSITEEXPRESSION__CTOR_OFFSET))(this);
		}

		::System::Void set_Expressions(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_COMPOSITEEXPRESSION_SET_EXPRESSIONS_OFFSET))(this, value);
		}
	};
}
