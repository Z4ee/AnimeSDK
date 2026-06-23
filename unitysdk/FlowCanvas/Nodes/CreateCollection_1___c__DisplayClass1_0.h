#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CreateCollection_1___c__DisplayClass1_0_TypeDefinitionIndex = 30902;

	template <typename T>
	class CreateCollection_1___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FlowCanvas::ValueInput_1<T>*>* ins; // 0x0
	};
}
