#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class LocalizedText; }

#define RPG_CLIENT_B51RACING_B51RACINGRESIDENTREWARDPAGECONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B6CB690)
#define RPG_CLIENT_B51RACING_B51RACINGRESIDENTREWARDPAGECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6CB760)
#define RPG_CLIENT_B51RACING_B51RACINGRESIDENTREWARDPAGECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B6CB610)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingResidentRewardPageControl_TypeDefinitionIndex = 80634;

	class B51RacingResidentRewardPageControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::LocalizedText* _NumText; // 0x38

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
