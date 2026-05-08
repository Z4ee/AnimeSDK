#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"
#include "unitysdk/UnityEngine/AI/NavMeshHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }

#define NODECANVAS_TASKS_ACTIONS_FINDCLOSESTEDGE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A2A6ED0)
#define NODECANVAS_TASKS_ACTIONS_FINDCLOSESTEDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2A6FA0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int FindClosestEdge_TypeDefinitionIndex = 26756;

	class FindClosestEdge : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* targetPosition; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* saveFoundPosition; // 0x68
		::UnityEngine::AI::NavMeshHit hit; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FINDCLOSESTEDGE__CTOR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FINDCLOSESTEDGE_ONEXECUTE_OFFSET))(this);
		}
	};
}
