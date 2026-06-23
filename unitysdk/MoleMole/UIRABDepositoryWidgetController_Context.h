#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_D7E802D2192B688B.h"

#define MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15611580)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryWidgetController_Context_TypeDefinitionIndex = 48544;

	class UIRABDepositoryWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 SelectBuddyConfigId; // 0x28
		::Struct_2_D7E802D2192B688B ContextHandle; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
