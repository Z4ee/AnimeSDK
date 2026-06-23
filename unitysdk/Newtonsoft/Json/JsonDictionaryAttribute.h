#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonContainerAttribute.h"

namespace System { class String; }

#define NEWTONSOFT_JSON_JSONDICTIONARYATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7DA700)
#define NEWTONSOFT_JSON_JSONDICTIONARYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DA6F0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonDictionaryAttribute_TypeDefinitionIndex = 6995;

	class JsonDictionaryAttribute : public ::Newtonsoft::Json::JsonContainerAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONDICTIONARYATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONDICTIONARYATTRIBUTE__CTOR_1_OFFSET))(this, id);
		}
	};
}
