#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JsonPath/QueryExpression.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq { class JValue; }
namespace Newtonsoft::Json::Linq::JsonPath { class PathFilter; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_EQUALSWITHSTRINGCOERCION_OFFSET UNITYSDK_OFFSET(0x1E7DB090)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1E7DAB70)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E7DAB90)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1E7DABB0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_SET_PATH_OFFSET UNITYSDK_OFFSET(0x1E7DAB80)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E7DABA0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DB4D0)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int BooleanQueryExpression_TypeDefinitionIndex = 7214;

	class BooleanQueryExpression : public ::Newtonsoft::Json::Linq::JsonPath::QueryExpression
	{
	public:
		::Newtonsoft::Json::Linq::JValue* _Value_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* _Path_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* get_Path()
		{
			return ((::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_GET_PATH_OFFSET))(this);
		}

		::System::Void set_Path(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_SET_PATH_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Linq::JValue* get_Value()
		{
			return ((::Newtonsoft::Json::Linq::JValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::Newtonsoft::Json::Linq::JValue* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JValue*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_SET_VALUE_OFFSET))(this, value);
		}

		::System::Boolean IsMatch(::Newtonsoft::Json::Linq::JToken* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_ISMATCH_OFFSET))(this, t);
		}

		::System::Boolean EqualsWithStringCoercion(::Newtonsoft::Json::Linq::JValue* value, ::Newtonsoft::Json::Linq::JValue* queryValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JValue*, ::Newtonsoft::Json::Linq::JValue*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_EQUALSWITHSTRINGCOERCION_OFFSET))(this, value, queryValue);
		}
	};
}
