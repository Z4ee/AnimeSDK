#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Design/DrawerAttribute.h"

#define PARADOXNOTION_DESIGN_REQUIREDFIELDATTRIBUTE_GET_ISDECORATOR_OFFSET UNITYSDK_OFFSET(0x1D1E8E30)
#define PARADOXNOTION_DESIGN_REQUIREDFIELDATTRIBUTE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1D1E8E40)
#define PARADOXNOTION_DESIGN_REQUIREDFIELDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E8E50)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int RequiredFieldAttribute_TypeDefinitionIndex = 30690;

	class RequiredFieldAttribute : public ::ParadoxNotion::Design::DrawerAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_REQUIREDFIELDATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isDecorator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_REQUIREDFIELDATTRIBUTE_GET_ISDECORATOR_OFFSET))(this);
		}

		::System::Int32 get_priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_REQUIREDFIELDATTRIBUTE_GET_PRIORITY_OFFSET))(this);
		}
	};
}
