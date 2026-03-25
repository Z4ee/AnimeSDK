#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define NEWTONSOFT_JSON_SERIALIZATION_ONERRORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x16493AF0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int OnErrorAttribute_TypeDefinitionIndex = 8350;

	class OnErrorAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ONERRORATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
