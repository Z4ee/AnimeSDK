#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PARADOXNOTION_DESIGN_EXPOSEFIELDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7ED6E0)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int ExposeFieldAttribute_TypeDefinitionIndex = 26728;

	class ExposeFieldAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_EXPOSEFIELDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
