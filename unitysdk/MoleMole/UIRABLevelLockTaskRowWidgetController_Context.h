#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABLEVELLOCKTASKROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16904430)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABLevelLockTaskRowWidgetController_Context_TypeDefinitionIndex = 70302;

	class UIRABLevelLockTaskRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean isEmpty; // 0x28
		::System::Int32 tipId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELLOCKTASKROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
