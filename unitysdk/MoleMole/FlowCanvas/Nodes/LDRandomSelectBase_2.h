#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/SimplexNode.h"

namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRandomSelectBase_2_TypeDefinitionIndex = 46267;

	template <typename TKey, typename TValue>
	class LDRandomSelectBase_2 : public ::FlowCanvas::Nodes::SimplexNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>* inputDataSource; // 0x0
		::FlowCanvas::ValueOutput_1<TKey>* outPut; // 0x0
	};
}
