#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class LocalizedText; }

#define RPG_CLIENT_B51RACING_B51RACINGRESIDENTREWARDPAGECONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC7B4AE0)
#define RPG_CLIENT_B51RACING_B51RACINGRESIDENTREWARDPAGECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC7B4BB0)
#define RPG_CLIENT_B51RACING_B51RACINGRESIDENTREWARDPAGECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC7B4A60)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingResidentRewardPageControl_TypeDefinitionIndex = 81963;

	class B51RacingResidentRewardPageControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::LocalizedText* _NumText; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGRESIDENTREWARDPAGECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGRESIDENTREWARDPAGECONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGRESIDENTREWARDPAGECONTROL_SETUPVIEW_OFFSET))(this);
		}
	};
}
