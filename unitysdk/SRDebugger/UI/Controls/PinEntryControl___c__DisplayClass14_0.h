#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger::UI::Controls { class PinEntryControl; }

#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL___C__DISPLAYCLASS14_0__AWAKE_B__0_OFFSET UNITYSDK_OFFSET(0x1AD03AD0)
#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD03510)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int PinEntryControl___c__DisplayClass14_0_TypeDefinitionIndex = 35695;

	class PinEntryControl___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::SRDebugger::UI::Controls::PinEntryControl* __4__this; // 0x10
		::System::Int32 number; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _Awake_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL___C__DISPLAYCLASS14_0__AWAKE_B__0_OFFSET))(this);
		}
	};
}
