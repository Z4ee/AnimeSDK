#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonContainerAttribute.h"

#define NEWTONSOFT_JSON_JSONDICTIONARYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1881AB50)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonDictionaryAttribute_TypeDefinitionIndex = 9238;

	class JsonDictionaryAttribute : public ::Newtonsoft::Json::JsonContainerAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONDICTIONARYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
