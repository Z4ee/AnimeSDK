#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSWRITEONLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBC3B30)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsWriteOnlyAttribute_TypeDefinitionIndex = 31097;

	class fsWriteOnlyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSWRITEONLYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
