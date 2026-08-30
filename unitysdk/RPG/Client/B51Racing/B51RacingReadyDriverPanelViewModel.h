#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingReadyDriverPanelIconState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingReadyDriverDetailViewModel; }
namespace RPG::Client::B51Racing { class B51RacingReadyVehicleDetailViewModel; }

#define RPG_CLIENT_B51RACING_B51RACINGREADYDRIVERPANELVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC895ED0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingReadyDriverPanelViewModel_TypeDefinitionIndex = 80719;

	class B51RacingReadyDriverPanelViewModel : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::B51RacingReadyDriverDetailViewModel* DriverDetail; // 0x10
		::RPG::Client::B51Racing::B51RacingReadyVehicleDetailViewModel* VehicleDetail; // 0x18
		::System::Boolean ShowDriverSwitchUnlockedToast; // 0x20
		::System::Boolean ShowAutoEquippedNewDriverToast; // 0x21
		::RPG::Client::B51Racing::B51RacingReadyDriverPanelIconState IconState; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGREADYDRIVERPANELVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
