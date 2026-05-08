#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSREADONLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B333580)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsReadOnlyAttribute_TypeDefinitionIndex = 27889;

	class fsReadOnlyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSREADONLYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
