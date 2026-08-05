#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AgentLinkMover;
namespace UnityEngine::AI { class NavMeshAgent; }

#define AGENTLINKMOVER__START_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x124DCE10)
#define AGENTLINKMOVER__START_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x124DD160)
#define AGENTLINKMOVER__START_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x124DD1C0)
#define AGENTLINKMOVER__START_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x124DD170)
#define AGENTLINKMOVER__START_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x124DCE00)
#define AGENTLINKMOVER__START_D__2__CTOR_OFFSET UNITYSDK_OFFSET(0x124DCDF0)

inline static constexpr unsigned int AgentLinkMover__Start_d__2_TypeDefinitionIndex = 79923;

class AgentLinkMover__Start_d__2 : public ::System::Object
{
public:
	::AgentLinkMover* __4__this; // 0x10
	::UnityEngine::AI::NavMeshAgent* _agent_5__2; // 0x18
	::System::Object* __2__current; // 0x20
	::System::Int32 __1__state; // 0x28

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__START_D__2__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__START_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__START_D__2_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__START_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__START_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__START_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
