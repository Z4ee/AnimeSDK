#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowBreak; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { template <typename T> class ForEach_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ForEach_1___c__DisplayClass3_0_TypeDefinitionIndex = 31089;

	template <typename T>
	class ForEach_1___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::ForEach_1<T>* __4__this; // 0x0
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::IEnumerable_1<T>*>* list; // 0x0
		::FlowCanvas::FlowOutput* fFinish; // 0x0
		::FlowCanvas::FlowOutput* fCurrent; // 0x0
		::FlowCanvas::FlowBreak* __9__4; // 0x0
	};
}
