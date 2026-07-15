#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/SchedulerType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

class Class_0_16E4307DCC419505_285;

namespace RPG::Client::Multithread
{
	inline static constexpr unsigned int JobThreadTask_1_TypeDefinitionIndex = 41229;

	template <typename TaskData>
	class JobThreadTask_1 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_285* _OwnerNode_k__BackingField; // 0x0
		::System::Boolean _LockScene; // 0x0
		::System::Boolean _RunInMainThread; // 0x0
		::System::Boolean _Enable; // 0x0
		TaskData _data; // 0x0
		::RPG::Client::Multithread::SchedulerType _SchedulerType; // 0x0
		::System::Boolean _ForceFlush; // 0x0
	};
}
