#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace System { class String; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SelectOnTag_1_TypeDefinitionIndex = 30955;

	template <typename T>
	class SelectOnTag_1 : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::Il2CppArray<::System::String*>* _tagNames; // 0x0
	};
}
