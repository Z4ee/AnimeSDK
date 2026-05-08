#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_SERIALIZATION_ALLOWDESERIALIZEINVALIDDATAATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3F3700)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int AllowDeserializeInvalidDataAttribute_TypeDefinitionIndex = 7359;

	class AllowDeserializeInvalidDataAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_ALLOWDESERIALIZEINVALIDDATAATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
