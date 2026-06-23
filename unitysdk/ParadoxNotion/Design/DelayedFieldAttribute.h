#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Design/DrawerAttribute.h"

#define PARADOXNOTION_DESIGN_DELAYEDFIELDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E8E10)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int DelayedFieldAttribute_TypeDefinitionIndex = 29125;

	class DelayedFieldAttribute : public ::ParadoxNotion::Design::DrawerAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_DELAYEDFIELDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
