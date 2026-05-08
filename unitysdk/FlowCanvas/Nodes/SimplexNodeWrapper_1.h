#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/SimplexNodeWrapper.h"

namespace NodeCanvas::Framework { class Graph; }
namespace System { class String; }
namespace System { class Type; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SimplexNodeWrapper_1_TypeDefinitionIndex = 27827;

	template <typename T>
	class SimplexNodeWrapper_1 : public ::FlowCanvas::Nodes::SimplexNodeWrapper
	{
	public:
		T _simplexNode; // 0x0
	};
}
