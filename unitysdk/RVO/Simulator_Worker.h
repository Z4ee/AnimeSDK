#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RVO { class Simulator; }
namespace System::Threading { class ManualResetEvent; }

#define RVO_SIMULATOR_WORKER_STEP_OFFSET UNITYSDK_OFFSET(0x8E06B30)
#define RVO_SIMULATOR_WORKER_UPDATERANGE_OFFSET UNITYSDK_OFFSET(0x8E06B20)
#define RVO_SIMULATOR_WORKER_UPDATE_OFFSET UNITYSDK_OFFSET(0x8E06D80)
#define RVO_SIMULATOR_WORKER__CTOR_OFFSET UNITYSDK_OFFSET(0x8E05EA0)

namespace RVO
{
	inline static constexpr unsigned int Simulator_Worker_TypeDefinitionIndex = 41056;

	class Simulator_Worker : public ::System::Object
	{
	public:
		::RVO::Simulator* _simulator; // 0x10
		::System::Threading::ManualResetEvent* doneEvent_; // 0x18
		::System::Int32 start_; // 0x20
		::System::Int32 end_; // 0x24

		::System::Void _ctor(::RVO::Simulator* simulator, ::System::Int32 start, ::System::Int32 end, ::System::Threading::ManualResetEvent* doneEvent)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Simulator*, ::System::Int32, ::System::Int32, ::System::Threading::ManualResetEvent*))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_WORKER__CTOR_OFFSET))(this, simulator, start, end, doneEvent);
		}

		::System::Void step(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_WORKER_STEP_OFFSET))(this, obj);
		}

		::System::Void updateRange(::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_WORKER_UPDATERANGE_OFFSET))(this, start, end);
		}

		::System::Void update(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_WORKER_UPDATE_OFFSET))(this, obj);
		}
	};
}
