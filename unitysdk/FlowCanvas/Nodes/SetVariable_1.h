#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ParameterVariableNode.h"
#include "unitysdk/ParadoxNotion/OperationMethod.h"

namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SetVariable_1_TypeDefinitionIndex = 26513;

	template <typename T>
	class SetVariable_1 : public ::FlowCanvas::Nodes::ParameterVariableNode
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<T>* targetVariable; // 0x0
		::ParadoxNotion::OperationMethod operation; // 0x0
		::System::Boolean perSecond; // 0x0
	};
}
