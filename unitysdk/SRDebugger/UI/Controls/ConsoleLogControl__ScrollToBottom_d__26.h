#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger::UI::Controls { class ConsoleLogControl; }

#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL__SCROLLTOBOTTOM_D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1844D660)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL__SCROLLTOBOTTOM_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1844D740)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL__SCROLLTOBOTTOM_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1844D7A0)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL__SCROLLTOBOTTOM_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1844D750)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL__SCROLLTOBOTTOM_D__26_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1844D650)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL__SCROLLTOBOTTOM_D__26__CTOR_OFFSET UNITYSDK_OFFSET(0x1844CE70)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int ConsoleLogControl__ScrollToBottom_d__26_TypeDefinitionIndex = 29668;

	class ConsoleLogControl__ScrollToBottom_d__26 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::SRDebugger::UI::Controls::ConsoleLogControl* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL__SCROLLTOBOTTOM_D__26__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL__SCROLLTOBOTTOM_D__26_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL__SCROLLTOBOTTOM_D__26_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL__SCROLLTOBOTTOM_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL__SCROLLTOBOTTOM_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL__SCROLLTOBOTTOM_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
