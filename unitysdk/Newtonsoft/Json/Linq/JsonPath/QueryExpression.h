#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JsonPath/QueryOperator.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JToken; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYEXPRESSION_GET_OPERATOR_OFFSET UNITYSDK_OFFSET(0x1E130160)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYEXPRESSION_SET_OPERATOR_OFFSET UNITYSDK_OFFSET(0x1E130170)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E130180)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int QueryExpression_TypeDefinitionIndex = 7212;

	class QueryExpression : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Linq::JsonPath::QueryOperator _Operator_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYEXPRESSION__CTOR_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JsonPath::QueryOperator get_Operator()
		{
			return ((::Newtonsoft::Json::Linq::JsonPath::QueryOperator(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYEXPRESSION_GET_OPERATOR_OFFSET))(this);
		}

		::System::Void set_Operator(::Newtonsoft::Json::Linq::JsonPath::QueryOperator value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JsonPath::QueryOperator))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYEXPRESSION_SET_OPERATOR_OFFSET))(this, value);
		}
	};
}
