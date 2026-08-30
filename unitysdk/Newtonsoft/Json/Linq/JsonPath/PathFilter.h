#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NEWTONSOFT_JSON_LINQ_JSONPATH_PATHFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x172D4990)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int PathFilter_TypeDefinitionIndex = 9746;

	class PathFilter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_PATHFILTER__CTOR_OFFSET))(this);
		}
	};
}
