#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define NEWTONSOFT_JSON_JSONCONSTRUCTORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F731DD0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonConstructorAttribute_TypeDefinitionIndex = 6993;

	class JsonConstructorAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONSTRUCTORATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
