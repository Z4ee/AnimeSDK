#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTDecorator.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/Iterator_TerminationConditions.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace NodeCanvas::Framework::Internal { class BBObjectParameter; }
namespace System::Collections { class IList; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_ITERATOR_GET_LIST_OFFSET UNITYSDK_OFFSET(0x1D392A80)
#define NODECANVAS_BEHAVIOURTREES_ITERATOR_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D392AE0)
#define NODECANVAS_BEHAVIOURTREES_ITERATOR_ONRESET_OFFSET UNITYSDK_OFFSET(0x1D393280)
#define NODECANVAS_BEHAVIOURTREES_ITERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3932A0)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Iterator_TypeDefinitionIndex = 30068;

	class Iterator : public ::NodeCanvas::BehaviourTrees::BTDecorator
	{
	public:
		::NodeCanvas::Framework::Internal::BBObjectParameter* current; // 0x78
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::IList*>* targetList; // 0x80
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* storeIndex; // 0x88
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* maxIteration; // 0x90
		::System::Int32 currentIndex; // 0x98
		::NodeCanvas::BehaviourTrees::Iterator_TerminationConditions terminationCondition; // 0x9C
		::System::Boolean resetIndex; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_ITERATOR__CTOR_OFFSET))(this);
		}

		::System::Collections::IList* get_list()
		{
			return ((::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_ITERATOR_GET_LIST_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_ITERATOR_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_ITERATOR_ONRESET_OFFSET))(this);
		}
	};
}
