#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_479;
namespace System { class String; }

#define MOLEMOLE_UIINLEVELCOUNTDOWNUICHILDWINDOWCONTROLLER_UIINLEVELCOUNTDOWNUICONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x150D7490)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelCountDownUIChildWindowController_UIInLevelCountDownUIContext_TypeDefinitionIndex = 74052;

	class UIInLevelCountDownUIChildWindowController_UIInLevelCountDownUIContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* FixedText; // 0x28
		::Class_0_16E4307DCC419505_479* newsBubbleSupport; // 0x30
		::System::Boolean useStandalone; // 0x38
		::System::Single totalDuration; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCOUNTDOWNUICHILDWINDOWCONTROLLER_UIINLEVELCOUNTDOWNUICONTEXT__CTOR_OFFSET))(this);
		}
	};
}
