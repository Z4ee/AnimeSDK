#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class ITickService_1; }

namespace Foundation
{
	inline static constexpr unsigned int InternalTickData_1_TypeDefinitionIndex = 8538;

	template <typename TTickingGroup>
	class InternalTickData_1 : public ::System::Object
	{
	public:
		::System::Boolean IsRegistered; // 0x0
		::System::Int32 TickGroup; // 0x0
		::System::Double LastTickTime; // 0x0
		::Foundation::ITickService_1<TTickingGroup>* Service; // 0x0
		::System::Int32 TickOrder; // 0x0
		::System::Int32 ScheduleIndex; // 0x0
	};
}
