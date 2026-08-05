#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RouterEventNode_1.h"

class Class_5_DCFF91E03A93C03C;
namespace FlowCanvas { class FlowOutput; }
namespace NodeCanvas::Framework { class GraphOwner; }
namespace ParadoxNotion { class IEventData; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardEventNode_1_TypeDefinitionIndex = 79306;

	template <typename T>
	class ChessboardEventNode_1 : public ::FlowCanvas::Nodes::RouterEventNode_1<::NodeCanvas::Framework::GraphOwner*>
	{
	public:
		T _receivedValue; // 0x0
		::FlowCanvas::FlowOutput* _onReceived; // 0x0
	};
}
