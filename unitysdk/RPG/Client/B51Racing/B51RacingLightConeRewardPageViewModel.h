#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IActivityLightConeRewardData; }

#define RPG_CLIENT_B51RACING_B51RACINGLIGHTCONEREWARDPAGEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6C6110)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingLightConeRewardPageViewModel_TypeDefinitionIndex = 80729;

	class B51RacingLightConeRewardPageViewModel : public ::System::Object
	{
	public:
		::RPG::Client::IActivityLightConeRewardData* LightConeRewardData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGLIGHTCONEREWARDPAGEVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
