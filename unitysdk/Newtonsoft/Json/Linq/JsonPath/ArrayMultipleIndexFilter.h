#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JsonPath/PathFilter.h"

#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYMULTIPLEINDEXFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A97EB0)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int ArrayMultipleIndexFilter_TypeDefinitionIndex = 8542;

	class ArrayMultipleIndexFilter : public ::Newtonsoft::Json::Linq::JsonPath::PathFilter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYMULTIPLEINDEXFILTER__CTOR_OFFSET))(this);
		}
	};
}
