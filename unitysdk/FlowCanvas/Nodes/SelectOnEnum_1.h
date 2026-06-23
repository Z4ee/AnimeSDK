#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class Port; }
namespace ParadoxNotion::Serialization { class SerializedTypeInfo; }
namespace System { class Type; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SelectOnEnum_1_TypeDefinitionIndex = 30074;

	template <typename T>
	class SelectOnEnum_1 : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::ParadoxNotion::Serialization::SerializedTypeInfo* _type; // 0x0
	};
}
