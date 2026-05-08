#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JsonPath/PathFilter.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq::JsonPath { class QueryExpression; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYFILTER_EXECUTEFILTER_OFFSET UNITYSDK_OFFSET(0x1B5F25D0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYFILTER_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x1B5F25B0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYFILTER_SET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x1B5F25C0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5F2640)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int QueryFilter_TypeDefinitionIndex = 7084;

	class QueryFilter : public ::Newtonsoft::Json::Linq::JsonPath::PathFilter
	{
	public:
		::Newtonsoft::Json::Linq::JsonPath::QueryExpression* _Expression_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYFILTER__CTOR_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JsonPath::QueryExpression* get_Expression()
		{
			return ((::Newtonsoft::Json::Linq::JsonPath::QueryExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYFILTER_GET_EXPRESSION_OFFSET))(this);
		}

		::System::Void set_Expression(::Newtonsoft::Json::Linq::JsonPath::QueryExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JsonPath::QueryExpression*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYFILTER_SET_EXPRESSION_OFFSET))(this, value);
		}

		::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* ExecuteFilter(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current, ::System::Boolean errorWhenNoMatch)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYFILTER_EXECUTEFILTER_OFFSET))(this, current, errorWhenNoMatch);
		}
	};
}
