#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Serialization/NamingStrategy.h"

namespace System { class String; }

#define NEWTONSOFT_JSON_SERIALIZATION_CAMELCASENAMINGSTRATEGY_RESOLVEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1D9BDA90)
#define NEWTONSOFT_JSON_SERIALIZATION_CAMELCASENAMINGSTRATEGY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D9BDA80)
#define NEWTONSOFT_JSON_SERIALIZATION_CAMELCASENAMINGSTRATEGY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9BDA70)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int CamelCaseNamingStrategy_TypeDefinitionIndex = 7093;

	class CamelCaseNamingStrategy : public ::Newtonsoft::Json::Serialization::NamingStrategy
	{
	public:
		::System::Void _ctor(::System::Boolean processDictionaryKeys, ::System::Boolean overrideSpecifiedNames)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_CAMELCASENAMINGSTRATEGY__CTOR_OFFSET))(this, processDictionaryKeys, overrideSpecifiedNames);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_CAMELCASENAMINGSTRATEGY__CTOR_1_OFFSET))(this);
		}

		::System::String* ResolvePropertyName(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_CAMELCASENAMINGSTRATEGY_RESOLVEPROPERTYNAME_OFFSET))(this, name);
		}
	};
}
