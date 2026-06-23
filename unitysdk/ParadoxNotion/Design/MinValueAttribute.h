#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Design/DrawerAttribute.h"

#define PARADOXNOTION_DESIGN_MINVALUEATTRIBUTE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1BC64720)
#define PARADOXNOTION_DESIGN_MINVALUEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BC64740)
#define PARADOXNOTION_DESIGN_MINVALUEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC64730)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int MinValueAttribute_TypeDefinitionIndex = 29210;

	class MinValueAttribute : public ::ParadoxNotion::Design::DrawerAttribute
	{
	public:
		::System::Single min; // 0x10

		::System::Void _ctor(::System::Single min)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_MINVALUEATTRIBUTE__CTOR_OFFSET))(this, min);
		}

		::System::Void _ctor_1(::System::Int32 min)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_MINVALUEATTRIBUTE__CTOR_1_OFFSET))(this, min);
		}

		::System::Int32 get_priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_MINVALUEATTRIBUTE_GET_PRIORITY_OFFSET))(this);
		}
	};
}
