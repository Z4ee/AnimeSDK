#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDForeachNext_1_TypeDefinitionIndex = 41656;

	template <typename T>
	class LDForeachNext_1 : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		T currentObject; // 0x0
		::System::Int32 currentIndex; // 0x0
		::System::Boolean broken; // 0x0
		::System::Boolean suspend; // 0x0
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::IEnumerable_1<T>*>* enumerableInput; // 0x0
		::System::Collections::IEnumerator* enumerator; // 0x0
		::FlowCanvas::FlowOutput* fCurrent; // 0x0
		::FlowCanvas::FlowOutput* fFinish; // 0x0
	};
}
