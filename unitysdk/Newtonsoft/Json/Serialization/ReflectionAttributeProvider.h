#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONATTRIBUTEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x172D9BF0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int ReflectionAttributeProvider_TypeDefinitionIndex = 9635;

	class ReflectionAttributeProvider : public ::System::Object
	{
	public:
		::System::Object* _attributeProvider; // 0x10

		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONATTRIBUTEPROVIDER__CTOR_OFFSET))(this, a1);
		}
	};
}
