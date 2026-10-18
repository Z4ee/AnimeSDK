#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_384;

#define RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE1D3C10)
#define RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE1D3D00)
#define RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE1D3D60)
#define RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xE1D3D10)
#define RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE1D3C00)
#define RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0xE1C8E90)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamManager___WaitLineupReady_d__19_TypeDefinitionIndex = 60789;

	class TeamManager___WaitLineupReady_d__19 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_384* __2__current; // 0x10
		::System::Int32 __1__state; // 0x18
		::System::Single _tStart_5__2; // 0x1C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_MOVENEXT_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_384* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::Class_0_16E4307DCC419505_384*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___WAITLINEUPREADY_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
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
