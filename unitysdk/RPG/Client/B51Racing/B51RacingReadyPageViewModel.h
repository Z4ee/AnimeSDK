#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingReadyDriverPanelViewModel; }

#define RPG_CLIENT_B51RACING_B51RACINGREADYPAGEVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1B6CB480)
#define RPG_CLIENT_B51RACING_B51RACINGREADYPAGEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6CB5F0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingReadyPageViewModel_TypeDefinitionIndex = 80719;

	class B51RacingReadyPageViewModel : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::B51RacingReadyDriverPanelViewModel* DriverPanel; // 0x10
		::System::Boolean IsChallenge; // 0x18
		::System::Int32 CurrentTabIndex; // 0x1C
		::System::UInt32 TrackConfigId; // 0x20
		::System::UInt32 LevelConfigId; // 0x24
		::System::UInt32 LevelIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGREADYPAGEVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::B51Racing::B51RacingReadyPageViewModel* Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::RPG::Client::B51Racing::B51RacingReadyPageViewModel*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGREADYPAGEVIEWMODEL_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
	};
}
