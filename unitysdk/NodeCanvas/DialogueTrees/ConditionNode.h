#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/DialogueTrees/DTNode.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class ConditionTask; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Task; }
namespace UnityEngine { class Component; }

#define NODECANVAS_DIALOGUETREES_CONDITIONNODE_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1EF90D60)
#define NODECANVAS_DIALOGUETREES_CONDITIONNODE_GET_MAXOUTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1EF90E00)
#define NODECANVAS_DIALOGUETREES_CONDITIONNODE_GET_REQUIREACTORSELECTION_OFFSET UNITYSDK_OFFSET(0x1EF90E10)
#define NODECANVAS_DIALOGUETREES_CONDITIONNODE_GET_TASK_OFFSET UNITYSDK_OFFSET(0x1EF90D80)
#define NODECANVAS_DIALOGUETREES_CONDITIONNODE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EF90E20)
#define NODECANVAS_DIALOGUETREES_CONDITIONNODE_SET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1EF90D70)
#define NODECANVAS_DIALOGUETREES_CONDITIONNODE_SET_TASK_OFFSET UNITYSDK_OFFSET(0x1EF90D90)
#define NODECANVAS_DIALOGUETREES_CONDITIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF90FF0)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int ConditionNode_TypeDefinitionIndex = 30622;

	class ConditionNode : public ::NodeCanvas::DialogueTrees::DTNode
	{
	public:
		::NodeCanvas::Framework::ConditionTask* _condition; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_CONDITIONNODE__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::ConditionTask* get_condition()
		{
			return ((::NodeCanvas::Framework::ConditionTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_CONDITIONNODE_GET_CONDITION_OFFSET))(this);
		}

		::System::Void set_condition(::NodeCanvas::Framework::ConditionTask* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ConditionTask*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_CONDITIONNODE_SET_CONDITION_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Task* get_task()
		{
			return ((::NodeCanvas::Framework::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_CONDITIONNODE_GET_TASK_OFFSET))(this);
		}

		::System::Void set_task(::NodeCanvas::Framework::Task* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Task*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_CONDITIONNODE_SET_TASK_OFFSET))(this, value);
		}

		::System::Int32 get_maxOutConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_CONDITIONNODE_GET_MAXOUTCONNECTIONS_OFFSET))(this);
		}

		::System::Boolean get_requireActorSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_CONDITIONNODE_GET_REQUIREACTORSELECTION_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* bb)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_CONDITIONNODE_ONEXECUTE_OFFSET))(this, agent, bb);
		}
	};
}
