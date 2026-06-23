#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ParameterVariableNode.h"

namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int GetVariable_1_TypeDefinitionIndex = 30297;

	template <typename T>
	class GetVariable_1 : public ::FlowCanvas::Nodes::ParameterVariableNode
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<T>* value; // 0x0
	};
}
