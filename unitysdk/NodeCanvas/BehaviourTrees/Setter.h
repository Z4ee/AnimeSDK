#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTDecorator.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_BEHAVIOURTREES_SETTER_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1DFDCC10)
#define NODECANVAS_BEHAVIOURTREES_SETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFDCDE0)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Setter_TypeDefinitionIndex = 29851;

	class Setter : public ::NodeCanvas::BehaviourTrees::BTDecorator
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* newAgent; // 0x78
		::System::Boolean revertToOriginal; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_SETTER__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_SETTER_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}
	};
}
