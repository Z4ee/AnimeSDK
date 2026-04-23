#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_265;

#define RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB2B55A0)
#define RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB2B5670)
#define RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB2B56D0)
#define RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB2B5680)
#define RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2B5590)
#define RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0xB2AB800)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamManager___WaitLineupReady_d__19_TypeDefinitionIndex = 56050;

	class TeamManager___WaitLineupReady_d__19 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_265* __2__current; // 0x10
		::System::Single _tStart_5__2; // 0x18
		::System::Int32 __1__state; // 0x1C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_MOVENEXT_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_265* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::Class_0_16E4307DCC419505_265*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
