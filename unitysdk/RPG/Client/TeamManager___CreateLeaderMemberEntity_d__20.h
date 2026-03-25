#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_260;
namespace RPG::Client { class TeamManager; }
namespace System { class Action; }

#define RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA576B70)
#define RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA576DE0)
#define RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA576E40)
#define RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA576DF0)
#define RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA576B60)
#define RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20__CTOR_OFFSET UNITYSDK_OFFSET(0xA56D180)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamManager___CreateLeaderMemberEntity_d__20_TypeDefinitionIndex = 49251;

	class TeamManager___CreateLeaderMemberEntity_d__20 : public ::System::Object
	{
	public:
		::System::Action* onAsyncLoadFinish; // 0x10
		::RPG::Client::TeamManager* __4__this; // 0x18
		::Class_0_16E4307DCC419505_260* __2__current; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Boolean bAsyncLoad; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_MOVENEXT_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_260* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::Class_0_16E4307DCC419505_260*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___CREATELEADERMEMBERENTITY_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
