#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x18848090)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int QueryExpression_TypeDefinitionIndex = 9457;

	class QueryExpression : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYEXPRESSION__CTOR_OFFSET))(this);
		}
	};
}
