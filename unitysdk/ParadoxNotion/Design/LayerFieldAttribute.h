#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Design/DrawerAttribute.h"

#define PARADOXNOTION_DESIGN_LAYERFIELDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0707C0)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int LayerFieldAttribute_TypeDefinitionIndex = 30729;

	class LayerFieldAttribute : public ::ParadoxNotion::Design::DrawerAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_LAYERFIELDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
