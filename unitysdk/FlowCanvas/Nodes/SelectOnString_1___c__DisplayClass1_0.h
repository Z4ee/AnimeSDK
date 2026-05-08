#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { template <typename T> class SelectOnString_1; }
namespace System { class String; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SelectOnString_1___c__DisplayClass1_0_TypeDefinitionIndex = 28185;

	template <typename T>
	class SelectOnString_1___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* selector; // 0x0
		::FlowCanvas::Nodes::SelectOnString_1<T>* __4__this; // 0x0
		::Il2CppArray<::FlowCanvas::ValueInput_1<T>*>* cases; // 0x0
		::FlowCanvas::ValueInput_1<T>* defaultCase; // 0x0
	};
}
