#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFOODQTEACTIVITYMAINPAGECONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x172E06C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFoodQteActivityMainPageControllerContext_TypeDefinitionIndex = 57921;

	class UIFoodQteActivityMainPageControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODQTEACTIVITYMAINPAGECONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
