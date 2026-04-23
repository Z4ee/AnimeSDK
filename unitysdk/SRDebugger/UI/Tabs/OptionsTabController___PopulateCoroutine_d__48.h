#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger { class OptionDefinition; }
namespace SRDebugger::UI::Tabs { class OptionsTabController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___POPULATECOROUTINE_D__48_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19EA0F90)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___POPULATECOROUTINE_D__48_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19EA1220)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___POPULATECOROUTINE_D__48_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19EA1280)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___POPULATECOROUTINE_D__48_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19EA1230)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___POPULATECOROUTINE_D__48_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19EA0F70)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___POPULATECOROUTINE_D__48__CTOR_OFFSET UNITYSDK_OFFSET(0x19E9E830)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___POPULATECOROUTINE_D__48___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x19EA0F80)

namespace SRDebugger::UI::Tabs
{
	inline static constexpr unsigned int OptionsTabController___PopulateCoroutine_d__48_TypeDefinitionIndex = 35360;

	class OptionsTabController___PopulateCoroutine_d__48 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::System::Collections::Generic::List_1<::SRDebugger::OptionDefinition*>*> __7__wrap2; // 0x10
		::SRDebugger::UI::Tabs::OptionsTabController* __4__this; // 0x38
		::System::Object* __2__current; // 0x40
		::System::Boolean _hasCreated_5__2; // 0x48
		::System::Int32 __1__state; // 0x4C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___POPULATECOROUTINE_D__48__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___POPULATECOROUTINE_D__48_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___POPULATECOROUTINE_D__48_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___POPULATECOROUTINE_D__48___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___POPULATECOROUTINE_D__48_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___POPULATECOROUTINE_D__48_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___POPULATECOROUTINE_D__48_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
