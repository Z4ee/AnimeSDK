#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OffMeshLinkMoveMethod.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::AI { class NavMeshAgent; }

#define AGENTLINKMOVER_CURVE_OFFSET UNITYSDK_OFFSET(0x12DFD7F0)
#define AGENTLINKMOVER_NORMALSPEED_OFFSET UNITYSDK_OFFSET(0x12DFD6C0)
#define AGENTLINKMOVER_PARABOLA_OFFSET UNITYSDK_OFFSET(0x12DFD740)
#define AGENTLINKMOVER_START_OFFSET UNITYSDK_OFFSET(0x12DFD640)
#define AGENTLINKMOVER__CTOR_OFFSET UNITYSDK_OFFSET(0x12DFD890)

inline static constexpr unsigned int AgentLinkMover_TypeDefinitionIndex = 49398;

class AgentLinkMover : public ::UnityEngine::MonoBehaviour
{
public:
	::OffMeshLinkMoveMethod m_Method; // 0x18
	::UnityEngine::AnimationCurve* m_Curve; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__CTOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Start()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER_START_OFFSET))(this);
	}

	::System::Collections::IEnumerator* NormalSpeed(::UnityEngine::AI::NavMeshAgent* agent)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::AI::NavMeshAgent*))((::PBYTE)hIl2Cpp + AGENTLINKMOVER_NORMALSPEED_OFFSET))(this, agent);
	}

	::System::Collections::IEnumerator* Parabola(::UnityEngine::AI::NavMeshAgent* agent, ::System::Single height, ::System::Single duration)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::AI::NavMeshAgent*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AGENTLINKMOVER_PARABOLA_OFFSET))(this, agent, height, duration);
	}

	::System::Collections::IEnumerator* Curve(::UnityEngine::AI::NavMeshAgent* agent, ::System::Single duration)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::AI::NavMeshAgent*, ::System::Single))((::PBYTE)hIl2Cpp + AGENTLINKMOVER_CURVE_OFFSET))(this, agent, duration);
	}
};
