#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18848030)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JsonMergeSettings_TypeDefinitionIndex = 9406;

	class JsonMergeSettings : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS__CTOR_OFFSET))(this);
		}
	};
}
