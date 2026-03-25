#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonContainerAttribute.h"

#define NEWTONSOFT_JSON_JSONARRAYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1643EBA0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonArrayAttribute_TypeDefinitionIndex = 8200;

	class JsonArrayAttribute : public ::Newtonsoft::Json::JsonContainerAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONARRAYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
