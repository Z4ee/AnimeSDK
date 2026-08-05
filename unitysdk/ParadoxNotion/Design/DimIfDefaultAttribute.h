#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Design/DrawerAttribute.h"

#define PARADOXNOTION_DESIGN_DIMIFDEFAULTATTRIBUTE_GET_ISDECORATOR_OFFSET UNITYSDK_OFFSET(0x1DFE2E30)
#define PARADOXNOTION_DESIGN_DIMIFDEFAULTATTRIBUTE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1DFE2E40)
#define PARADOXNOTION_DESIGN_DIMIFDEFAULTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE2E50)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int DimIfDefaultAttribute_TypeDefinitionIndex = 30263;

	class DimIfDefaultAttribute : public ::ParadoxNotion::Design::DrawerAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_DIMIFDEFAULTATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isDecorator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_DIMIFDEFAULTATTRIBUTE_GET_ISDECORATOR_OFFSET))(this);
		}

		::System::Int32 get_priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_DIMIFDEFAULTATTRIBUTE_GET_PRIORITY_OFFSET))(this);
		}
	};
}
