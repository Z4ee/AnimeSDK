#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace System { class IConvertible; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ConvertTo_1_TypeDefinitionIndex = 26526;

	template <typename T>
	class ConvertTo_1 : public ::FlowCanvas::Nodes::PureFunctionNode_2<T, ::System::IConvertible*>
	{
	public:
	};
}
