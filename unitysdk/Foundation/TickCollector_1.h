#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/TickCollector_1_FunctionListHeader.h"
#include "unitysdk/Foundation/TickCollector_1_Node.h"
#include "unitysdk/Foundation/TickCollector_1_TimeHeaderLink.h"
#include "unitysdk/Foundation/TickCollector_1_TimeListHeader.h"
#include "unitysdk/Foundation/TickTime.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ITickFunctionCollector; }
namespace Foundation { template <typename T> class ITickSequencer_1; }
namespace Foundation { template <typename T> class TickFunction_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation
{
	inline static constexpr unsigned int TickCollector_1_TypeDefinitionIndex = 8519;

	template <typename TTickingGroup>
	class TickCollector_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::TickCollector_1_Node<TTickingGroup>>* _nodes; // 0x0
		::System::Collections::Generic::List_1<::Foundation::TickCollector_1_TimeListHeader<TTickingGroup>>* _timeList; // 0x0
		::System::Collections::Generic::List_1<::Foundation::TickCollector_1_FunctionListHeader<TTickingGroup>>* _functionList; // 0x0
		::System::Collections::Generic::Dictionary_2<::Foundation::TickFunction_1<TTickingGroup>*, ::System::Int32>* _functionListLookUpTable; // 0x0
		::System::Int32 _lastFunctionListIndex; // 0x0
		::Foundation::TickCollector_1_TimeHeaderLink<TTickingGroup> _lastTimeList; // 0x0
		::Foundation::TickCollector_1_TimeHeaderLink<TTickingGroup> _firstTimeHeader; // 0x0
	};
}
