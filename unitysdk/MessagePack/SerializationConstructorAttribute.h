#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MESSAGEPACK_SERIALIZATIONCONSTRUCTORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B459FF0)

namespace MessagePack
{
	inline static constexpr unsigned int SerializationConstructorAttribute_TypeDefinitionIndex = 27532;

	class SerializationConstructorAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_SERIALIZATIONCONSTRUCTORATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
