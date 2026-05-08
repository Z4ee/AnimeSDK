#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace NodeCanvas::Framework { class Blackboard; }
namespace System { class String; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int GetOtherVariable_1___c__DisplayClass2_0_TypeDefinitionIndex = 27183;

	template <typename T>
	class GetOtherVariable_1___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::FlowCanvas::ValueInput_1<::NodeCanvas::Framework::Blackboard*>* bb; // 0x0
		::FlowCanvas::ValueInput_1<::System::String*>* varName; // 0x0
	};
}
