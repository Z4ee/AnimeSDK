#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CodeEventBase.h"

namespace FlowCanvas { class FlowOutput; }
namespace System { template <typename T> class Action_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CodeEvent_1_TypeDefinitionIndex = 28084;

	template <typename T>
	class CodeEvent_1 : public ::FlowCanvas::Nodes::CodeEventBase
	{
	public:
		::FlowCanvas::FlowOutput* o; // 0x0
		::System::Action_1<T>* pointer; // 0x0
		T eventValue; // 0x0
	};
}
