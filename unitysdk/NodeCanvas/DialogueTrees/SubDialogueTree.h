#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/DialogueTrees/DTNodeNested_1.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::DialogueTrees { class DialogueTree; }
namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Component; }

#define NODECANVAS_DIALOGUETREES_SUBDIALOGUETREE_GET_MAXOUTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1C62C2B0)
#define NODECANVAS_DIALOGUETREES_SUBDIALOGUETREE_GET_SUBGRAPHPARAMETER_OFFSET UNITYSDK_OFFSET(0x1C62C380)
#define NODECANVAS_DIALOGUETREES_SUBDIALOGUETREE_GET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1C62C2C0)
#define NODECANVAS_DIALOGUETREES_SUBDIALOGUETREE_NODECANVAS_FRAMEWORK_IUPDATABLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C62E2B0)
#define NODECANVAS_DIALOGUETREES_SUBDIALOGUETREE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1C62C390)
#define NODECANVAS_DIALOGUETREES_SUBDIALOGUETREE_ONSUBDIALOGUEFINISH_OFFSET UNITYSDK_OFFSET(0x1C62DD20)
#define NODECANVAS_DIALOGUETREES_SUBDIALOGUETREE_SET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1C62C320)
#define NODECANVAS_DIALOGUETREES_SUBDIALOGUETREE_TRYWRITEMAPPEDACTORPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1C62D5B0)
#define NODECANVAS_DIALOGUETREES_SUBDIALOGUETREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C62E4B0)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int SubDialogueTree_TypeDefinitionIndex = 29691;

	class SubDialogueTree : public ::NodeCanvas::DialogueTrees::DTNodeNested_1<::NodeCanvas::DialogueTrees::DialogueTree*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::NodeCanvas::DialogueTrees::DialogueTree*>* _subTree; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _actorParametersMap; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_SUBDIALOGUETREE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_maxOutConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_SUBDIALOGUETREE_GET_MAXOUTCONNECTIONS_OFFSET))(this);
		}

		::NodeCanvas::DialogueTrees::DialogueTree* get_subGraph()
		{
			return ((::NodeCanvas::DialogueTrees::DialogueTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_SUBDIALOGUETREE_GET_SUBGRAPH_OFFSET))(this);
		}

		::System::Void set_subGraph(::NodeCanvas::DialogueTrees::DialogueTree* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::DialogueTrees::DialogueTree*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_SUBDIALOGUETREE_SET_SUBGRAPH_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::BBParameter* get_subGraphParameter()
		{
			return ((::NodeCanvas::Framework::BBParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_SUBDIALOGUETREE_GET_SUBGRAPHPARAMETER_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* bb)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_SUBDIALOGUETREE_ONEXECUTE_OFFSET))(this, agent, bb);
		}

		::System::Void OnSubDialogueFinish(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_SUBDIALOGUETREE_ONSUBDIALOGUEFINISH_OFFSET))(this, success);
		}

		::System::Void NodeCanvas_Framework_IUpdatable_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_SUBDIALOGUETREE_NODECANVAS_FRAMEWORK_IUPDATABLE_UPDATE_OFFSET))(this);
		}

		::System::Void TryWriteMappedActorParameters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_SUBDIALOGUETREE_TRYWRITEMAPPEDACTORPARAMETERS_OFFSET))(this);
		}
	};
}
