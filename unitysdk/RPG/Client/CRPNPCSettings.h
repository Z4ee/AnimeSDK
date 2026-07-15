#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CRPNPCSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBD750)

namespace RPG::Client
{
	inline static constexpr unsigned int CRPNPCSettings_TypeDefinitionIndex = 64926;

	class CRPNPCSettings : public ::System::Object
	{
	public:
		::RPG::CustomRP::Quality CrowdDensityQuality; // 0x10
		::RPG::CustomRP::Quality PedestrianDensityQuality; // 0x14
		::RPG::CustomRP::Quality AudienceDensityQuality; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CRPNPCSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
