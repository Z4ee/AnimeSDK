#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define NEWTONSOFT_JSON_JSONIGNOREATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBBCD20)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonIgnoreAttribute_TypeDefinitionIndex = 7002;

	class JsonIgnoreAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONIGNOREATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
