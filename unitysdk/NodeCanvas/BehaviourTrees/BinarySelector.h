#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTNode.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"
#include "unitysdk/ParadoxNotion/Alignment2x2.h"

namespace NodeCanvas::Framework { class ConditionTask; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Task; }
namespace System { class String; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_BINARYSELECTOR_GET_COMMENTSALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1EBBA630)
#define NODECANVAS_BEHAVIOURTREES_BINARYSELECTOR_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1EBBA6F0)
#define NODECANVAS_BEHAVIOURTREES_BINARYSELECTOR_GET_MAXOUTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1EBBA620)
#define NODECANVAS_BEHAVIOURTREES_BINARYSELECTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1EBBA640)
#define NODECANVAS_BEHAVIOURTREES_BINARYSELECTOR_GET_TASK_OFFSET UNITYSDK_OFFSET(0x1EBBA670)
#define NODECANVAS_BEHAVIOURTREES_BINARYSELECTOR_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EBBA710)
#define NODECANVAS_BEHAVIOURTREES_BINARYSELECTOR_ONRESET_OFFSET UNITYSDK_OFFSET(0x1EBBA990)
#define NODECANVAS_BEHAVIOURTREES_BINARYSELECTOR_SET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1EBBA700)
#define NODECANVAS_BEHAVIOURTREES_BINARYSELECTOR_SET_TASK_OFFSET UNITYSDK_OFFSET(0x1EBBA680)
#define NODECANVAS_BEHAVIOURTREES_BINARYSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBBA9D0)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int BinarySelector_TypeDefinitionIndex = 31193;

	class BinarySelector : public ::NodeCanvas::BehaviourTrees::BTNode
	{
	public:
		::NodeCanvas::Framework::ConditionTask* _condition; // 0x78
		::System::Int32 succeedIndex; // 0x80
		::System::Boolean dynamic; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BINARYSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Int32 get_maxOutConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BINARYSELECTOR_GET_MAXOUTCONNECTIONS_OFFSET))(this);
		}

		::ParadoxNotion::Alignment2x2 get_commentsAlignment()
		{
			return ((::ParadoxNotion::Alignment2x2(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BINARYSELECTOR_GET_COMMENTSALIGNMENT_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BINARYSELECTOR_GET_NAME_OFFSET))(this);
		}

		::NodeCanvas::Framework::Task* get_task()
		{
			return ((::NodeCanvas::Framework::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BINARYSELECTOR_GET_TASK_OFFSET))(this);
		}

		::System::Void set_task(::NodeCanvas::Framework::Task* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Task*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BINARYSELECTOR_SET_TASK_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::ConditionTask* get_condition()
		{
			return ((::NodeCanvas::Framework::ConditionTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BINARYSELECTOR_GET_CONDITION_OFFSET))(this);
		}

		::System::Void set_condition(::NodeCanvas::Framework::ConditionTask* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ConditionTask*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BINARYSELECTOR_SET_CONDITION_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BINARYSELECTOR_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BINARYSELECTOR_ONRESET_OFFSET))(this);
		}
	};
}
