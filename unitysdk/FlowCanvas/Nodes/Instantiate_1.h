#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_5.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Instantiate_1_TypeDefinitionIndex = 27475;

	template <typename T>
	class Instantiate_1 : public ::FlowCanvas::Nodes::CallableFunctionNode_5<T, T, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*>
	{
	public:
	};
}
