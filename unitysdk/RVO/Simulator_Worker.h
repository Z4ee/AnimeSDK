#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RVO_SIMULATOR_WORKER_STEP_OFFSET UNITYSDK_OFFSET(0x1B641E50)
#define RVO_SIMULATOR_WORKER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B642290)
#define RVO_SIMULATOR_WORKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B641E40)

namespace RVO
{
	inline static constexpr unsigned int Simulator_Worker_TypeDefinitionIndex = 36462;

	class Simulator_Worker : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_WORKER__CTOR_OFFSET))(this);
		}

		::System::Void step(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_WORKER_STEP_OFFSET))(this, obj);
		}

		::System::Void update(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_WORKER_UPDATE_OFFSET))(this, obj);
		}
	};
}
