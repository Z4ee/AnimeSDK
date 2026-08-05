#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFOODQTEACTIVITYLEVELITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB3DF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFoodQteActivityLevelItemWidgetControllerContext_TypeDefinitionIndex = 79507;

	class UIFoodQteActivityLevelItemWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 LevelID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODQTEACTIVITYLEVELITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
