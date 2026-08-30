#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingDIYNumPanelControl; }

#define RPG_CLIENT_B51RACING_B51RACINGDIYNUMPANELCONTROL___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19EF05A0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYNUMPANELCONTROL___C__DISPLAYCLASS10_0___BUILDKEYPADVIEWMODELS_B__0_OFFSET UNITYSDK_OFFSET(0x19EF0C90)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDIYNumPanelControl___c__DisplayClass10_0_TypeDefinitionIndex = 80448;

	class B51RacingDIYNumPanelControl___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::B51RacingDIYNumPanelControl* __4__this; // 0x10
		::System::Int32 index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYNUMPANELCONTROL___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void __BuildKeypadViewModels_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYNUMPANELCONTROL___C__DISPLAYCLASS10_0___BUILDKEYPADVIEWMODELS_B__0_OFFSET))(this);
		}
	};
}
