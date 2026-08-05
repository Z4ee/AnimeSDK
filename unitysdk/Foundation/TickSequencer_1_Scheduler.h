#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/TickSequencer_1_Scheduler_Header.h"
#include "unitysdk/Foundation/TickSequencer_1_Scheduler_Node.h"
#include "unitysdk/Foundation/TickSequencer_1_Scheduler___c__DisplayClass14_0.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class TickFunction_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace Foundation
{
	inline static constexpr unsigned int TickSequencer_1_Scheduler_TypeDefinitionIndex = 8724;

	template <typename TTickingGroup>
	class TickSequencer_1_Scheduler : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::TickFunction_1<TTickingGroup>*>* _functionList; // 0x0
		::System::Collections::Generic::List_1<::Foundation::TickSequencer_1_Scheduler_Header<TTickingGroup>>* _headers; // 0x0
		::System::Collections::Generic::List_1<::Foundation::TickSequencer_1_Scheduler_Node<TTickingGroup>>* _nodes; // 0x0
		::System::Collections::Generic::Stack_1<::System::Int32>* _stack; // 0x0
	};
}
