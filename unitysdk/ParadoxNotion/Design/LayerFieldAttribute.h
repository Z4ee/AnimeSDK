#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Design/DrawerAttribute.h"

#define PARADOXNOTION_DESIGN_LAYERFIELDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19860E00)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int LayerFieldAttribute_TypeDefinitionIndex = 26935;

	class LayerFieldAttribute : public ::ParadoxNotion::Design::DrawerAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_LAYERFIELDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
