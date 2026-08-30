#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_0_16E4307DCC419505_1402;
namespace RPG::Client::B51Racing { class B51RacingPerformanceDialogViewModel; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_B51RACING_B51RACINGPERFORMANCEDIALOGCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B6CB0F0)
#define RPG_CLIENT_B51RACING_B51RACINGPERFORMANCEDIALOGCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6CB370)
#define RPG_CLIENT_B51RACING_B51RACINGPERFORMANCEDIALOGCONTROL__GETCONFIGREPO_OFFSET UNITYSDK_OFFSET(0x1B6CB2B0)
#define RPG_CLIENT_B51RACING_B51RACINGPERFORMANCEDIALOGCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B6CB070)
#define RPG_CLIENT_B51RACING_B51RACINGPERFORMANCEDIALOGCONTROL__REFRESHTEAMICON_OFFSET UNITYSDK_OFFSET(0x1B6CB190)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingPerformanceDialogControl_TypeDefinitionIndex = 80623;

	class B51RacingPerformanceDialogControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Image* _TeamIcon; // 0x38
		::Class_0_16E4307DCC419505_1402* _ConfigRepo; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGPERFORMANCEDIALOGCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGPERFORMANCEDIALOGCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGPERFORMANCEDIALOGCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void _RefreshTeamIcon(::RPG::Client::B51Racing::B51RacingPerformanceDialogViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingPerformanceDialogViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGPERFORMANCEDIALOGCONTROL__REFRESHTEAMICON_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_1402* _GetConfigRepo()
		{
			return ((::Class_0_16E4307DCC419505_1402*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGPERFORMANCEDIALOGCONTROL__GETCONFIGREPO_OFFSET))(this);
		}
	};
}
