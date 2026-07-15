#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AirshipCarDetectTrigger.h"

#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARDETECTTRIGGER_GET_ISDETECTEDNPC_OFFSET UNITYSDK_OFFSET(0x1ADF44E0)
#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARDETECTTRIGGER_GET_ISDETECTEDPLAYER_OFFSET UNITYSDK_OFFSET(0x1ADF4300)
#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARDETECTTRIGGER_GET_ISDETECTED_OFFSET UNITYSDK_OFFSET(0x1ADF4270)
#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARDETECTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADF46C0)

namespace RPG::Client::CityCarFlow
{
	inline static constexpr unsigned int MonoCityCarDetectTrigger_TypeDefinitionIndex = 76803;

	class MonoCityCarDetectTrigger : public ::RPG::Client::AirshipCarDetectTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARDETECTTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsDetected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARDETECTTRIGGER_GET_ISDETECTED_OFFSET))(this);
		}

		::System::Boolean get_IsDetectedPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARDETECTTRIGGER_GET_ISDETECTEDPLAYER_OFFSET))(this);
		}

		::System::Boolean get_IsDetectedNPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARDETECTTRIGGER_GET_ISDETECTEDNPC_OFFSET))(this);
		}
	};
}
