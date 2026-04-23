#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JsonPath/PathFilter.h"

#define NEWTONSOFT_JSON_LINQ_JSONPATH_SCANFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A97FD0)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int ScanFilter_TypeDefinitionIndex = 8559;

	class ScanFilter : public ::Newtonsoft::Json::Linq::JsonPath::PathFilter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_SCANFILTER__CTOR_OFFSET))(this);
		}
	};
}
