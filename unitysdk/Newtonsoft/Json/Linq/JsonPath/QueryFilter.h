#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JsonPath/PathFilter.h"

#define NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1646C7D0)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int QueryFilter_TypeDefinitionIndex = 8411;

	class QueryFilter : public ::Newtonsoft::Json::Linq::JsonPath::PathFilter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYFILTER__CTOR_OFFSET))(this);
		}
	};
}
