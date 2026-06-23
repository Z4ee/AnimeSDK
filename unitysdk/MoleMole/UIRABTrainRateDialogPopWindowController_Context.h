#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABTRAINRATEDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1789E350)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABTrainRateDialogPopWindowController_Context_TypeDefinitionIndex = 48004;

	class UIRABTrainRateDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean ShowCollectBtn; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINRATEDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
