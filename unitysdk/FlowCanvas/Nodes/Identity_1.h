#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace System { class String; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Identity_1_TypeDefinitionIndex = 28080;

	template <typename T>
	class Identity_1 : public ::FlowCanvas::Nodes::PureFunctionNode_2<T, T>
	{
	public:
	};
}
