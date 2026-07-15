#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger::UI::Tabs { class ConsoleTabController; }

#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER__FADECOPYBUTTON_D__40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A21F970)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER__FADECOPYBUTTON_D__40_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A21FAE0)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER__FADECOPYBUTTON_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A21FB40)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER__FADECOPYBUTTON_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A21FAF0)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER__FADECOPYBUTTON_D__40_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A21F960)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER__FADECOPYBUTTON_D__40__CTOR_OFFSET UNITYSDK_OFFSET(0x1A21F690)

namespace SRDebugger::UI::Tabs
{
	inline static constexpr unsigned int ConsoleTabController__FadeCopyButton_d__40_TypeDefinitionIndex = 36436;

	class ConsoleTabController__FadeCopyButton_d__40 : public ::System::Object
	{
	public:
		::SRDebugger::UI::Tabs::ConsoleTabController* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single _startTime_5__2; // 0x20
		::System::Single _endTime_5__3; // 0x24
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER__FADECOPYBUTTON_D__40__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER__FADECOPYBUTTON_D__40_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER__FADECOPYBUTTON_D__40_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER__FADECOPYBUTTON_D__40_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER__FADECOPYBUTTON_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER__FADECOPYBUTTON_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
