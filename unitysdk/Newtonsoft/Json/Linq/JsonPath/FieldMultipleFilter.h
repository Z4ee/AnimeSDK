#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JsonPath/PathFilter.h"

#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1646C770)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int FieldMultipleFilter_TypeDefinitionIndex = 8402;

	class FieldMultipleFilter : public ::Newtonsoft::Json::Linq::JsonPath::PathFilter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER__CTOR_OFFSET))(this);
		}
	};
}
