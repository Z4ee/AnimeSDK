#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TeamTowers/BrickControlType.h"
#include "unitysdk/RPG/Client/TeamTowers/BrickDirectionType.h"
#include "unitysdk/System/Object.h"

class Class_1_2AE7FBE19C7FFFCD;
class Class_1_7EEA5E93C4D09894;
namespace RPG::Client::TeamTowers { class TeamTowersSettingGroupViewModel; }
namespace System { class Action; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_GET_BRICKCONTROLSETTING_OFFSET UNITYSDK_OFFSET(0x19470920)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_GET_BRICKDIRECTIONSETTING_OFFSET UNITYSDK_OFFSET(0x19470960)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_GET_KEYBOARDUSEWROTATESETTING_OFFSET UNITYSDK_OFFSET(0x194709E0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_GET_MOBILEUSEBTNROTATESETTING_OFFSET UNITYSDK_OFFSET(0x194709A0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_ISMOBILEUSESWIPECONTROL_OFFSET UNITYSDK_OFFSET(0x1946FD00)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_REGISTERSETTINGSCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1946FB70)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_SUBMITNEWSETTING_OFFSET UNITYSDK_OFFSET(0x1946F930)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1946F7D0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__INITBRICKCONTROLGROUP_OFFSET UNITYSDK_OFFSET(0x1946FD60)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__INITBRICKDIRECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x19470050)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__INITKEYBOARDUSEWROTATEGROUP_OFFSET UNITYSDK_OFFSET(0x19470630)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__INITMOBILEUSEBTNROTATEGROUP_OFFSET UNITYSDK_OFFSET(0x19470340)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__INITSETTINGGROUPS_OFFSET UNITYSDK_OFFSET(0x1946F8D0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__SDKREPORTSETTINGSUBMIT_OFFSET UNITYSDK_OFFSET(0x1946FAA0)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersSettingViewModel_TypeDefinitionIndex = 75111;

	class TeamTowersSettingViewModel : public ::System::Object
	{
	public:
		::Class_1_7EEA5E93C4D09894* _Repository; // 0x10
		::RPG::Client::TeamTowers::TeamTowersSettingGroupViewModel* _KeyBoardUseWRotateSetting; // 0x18
		::RPG::Client::TeamTowers::TeamTowersSettingGroupViewModel* _BrickControlSetting; // 0x20
		::RPG::Client::TeamTowers::TeamTowersSettingGroupViewModel* _BrickDirectionSetting; // 0x28
		::Class_1_2AE7FBE19C7FFFCD* _Settings; // 0x30
		::RPG::Client::TeamTowers::TeamTowersSettingGroupViewModel* _MobileUseBtnRotateSetting; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Void SubmitNewSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_SUBMITNEWSETTING_OFFSET))(this);
		}

		::System::Void RegisterSettingsChangedCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_REGISTERSETTINGSCHANGEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Boolean IsMobileUseSwipeControl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_ISMOBILEUSESWIPECONTROL_OFFSET))(this);
		}

		::System::Void _InitSettingGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__INITSETTINGGROUPS_OFFSET))(this);
		}

		::System::Void _InitBrickControlGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__INITBRICKCONTROLGROUP_OFFSET))(this);
		}

		::System::Void _InitBrickDirectionGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__INITBRICKDIRECTIONGROUP_OFFSET))(this);
		}

		::System::Void _InitMobileUseBtnRotateGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__INITMOBILEUSEBTNROTATEGROUP_OFFSET))(this);
		}

		::System::Void _InitKeyBoardUseWRotateGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__INITKEYBOARDUSEWROTATEGROUP_OFFSET))(this);
		}

		::System::Void _SDKReportSettingSubmit(::RPG::Client::TeamTowers::BrickControlType a1, ::RPG::Client::TeamTowers::BrickDirectionType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamTowers::BrickControlType, ::RPG::Client::TeamTowers::BrickDirectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__SDKREPORTSETTINGSUBMIT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TeamTowers::TeamTowersSettingGroupViewModel* get_BrickControlSetting()
		{
			return ((::RPG::Client::TeamTowers::TeamTowersSettingGroupViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_GET_BRICKCONTROLSETTING_OFFSET))(this);
		}

		::RPG::Client::TeamTowers::TeamTowersSettingGroupViewModel* get_BrickDirectionSetting()
		{
			return ((::RPG::Client::TeamTowers::TeamTowersSettingGroupViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_GET_BRICKDIRECTIONSETTING_OFFSET))(this);
		}

		::RPG::Client::TeamTowers::TeamTowersSettingGroupViewModel* get_MobileUseBtnRotateSetting()
		{
			return ((::RPG::Client::TeamTowers::TeamTowersSettingGroupViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_GET_MOBILEUSEBTNROTATESETTING_OFFSET))(this);
		}

		::RPG::Client::TeamTowers::TeamTowersSettingGroupViewModel* get_KeyBoardUseWRotateSetting()
		{
			return ((::RPG::Client::TeamTowers::TeamTowersSettingGroupViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_GET_KEYBOARDUSEWROTATESETTING_OFFSET))(this);
		}
	};
}
