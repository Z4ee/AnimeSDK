#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { template <typename T> class SelectOnEnum_1___c__DisplayClass4_0; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SelectOnEnum_1___c__DisplayClass4_1_TypeDefinitionIndex = 30075;

	template <typename T>
	class SelectOnEnum_1___c__DisplayClass4_1 : public ::System::Object
	{
	public:
		::Il2CppArray<::FlowCanvas::ValueInput_1<T>*>* cases; // 0x0
		::FlowCanvas::Nodes::SelectOnEnum_1___c__DisplayClass4_0<T>* CS___8__locals1; // 0x0
	};
}
