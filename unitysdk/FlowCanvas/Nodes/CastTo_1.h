#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace System { class Object; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CastTo_1_TypeDefinitionIndex = 27541;

	template <typename T>
	class CastTo_1 : public ::FlowCanvas::Nodes::PureFunctionNode_2<T, ::System::Object*>
	{
	public:
	};
}
