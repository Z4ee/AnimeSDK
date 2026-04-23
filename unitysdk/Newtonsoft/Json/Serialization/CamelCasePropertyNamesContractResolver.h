#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Serialization/DefaultContractResolver.h"

namespace System { class String; }

#define NEWTONSOFT_JSON_SERIALIZATION_CAMELCASEPROPERTYNAMESCONTRACTRESOLVER_RESOLVEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x17A980D0)
#define NEWTONSOFT_JSON_SERIALIZATION_CAMELCASEPROPERTYNAMESCONTRACTRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A97FE0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int CamelCasePropertyNamesContractResolver_TypeDefinitionIndex = 8450;

	class CamelCasePropertyNamesContractResolver : public ::Newtonsoft::Json::Serialization::DefaultContractResolver
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_CAMELCASEPROPERTYNAMESCONTRACTRESOLVER__CTOR_OFFSET))(this);
		}

		::System::String* ResolvePropertyName(::System::String* propertyName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_CAMELCASEPROPERTYNAMESCONTRACTRESOLVER_RESOLVEPROPERTYNAME_OFFSET))(this, propertyName);
		}
	};
}
