#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/StaticCodeEventBase.h"

namespace FlowCanvas { class FlowOutput; }
namespace System { template <typename T> class Action_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int StaticCodeEvent_1_TypeDefinitionIndex = 30514;

	template <typename T>
	class StaticCodeEvent_1 : public ::FlowCanvas::Nodes::StaticCodeEventBase
	{
	public:
		::FlowCanvas::FlowOutput* o; // 0x0
		::System::Action_1<T>* pointer; // 0x0
		T eventValue; // 0x0
	};
}
