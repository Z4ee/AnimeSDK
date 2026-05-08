#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTDecorator.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/Guard_GuardMode.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_BEHAVIOURTREES_GUARD_AGENTGUARDS_OFFSET UNITYSDK_OFFSET(0x1A8FED60)
#define NODECANVAS_BEHAVIOURTREES_GUARD_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A8FF6C0)
#define NODECANVAS_BEHAVIOURTREES_GUARD_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A8FEE00)
#define NODECANVAS_BEHAVIOURTREES_GUARD_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A8FF1D0)
#define NODECANVAS_BEHAVIOURTREES_GUARD_ONRESET_OFFSET UNITYSDK_OFFSET(0x1A8FFBB0)
#define NODECANVAS_BEHAVIOURTREES_GUARD_SETGUARDS_OFFSET UNITYSDK_OFFSET(0x1A8FEE20)
#define NODECANVAS_BEHAVIOURTREES_GUARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8FFBD0)
#define NODECANVAS_BEHAVIOURTREES_GUARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8FFBC0)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Guard_TypeDefinitionIndex = 27816;

	class Guard : public ::NodeCanvas::BehaviourTrees::BTDecorator
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::NodeCanvas::BehaviourTrees::Guard*>*>** StaticGet_guards()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::NodeCanvas::BehaviourTrees::Guard*>*>**)Il2CppClass::FromTypeDefinitionIndex(Guard_TypeDefinitionIndex)->GetStaticField(0x20620);
		}
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* token; // 0x78
		::NodeCanvas::BehaviourTrees::Guard_GuardMode ifGuarded; // 0x80
		::System::Boolean isGuarding; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_GUARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_GUARD__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::NodeCanvas::BehaviourTrees::Guard*>* AgentGuards(::UnityEngine::Component* agent)
		{
			return ((::System::Collections::Generic::List_1<::NodeCanvas::BehaviourTrees::Guard*>*(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_GUARD_AGENTGUARDS_OFFSET))(agent);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_GUARD_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_GUARD_ONGRAPHSTOPED_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_GUARD_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_GUARD_ONRESET_OFFSET))(this);
		}

		::System::Void SetGuards(::UnityEngine::Component* guardAgent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_GUARD_SETGUARDS_OFFSET))(this, guardAgent);
		}
	};
}
