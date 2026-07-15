#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AirshipCarDetectTrigger.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_AIRSHIPCARDETECTAVOIDTRIGGER_GET_WORLDFORWARD_OFFSET UNITYSDK_OFFSET(0x17EC4F60)
#define RPG_CLIENT_AIRSHIPCARDETECTAVOIDTRIGGER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x17EC5030)
#define RPG_CLIENT_AIRSHIPCARDETECTAVOIDTRIGGER_TICK_OFFSET UNITYSDK_OFFSET(0x17EC50B0)
#define RPG_CLIENT_AIRSHIPCARDETECTAVOIDTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x17EC5660)

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipCarDetectAvoidTrigger_TypeDefinitionIndex = 57152;

	class AirshipCarDetectAvoidTrigger : public ::RPG::Client::AirshipCarDetectTrigger
	{
	public:
		// static const ::System::Single Field_6_0; // 0x0
		::UnityEngine::Vector3 forward; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARDETECTAVOIDTRIGGER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_WorldForward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARDETECTAVOIDTRIGGER_GET_WORLDFORWARD_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARDETECTAVOIDTRIGGER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Boolean Tick(::System::Int32& a1, ::System::Boolean& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCARDETECTAVOIDTRIGGER_TICK_OFFSET))(this, a1, a2);
		}
	};
}
