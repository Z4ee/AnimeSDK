#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::B51Racing { class B51RacingCarTargetPartIconLiteControl; }
namespace RPG::Client::B51Racing { class B51RacingComPopUpDialogViewModel; }

#define RPG_CLIENT_B51RACING_B51RACINGCOMPOPUPDIALOGCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19EEC500)
#define RPG_CLIENT_B51RACING_B51RACINGCOMPOPUPDIALOGCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19EEC860)
#define RPG_CLIENT_B51RACING_B51RACINGCOMPOPUPDIALOGCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19EEC440)
#define RPG_CLIENT_B51RACING_B51RACINGCOMPOPUPDIALOGCONTROL__REFRESHBUFFDETAIL_OFFSET UNITYSDK_OFFSET(0x19EEC5A0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingComPopUpDialogControl_TypeDefinitionIndex = 80492;

	class B51RacingComPopUpDialogControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::B51Racing::B51RacingCarTargetPartIconLiteControl* _Icon; // 0x38
		::RPG::Client::LocalizedText* _BuffNameText; // 0x40
		::RPG::Client::LocalizedText* _BuffDescText; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCOMPOPUPDIALOGCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCOMPOPUPDIALOGCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCOMPOPUPDIALOGCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void _RefreshBuffDetail(::RPG::Client::B51Racing::B51RacingComPopUpDialogViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingComPopUpDialogViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCOMPOPUPDIALOGCONTROL__REFRESHBUFFDETAIL_OFFSET))(this, a1);
		}
	};
}
