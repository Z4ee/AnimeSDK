#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/SmoothUpdater.h"

#define RPG_CLIENT_ELECTRICCHAINV2_SMOOTHINTERRUPTUPDATER_GET__WEIGHT_OFFSET UNITYSDK_OFFSET(0x9599710)
#define RPG_CLIENT_ELECTRICCHAINV2_SMOOTHINTERRUPTUPDATER__CTOR_OFFSET UNITYSDK_OFFSET(0x9599770)
#define RPG_CLIENT_ELECTRICCHAINV2_SMOOTHINTERRUPTUPDATER___IFIXBASEPROXY_GET__WEIGHT_OFFSET UNITYSDK_OFFSET(0x95998D0)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int SmoothInterruptUpdater_TypeDefinitionIndex = 60309;

	class SmoothInterruptUpdater : public ::RPG::Client::ElectricChainV2::SmoothUpdater
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SMOOTHINTERRUPTUPDATER__CTOR_OFFSET))(this);
		}

		::System::Single get__weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SMOOTHINTERRUPTUPDATER_GET__WEIGHT_OFFSET))(this);
		}

		::System::Single __iFixBaseProxy_get__weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SMOOTHINTERRUPTUPDATER___IFIXBASEPROXY_GET__WEIGHT_OFFSET))(this);
		}
	};
}
