#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTComposite.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class Connection; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_PRIORITYSELECTOR_ONCHILDCONNECTED_OFFSET UNITYSDK_OFFSET(0x1B45A260)
#define NODECANVAS_BEHAVIOURTREES_PRIORITYSELECTOR_ONCHILDDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1B45A4B0)
#define NODECANVAS_BEHAVIOURTREES_PRIORITYSELECTOR_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1B45A530)
#define NODECANVAS_BEHAVIOURTREES_PRIORITYSELECTOR_ONRESET_OFFSET UNITYSDK_OFFSET(0x1B45A710)
#define NODECANVAS_BEHAVIOURTREES_PRIORITYSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B45A720)
#define NODECANVAS_BEHAVIOURTREES_PRIORITYSELECTOR__ONEXECUTE_B__5_0_OFFSET UNITYSDK_OFFSET(0x1B45A730)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int PrioritySelector_TypeDefinitionIndex = 27498;

	class PrioritySelector : public ::NodeCanvas::BehaviourTrees::BTComposite
	{
	public:
		::Il2CppArray<::NodeCanvas::Framework::Connection*>* orderedConnections; // 0x78
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::BBParameter_1<::System::Single>*>* priorities; // 0x80
		::System::Int32 current; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_PRIORITYSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Void OnChildConnected(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_PRIORITYSELECTOR_ONCHILDCONNECTED_OFFSET))(this, index);
		}

		::System::Void OnChildDisconnected(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_PRIORITYSELECTOR_ONCHILDDISCONNECTED_OFFSET))(this, index);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_PRIORITYSELECTOR_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_PRIORITYSELECTOR_ONRESET_OFFSET))(this);
		}

		::System::Single _OnExecute_b__5_0(::NodeCanvas::Framework::Connection* c)
		{
			return ((::System::Single(*)(::PVOID, ::NodeCanvas::Framework::Connection*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_PRIORITYSELECTOR__ONEXECUTE_B__5_0_OFFSET))(this, c);
		}
	};
}
