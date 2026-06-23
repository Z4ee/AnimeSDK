#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MESSAGEPACK_SERIALIZATIONCONSTRUCTORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D81F8F0)

namespace MessagePack
{
	inline static constexpr unsigned int SerializationConstructorAttribute_TypeDefinitionIndex = 30882;

	class SerializationConstructorAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_SERIALIZATIONCONSTRUCTORATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
