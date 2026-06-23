#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MultiCyclicQueue_1_GroupInfo.h"
#include "unitysdk/Foundation/MultiCyclicQueue_1_ItemFlag.h"
#include "unitysdk/Foundation/MultiCyclicQueue_1_ItemInfo.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T1, typename T2> class MultiCyclicQueueIterator_2; }
namespace Foundation { template <typename T> class ExposedList_1; }
namespace Foundation { template <typename T> class MultiCyclicQueue_1; }

namespace Foundation
{
	inline static constexpr unsigned int MultiCyclicQueue_1_TypeDefinitionIndex = 8264;

	template <typename TItem>
	class MultiCyclicQueue_1 : public ::System::Object
	{
	public:
		// static const ::System::Int32 InvalidIndex = 0x7FFFFFFF; // 0x0
		// static const ::System::Int32 MaxCapacity = 0x7FFFFFFE; // 0x0
		// static const ::System::Int32 DefaultGroup = 0x0; // 0x0
		::Foundation::ExposedList_1<::Foundation::MultiCyclicQueue_1_ItemInfo<TItem>>* _Items; // 0x0
		::System::Int32 _ItemCount; // 0x0
		::Foundation::ExposedList_1<::Foundation::MultiCyclicQueue_1_GroupInfo<TItem>>* _GroupInfos; // 0x0
		::System::Int32 _GroupCount; // 0x0
		::System::Int32 _LockDepth; // 0x0
	};
}
