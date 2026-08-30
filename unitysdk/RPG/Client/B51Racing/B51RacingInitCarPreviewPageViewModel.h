#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingCarInfoPanelViewModel; }

#define RPG_CLIENT_B51RACING_B51RACINGINITCARPREVIEWPAGEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6C4250)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingInitCarPreviewPageViewModel_TypeDefinitionIndex = 80674;

	class B51RacingInitCarPreviewPageViewModel : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::B51RacingCarInfoPanelViewModel* CarInfoPanelViewModel; // 0x10
		::System::UInt32 cycleID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGINITCARPREVIEWPAGEVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
