#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JsonPath/QueryExpression.h"

#define NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x17A97ED0)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int BooleanQueryExpression_TypeDefinitionIndex = 8556;

	class BooleanQueryExpression : public ::Newtonsoft::Json::Linq::JsonPath::QueryExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION__CTOR_OFFSET))(this);
		}
	};
}
