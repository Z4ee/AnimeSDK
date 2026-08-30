#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AirshipCarDetectTrigger.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_AIRSHIPCARDETECTAVOIDTRIGGER_GET_WORLDFORWARD_OFFSET UNITYSDK_OFFSET(0xC7328D0)
#define RPG_CLIENT_AIRSHIPCARDETECTAVOIDTRIGGER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xC7329A0)
#define RPG_CLIENT_AIRSHIPCARDETECTAVOIDTRIGGER_TICK_OFFSET UNITYSDK_OFFSET(0xC732A20)
#define RPG_CLIENT_AIRSHIPCARDETECTAVOIDTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xC732FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipCarDetectAvoidTrigger_TypeDefinitionIndex = 59950;

	class AirshipCarDetectAvoidTrigger : public ::RPG::Client::AirshipCarDetectTrigger
	{
	public:
		// static const ::System::Single MDPBKHCGEIA; // 0x0
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
