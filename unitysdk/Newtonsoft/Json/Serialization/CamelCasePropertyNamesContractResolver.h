#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Serialization/DefaultContractResolver.h"

#define NEWTONSOFT_JSON_SERIALIZATION_CAMELCASEPROPERTYNAMESCONTRACTRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F733E80)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int CamelCasePropertyNamesContractResolver_TypeDefinitionIndex = 7098;

	class CamelCasePropertyNamesContractResolver : public ::Newtonsoft::Json::Serialization::DefaultContractResolver
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_CAMELCASEPROPERTYNAMESCONTRACTRESOLVER__CTOR_OFFSET))(this);
		}
	};
}
