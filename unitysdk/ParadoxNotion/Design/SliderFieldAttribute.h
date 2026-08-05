#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Design/DrawerAttribute.h"

#define PARADOXNOTION_DESIGN_SLIDERFIELDATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8C83E0)
#define PARADOXNOTION_DESIGN_SLIDERFIELDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C83D0)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int SliderFieldAttribute_TypeDefinitionIndex = 29903;

	class SliderFieldAttribute : public ::ParadoxNotion::Design::DrawerAttribute
	{
	public:
		::System::Single min; // 0x10
		::System::Single max; // 0x14

		::System::Void _ctor(::System::Single min, ::System::Single max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_SLIDERFIELDATTRIBUTE__CTOR_OFFSET))(this, min, max);
		}

		::System::Void _ctor_1(::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_SLIDERFIELDATTRIBUTE__CTOR_1_OFFSET))(this, min, max);
		}
	};
}
