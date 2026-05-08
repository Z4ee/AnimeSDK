#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/DialogueTrees/DTNode.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::DialogueTrees { class ProbabilitySelector_Option; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }

#define NODECANVAS_DIALOGUETREES_PROBABILITYSELECTOR_GETTOTAL_OFFSET UNITYSDK_OFFSET(0x1AFCEF40)
#define NODECANVAS_DIALOGUETREES_PROBABILITYSELECTOR_GET_MAXOUTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1AFCEA40)
#define NODECANVAS_DIALOGUETREES_PROBABILITYSELECTOR_ONCHILDCONNECTED_OFFSET UNITYSDK_OFFSET(0x1AFCEA50)
#define NODECANVAS_DIALOGUETREES_PROBABILITYSELECTOR_ONCHILDDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1AFCEB10)
#define NODECANVAS_DIALOGUETREES_PROBABILITYSELECTOR_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1AFCEB90)
#define NODECANVAS_DIALOGUETREES_PROBABILITYSELECTOR_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AFCF030)
#define NODECANVAS_DIALOGUETREES_PROBABILITYSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFCF040)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int ProbabilitySelector_TypeDefinitionIndex = 28110;

	class ProbabilitySelector : public ::NodeCanvas::DialogueTrees::DTNode
	{
	public:
		::System::Collections::Generic::List_1<::NodeCanvas::DialogueTrees::ProbabilitySelector_Option*>* childOptions; // 0x88
		::System::Collections::Generic::List_1<::System::Int32>* successIndeces; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_PROBABILITYSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Int32 get_maxOutConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_PROBABILITYSELECTOR_GET_MAXOUTCONNECTIONS_OFFSET))(this);
		}

		::System::Void OnChildConnected(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_PROBABILITYSELECTOR_ONCHILDCONNECTED_OFFSET))(this, index);
		}

		::System::Void OnChildDisconnected(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_PROBABILITYSELECTOR_ONCHILDDISCONNECTED_OFFSET))(this, index);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_PROBABILITYSELECTOR_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Single GetTotal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_PROBABILITYSELECTOR_GETTOTAL_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_PROBABILITYSELECTOR_ONRESET_OFFSET))(this);
		}
	};
}
