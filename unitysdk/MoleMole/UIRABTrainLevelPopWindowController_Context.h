#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABTRAINLEVELPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1821AE30)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABTrainLevelPopWindowController_Context_TypeDefinitionIndex = 66468;

	class UIRABTrainLevelPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean ShowGoToTowerBtn; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINLEVELPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
