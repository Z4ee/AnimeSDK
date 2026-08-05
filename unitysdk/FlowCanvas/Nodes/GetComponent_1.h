#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace UnityEngine { class GameObject; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int GetComponent_1_TypeDefinitionIndex = 30552;

	template <typename T>
	class GetComponent_1 : public ::FlowCanvas::Nodes::PureFunctionNode_2<T, ::UnityEngine::GameObject*>
	{
	public:
		T _component; // 0x0
	};
}
