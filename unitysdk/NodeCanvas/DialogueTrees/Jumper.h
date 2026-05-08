#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/DialogueTrees/DTNode.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class INodeReference; }
namespace NodeCanvas::Framework { template <typename T> class NodeReference_1; }
namespace UnityEngine { class Component; }

#define NODECANVAS_DIALOGUETREES_JUMPER_GET_MAXOUTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1AF30700)
#define NODECANVAS_DIALOGUETREES_JUMPER_GET_REQUIREACTORSELECTION_OFFSET UNITYSDK_OFFSET(0x1AF30710)
#define NODECANVAS_DIALOGUETREES_JUMPER_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1AF306A0)
#define NODECANVAS_DIALOGUETREES_JUMPER_NODECANVAS_FRAMEWORK_IHAVENODEREFERENCE_GET_TARGETREFERENCE_OFFSET UNITYSDK_OFFSET(0x1AF30690)
#define NODECANVAS_DIALOGUETREES_JUMPER_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1AF30720)
#define NODECANVAS_DIALOGUETREES_JUMPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF308B0)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int Jumper_TypeDefinitionIndex = 27893;

	class Jumper : public ::NodeCanvas::DialogueTrees::DTNode
	{
	public:
		::NodeCanvas::Framework::NodeReference_1<::NodeCanvas::DialogueTrees::DTNode*>* _targetNode; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_JUMPER__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::INodeReference* NodeCanvas_Framework_IHaveNodeReference_get_targetReference()
		{
			return ((::NodeCanvas::Framework::INodeReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_JUMPER_NODECANVAS_FRAMEWORK_IHAVENODEREFERENCE_GET_TARGETREFERENCE_OFFSET))(this);
		}

		::NodeCanvas::DialogueTrees::DTNode* get_target()
		{
			return ((::NodeCanvas::DialogueTrees::DTNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_JUMPER_GET_TARGET_OFFSET))(this);
		}

		::System::Int32 get_maxOutConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_JUMPER_GET_MAXOUTCONNECTIONS_OFFSET))(this);
		}

		::System::Boolean get_requireActorSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_JUMPER_GET_REQUIREACTORSELECTION_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* bb)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_JUMPER_ONEXECUTE_OFFSET))(this, agent, bb);
		}
	};
}
