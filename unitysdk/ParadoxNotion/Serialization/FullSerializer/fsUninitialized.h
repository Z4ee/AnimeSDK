#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSUNINITIALIZED__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCD1D30)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsUninitialized_TypeDefinitionIndex = 30231;

	class fsUninitialized : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSUNINITIALIZED__CTOR_OFFSET))(this);
		}
	};
}
