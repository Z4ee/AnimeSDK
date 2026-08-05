#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::AI { class NavMeshAgent; }

#define AGENTLINKMOVER__NORMALSPEED_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x141B9860)
#define AGENTLINKMOVER__NORMALSPEED_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x141B9B50)
#define AGENTLINKMOVER__NORMALSPEED_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x141B9BB0)
#define AGENTLINKMOVER__NORMALSPEED_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x141B9B60)
#define AGENTLINKMOVER__NORMALSPEED_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x141B9850)
#define AGENTLINKMOVER__NORMALSPEED_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0x141B9840)

inline static constexpr unsigned int AgentLinkMover__NormalSpeed_d__3_TypeDefinitionIndex = 79924;

class AgentLinkMover__NormalSpeed_d__3 : public ::System::Object
{
public:
	::UnityEngine::AI::NavMeshAgent* agent; // 0x10
	::System::Object* __2__current; // 0x18
	::UnityEngine::Vector3 _endPos_5__2; // 0x20
	::System::Int32 __1__state; // 0x2C

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__NORMALSPEED_D__3__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__NORMALSPEED_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__NORMALSPEED_D__3_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__NORMALSPEED_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__NORMALSPEED_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__NORMALSPEED_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
