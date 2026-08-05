#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/ValueOutput.h"

namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { class ValueHandlerObject; }
namespace FlowCanvas { template <typename T> class ValueHandler_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

namespace FlowCanvas
{
	inline static constexpr unsigned int ValueOutput_1_TypeDefinitionIndex = 30237;

	template <typename T>
	class ValueOutput_1 : public ::FlowCanvas::ValueOutput
	{
	public:
		::FlowCanvas::ValueHandler_1<T>* _getter_k__BackingField; // 0x0
	};
}
