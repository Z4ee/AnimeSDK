#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AgentLinkMover;
namespace UnityEngine::AI { class NavMeshAgent; }

#define AGENTLINKMOVER__CURVE_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13348CD0)
#define AGENTLINKMOVER__CURVE_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13348F50)
#define AGENTLINKMOVER__CURVE_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13348FB0)
#define AGENTLINKMOVER__CURVE_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x13348F60)
#define AGENTLINKMOVER__CURVE_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13348CC0)
#define AGENTLINKMOVER__CURVE_D__5__CTOR_OFFSET UNITYSDK_OFFSET(0x13348CB0)

inline static constexpr unsigned int AgentLinkMover__Curve_d__5_TypeDefinitionIndex = 49402;

class AgentLinkMover__Curve_d__5 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::AgentLinkMover* __4__this; // 0x18
	::UnityEngine::AI::NavMeshAgent* agent; // 0x20
	::System::Int32 __1__state; // 0x28
	::System::Single _normalizedTime_5__4; // 0x2C
	::UnityEngine::Vector3 _endPos_5__3; // 0x30
	::System::Single duration; // 0x3C
	::UnityEngine::Vector3 _startPos_5__2; // 0x40

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__CURVE_D__5__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__CURVE_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__CURVE_D__5_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__CURVE_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__CURVE_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__CURVE_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
