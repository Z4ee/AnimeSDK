#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class ActivityWidgetContext; }

#define MOLEMOLE_UIACTIVITYBLINDBOXBIGREWARDROOTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3A830)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBlindBoxBigRewardRootWidgetController_Context_TypeDefinitionIndex = 63861;

	class UIActivityBlindBoxBigRewardRootWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::ActivityWidgetContext* activityWidgetContext; // 0x28
		::System::Int32 tabIdx; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXBIGREWARDROOTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
