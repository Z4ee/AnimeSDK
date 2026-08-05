#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PARADOXNOTION_DESIGN_DONOTLISTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAA0060)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int DoNotListAttribute_TypeDefinitionIndex = 29983;

	class DoNotListAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_DONOTLISTATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
