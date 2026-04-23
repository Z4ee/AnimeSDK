#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger::UI::Other { class BugReportSheetController; }

#define SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER__SUBMITCO_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19E93E10)
#define SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER__SUBMITCO_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19E941B0)
#define SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER__SUBMITCO_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19E94210)
#define SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER__SUBMITCO_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19E941C0)
#define SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER__SUBMITCO_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19E93E00)
#define SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER__SUBMITCO_D__18__CTOR_OFFSET UNITYSDK_OFFSET(0x19E93A20)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int BugReportSheetController__SubmitCo_d__18_TypeDefinitionIndex = 35364;

	class BugReportSheetController__SubmitCo_d__18 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::SRDebugger::UI::Other::BugReportSheetController* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER__SUBMITCO_D__18__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER__SUBMITCO_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER__SUBMITCO_D__18_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER__SUBMITCO_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER__SUBMITCO_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER__SUBMITCO_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
