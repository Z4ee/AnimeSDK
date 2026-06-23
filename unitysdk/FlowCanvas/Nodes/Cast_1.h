#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace System { class Object; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Cast_1_TypeDefinitionIndex = 29980;

	template <typename T>
	class Cast_1 : public ::FlowCanvas::Nodes::PureFunctionNode_2<T, ::System::Object*>
	{
	public:
	};
}
