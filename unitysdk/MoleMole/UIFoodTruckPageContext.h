#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFOODTRUCKPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16A8C550)

namespace MoleMole
{
	inline static constexpr unsigned int UIFoodTruckPageContext_TypeDefinitionIndex = 43607;

	class UIFoodTruckPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 TaskDayID; // 0x28
		::System::Int32 JumpPage; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
