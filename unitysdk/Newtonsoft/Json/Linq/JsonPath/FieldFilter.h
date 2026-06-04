#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JsonPath/PathFilter.h"

#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18848100)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int FieldFilter_TypeDefinitionIndex = 9449;

	class FieldFilter : public ::Newtonsoft::Json::Linq::JsonPath::PathFilter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDFILTER__CTOR_OFFSET))(this);
		}
	};
}
