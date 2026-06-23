#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSIGNOREATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCD1D20)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsIgnoreAttribute_TypeDefinitionIndex = 29175;

	class fsIgnoreAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSIGNOREATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
