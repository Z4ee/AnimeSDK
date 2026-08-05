#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Buffer_1_TypeDefinitionIndex = 30119;

	template <typename T>
	class Buffer_1 : public ::FlowCanvas::Nodes::PureFunctionNode_3<T, T, ::System::Int32>
	{
	public:
		::System::Int32 lastFrame; // 0x0
		::System::Collections::Generic::Queue_1<T>* q; // 0x0
	};
}
