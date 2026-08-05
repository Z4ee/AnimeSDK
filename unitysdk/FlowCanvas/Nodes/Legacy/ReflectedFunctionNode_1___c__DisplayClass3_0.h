#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedMethodRegistrationOptions.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes::Legacy { template <typename T> class ReflectedFunctionNode_1; }

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedFunctionNode_1___c__DisplayClass3_0_TypeDefinitionIndex = 31432;

	template <typename TResult>
	class ReflectedFunctionNode_1___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::Legacy::ReflectedFunctionNode_1<TResult>* __4__this; // 0x0
		::FlowCanvas::Nodes::ReflectedMethodRegistrationOptions options; // 0x0
	};
}
