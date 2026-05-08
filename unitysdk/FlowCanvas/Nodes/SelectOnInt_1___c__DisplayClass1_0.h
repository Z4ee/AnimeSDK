#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SelectOnInt_1___c__DisplayClass1_0_TypeDefinitionIndex = 27520;

	template <typename T>
	class SelectOnInt_1___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* selector; // 0x0
		::Il2CppArray<::FlowCanvas::ValueInput_1<T>*>* cases; // 0x0
		::FlowCanvas::ValueInput_1<T>* defaultCase; // 0x0
	};
}
