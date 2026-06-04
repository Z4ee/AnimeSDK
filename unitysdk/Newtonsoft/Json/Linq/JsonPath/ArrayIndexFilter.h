#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JsonPath/PathFilter.h"

#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYINDEXFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18848040)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int ArrayIndexFilter_TypeDefinitionIndex = 9443;

	class ArrayIndexFilter : public ::Newtonsoft::Json::Linq::JsonPath::PathFilter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYINDEXFILTER__CTOR_OFFSET))(this);
		}
	};
}
