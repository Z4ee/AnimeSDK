#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/LatentActionNode_4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine::AI { class NavMeshAgent; }

#define FLOWCANVAS_NODES_MOVETO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DFC9F70)
#define FLOWCANVAS_NODES_MOVETO_ONBREAK_OFFSET UNITYSDK_OFFSET(0x1DFCA000)
#define FLOWCANVAS_NODES_MOVETO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFCA020)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int MoveTo_TypeDefinitionIndex = 30211;

	class MoveTo : public ::FlowCanvas::Nodes::LatentActionNode_4<::UnityEngine::AI::NavMeshAgent*, ::UnityEngine::Vector3, ::System::Single, ::System::Single>
	{
	public:
		::UnityEngine::AI::NavMeshAgent* agent; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOVETO__CTOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Invoke(::UnityEngine::AI::NavMeshAgent* agent, ::UnityEngine::Vector3 destination, ::System::Single speed, ::System::Single stoppingDistance)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::AI::NavMeshAgent*, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOVETO_INVOKE_OFFSET))(this, agent, destination, speed, stoppingDistance);
		}

		::System::Void OnBreak()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOVETO_ONBREAK_OFFSET))(this);
		}
	};
}
