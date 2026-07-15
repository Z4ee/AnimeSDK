#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MiHoYo::SDK::MTR
{
	inline static constexpr unsigned int MiHoYoMTRInterface_TaskPoolManager_1_TypeDefinitionIndex = 44908;

	template <typename Task>
	class MiHoYoMTRInterface_TaskPoolManager_1 : public ::System::Object
	{
	public:
		::System::Boolean m_bStopFlag; // 0x0
		::System::Int32 m_nRunningTaskID; // 0x0
		::System::Boolean m_bIsStartedPool; // 0x0
		::System::Collections::Generic::List_1<Task>* m_lstTaskPool; // 0x0
	};
}
