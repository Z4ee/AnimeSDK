#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"
#include "unitysdk/FlowCanvas/Nodes/RouterEventNode_1_TargetMode.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int RouterEventNode_1_TypeDefinitionIndex = 26519;

	template <typename T>
	class RouterEventNode_1 : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::FlowCanvas::Nodes::RouterEventNode_1_TargetMode<T> targetMode; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T>* target; // 0x0
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<T>*>* targets; // 0x0
	};
}
