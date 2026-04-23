#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger::Internal { class BugReportApi; }

#define SRDEBUGGER_INTERNAL_BUGREPORTAPI__SUBMIT_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19E6CB80)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI__SUBMIT_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19E6D8D0)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI__SUBMIT_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19E6D930)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI__SUBMIT_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19E6D8E0)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI__SUBMIT_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19E6CB70)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI__SUBMIT_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0x19E6C480)

namespace SRDebugger::Internal
{
	inline static constexpr unsigned int BugReportApi__Submit_d__19_TypeDefinitionIndex = 35465;

	class BugReportApi__Submit_d__19 : public ::System::Object
	{
	public:
		::SRDebugger::Internal::BugReportApi* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI__SUBMIT_D__19__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI__SUBMIT_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI__SUBMIT_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI__SUBMIT_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI__SUBMIT_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI__SUBMIT_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
