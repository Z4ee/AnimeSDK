#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IActivityLightConeRewardData; }

#define RPG_CLIENT_B51RACING_B51RACINGLIGHTCONEREWARDPAGEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC7A91E0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingLightConeRewardPageViewModel_TypeDefinitionIndex = 82057;

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
