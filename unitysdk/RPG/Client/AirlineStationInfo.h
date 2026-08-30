#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AirlineStation; }

#define RPG_CLIENT_AIRLINESTATIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19C4EC10)

namespace RPG::Client
{
	inline static constexpr unsigned int AirlineStationInfo_TypeDefinitionIndex = 59906;

	class AirlineStationInfo : public ::System::Object
	{
	public:
		::System::Int32 startConnIndex; // 0x10
		::System::Int32 endConnIndex; // 0x14
		::RPG::Client::AirlineStation* station; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINESTATIONINFO__CTOR_OFFSET))(this);
		}
	};
}
