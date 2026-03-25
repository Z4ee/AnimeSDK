#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_260;
namespace RPG::Client { class TeamManager; }
namespace RPG::Client { class TeamManager___c__DisplayClass21_0; }
namespace System { class Action; }

#define RPG_CLIENT_TEAMMANAGER___CREATEMEMBERENTITY_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA576E60)
#define RPG_CLIENT_TEAMMANAGER___CREATEMEMBERENTITY_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA576FF0)
#define RPG_CLIENT_TEAMMANAGER___CREATEMEMBERENTITY_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA577050)
#define RPG_CLIENT_TEAMMANAGER___CREATEMEMBERENTITY_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA577000)
#define RPG_CLIENT_TEAMMANAGER___CREATEMEMBERENTITY_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA576E50)
#define RPG_CLIENT_TEAMMANAGER___CREATEMEMBERENTITY_D__21__CTOR_OFFSET UNITYSDK_OFFSET(0xA56D190)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamManager___CreateMemberEntity_d__21_TypeDefinitionIndex = 49252;

	class TeamManager___CreateMemberEntity_d__21 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_260* __2__current; // 0x10
		::System::Action* onAsyncLoadFinish; // 0x18
		::RPG::Client::TeamManager___c__DisplayClass21_0* __8__1; // 0x20
		::RPG::Client::TeamManager* __4__this; // 0x28
		::System::Boolean bAsyncLoad; // 0x30
		::System::Int32 __1__state; // 0x34
		::System::Int32 memberDataIdx; // 0x38

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___CREATEMEMBERENTITY_D__21__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___CREATEMEMBERENTITY_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___CREATEMEMBERENTITY_D__21_MOVENEXT_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_260* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::Class_0_16E4307DCC419505_260*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___CREATEMEMBERENTITY_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___CREATEMEMBERENTITY_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___CREATEMEMBERENTITY_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
