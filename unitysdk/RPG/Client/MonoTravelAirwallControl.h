#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoDroneAirwallControl.h"

#define RPG_CLIENT_MONOTRAVELAIRWALLCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xC151560)
#define RPG_CLIENT_MONOTRAVELAIRWALLCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC151610)
#define RPG_CLIENT_MONOTRAVELAIRWALLCONTROL___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0xC151660)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTravelAirwallControl_TypeDefinitionIndex = 64199;

	class MonoTravelAirwallControl : public ::RPG::Client::MonoDroneAirwallControl
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELAIRWALLCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELAIRWALLCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELAIRWALLCONTROL___IFIXBASEPROXY_UPDATE_OFFSET))(this);
		}
	};
}
