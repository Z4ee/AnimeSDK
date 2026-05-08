#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

namespace UnityEngine { class GameObject; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int AddComponent_1_TypeDefinitionIndex = 26921;

	template <typename T>
	class AddComponent_1 : public ::FlowCanvas::Nodes::CallableFunctionNode_3<T, ::UnityEngine::GameObject*, ::System::Boolean>
	{
	public:
	};
}
