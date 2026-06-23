#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/DialogueTrees/DTNode.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class ConditionTask; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }

#define NODECANVAS_DIALOGUETREES_MULTIPLECONDITIONNODE_GET_MAXOUTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1BC5B0B0)
#define NODECANVAS_DIALOGUETREES_MULTIPLECONDITIONNODE_ONCHILDCONNECTED_OFFSET UNITYSDK_OFFSET(0x1BC5B0C0)
#define NODECANVAS_DIALOGUETREES_MULTIPLECONDITIONNODE_ONCHILDDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1BC5B140)
#define NODECANVAS_DIALOGUETREES_MULTIPLECONDITIONNODE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1BC5B1C0)
#define NODECANVAS_DIALOGUETREES_MULTIPLECONDITIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC5B460)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int MultipleConditionNode_TypeDefinitionIndex = 29716;

	class MultipleConditionNode : public ::NodeCanvas::DialogueTrees::DTNode
	{
	public:
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::ConditionTask*>* conditions; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_MULTIPLECONDITIONNODE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_maxOutConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_MULTIPLECONDITIONNODE_GET_MAXOUTCONNECTIONS_OFFSET))(this);
		}

		::System::Void OnChildConnected(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_MULTIPLECONDITIONNODE_ONCHILDCONNECTED_OFFSET))(this, index);
		}

		::System::Void OnChildDisconnected(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_MULTIPLECONDITIONNODE_ONCHILDDISCONNECTED_OFFSET))(this, index);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* bb)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_MULTIPLECONDITIONNODE_ONEXECUTE_OFFSET))(this, agent, bb);
		}
	};
}
