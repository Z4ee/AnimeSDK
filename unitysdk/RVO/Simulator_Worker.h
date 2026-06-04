#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RVO { class Simulator; }
namespace System::Threading { class ManualResetEvent; }

#define RVO_SIMULATOR_WORKER_STEP_OFFSET UNITYSDK_OFFSET(0xA255560)
#define RVO_SIMULATOR_WORKER_UPDATERANGE_OFFSET UNITYSDK_OFFSET(0xA255550)
#define RVO_SIMULATOR_WORKER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA255790)
#define RVO_SIMULATOR_WORKER__CTOR_OFFSET UNITYSDK_OFFSET(0xA2548F0)

namespace RVO
{
	inline static constexpr unsigned int Simulator_Worker_TypeDefinitionIndex = 41859;

	class Simulator_Worker : public ::System::Object
	{
	public:
		::System::Threading::ManualResetEvent* doneEvent_; // 0x10
		::RVO::Simulator* _simulator; // 0x18
		::System::Int32 end_; // 0x20
		::System::Int32 start_; // 0x24

		::System::Void _ctor(::RVO::Simulator* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Threading::ManualResetEvent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Simulator*, ::System::Int32, ::System::Int32, ::System::Threading::ManualResetEvent*))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_WORKER__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void step(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_WORKER_STEP_OFFSET))(this, a1);
		}

		::System::Void updateRange(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_WORKER_UPDATERANGE_OFFSET))(this, a1, a2);
		}

		::System::Void update(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_WORKER_UPDATE_OFFSET))(this, a1);
		}
	};
}
