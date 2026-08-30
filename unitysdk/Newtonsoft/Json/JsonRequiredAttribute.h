#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define NEWTONSOFT_JSON_JSONREQUIREDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE92140)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonRequiredAttribute_TypeDefinitionIndex = 9534;

	class JsonRequiredAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREQUIREDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
