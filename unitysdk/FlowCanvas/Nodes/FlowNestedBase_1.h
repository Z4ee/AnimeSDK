#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNodeNested_1.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Object; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FlowNestedBase_1_TypeDefinitionIndex = 30493;

	template <typename T>
	class FlowNestedBase_1 : public ::FlowCanvas::FlowNodeNested_1<T>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<T>* _subGraph; // 0x0
		::FlowCanvas::ValueInput_1<::UnityEngine::Component*>* targetAgent; // 0x0
		::FlowCanvas::FlowOutput* onStart; // 0x0
		::FlowCanvas::FlowOutput* onUpdate; // 0x0
		::FlowCanvas::FlowOutput* onFinish; // 0x0
		::System::Boolean paused; // 0x0
		::System::Boolean endResult; // 0x0
	};
}
