#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_1_961B0CA014B1FC95;
class Class_1_E2FB7E5A9E3705C7_2;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::B51Racing { class B51RacingCarTargetPartIconControl; }
namespace RPG::Client::B51Racing { class B51RacingCarTargetPartIconLiteControl; }
namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconListControl; }
namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconListViewModel; }
namespace RPG::Client::B51Racing { class LuaControllerHandle; }
namespace RPG::UINavigation { class UINavigationZoneManager; }

#define RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B6C7E70)
#define RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6C8520)
#define RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGCONTROL__GETBRIDGEHANDLE_OFFSET UNITYSDK_OFFSET(0x1B6C7CE0)
#define RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGCONTROL__GETUINAVIGATIONZONEMANAGER_OFFSET UNITYSDK_OFFSET(0x1B6C7D80)
#define RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGCONTROL__ONBACKPRESS_OFFSET UNITYSDK_OFFSET(0x1B6C84E0)
#define RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B6C78D0)
#define RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGCONTROL__ONEXITCLICK_OFFSET UNITYSDK_OFFSET(0x1B6C8350)
#define RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B6C7790)
#define RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGCONTROL__ONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0x1B6C8430)
#define RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGCONTROL__REFRESHPARTINFO_OFFSET UNITYSDK_OFFSET(0x1B6C7F90)
#define RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGCONTROL__REFRESHSKILLINFO_OFFSET UNITYSDK_OFFSET(0x1B6C80E0)
#define RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGCONTROL__REFRESHTARGETREQUIREICONS_OFFSET UNITYSDK_OFFSET(0x1B6C82E0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingNewDevelopTargetDialogControl_TypeDefinitionIndex = 80498;

	class B51RacingNewDevelopTargetDialogControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::B51Racing::B51RacingCarTargetPartIconControl* _TargetPartIconControl; // 0x38
		::RPG::Client::B51Racing::B51RacingCarTargetPartIconLiteControl* _PartSkillIcon; // 0x40
		::RPG::Client::LocalizedText* _PartNameText; // 0x48
		::RPG::Client::LocalizedText* _PartSkillNameText; // 0x50
		::RPG::Client::LocalizedText* _PartSkillNameDesc; // 0x58
		::RPG::Client::AnimatorButton* _BtnGo; // 0x60
		::RPG::Client::B51Racing::B51RacingDevelopValueIconListControl* _RequireStatIconListControl; // 0x68
		::System::Boolean _ListInitialized; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void _RefreshPartInfo(::Class_1_961B0CA014B1FC95* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_961B0CA014B1FC95*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGCONTROL__REFRESHPARTINFO_OFFSET))(this, a1);
		}

		::System::Void _RefreshSkillInfo(::Class_1_961B0CA014B1FC95* a1, ::Class_1_E2FB7E5A9E3705C7_2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_961B0CA014B1FC95*, ::Class_1_E2FB7E5A9E3705C7_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGCONTROL__REFRESHSKILLINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshTargetRequireIcons(::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGCONTROL__REFRESHTARGETREQUIREICONS_OFFSET))(this, a1);
		}

		::RPG::Client::B51Racing::LuaControllerHandle* _GetBridgeHandle()
		{
			return ((::RPG::Client::B51Racing::LuaControllerHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGCONTROL__GETBRIDGEHANDLE_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZoneManager* _GetUINavigationZoneManager()
		{
			return ((::RPG::UINavigation::UINavigationZoneManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGCONTROL__GETUINAVIGATIONZONEMANAGER_OFFSET))(this);
		}

		::System::Void _OnExitClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGCONTROL__ONEXITCLICK_OFFSET))(this);
		}

		::System::Void _OnStartExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGCONTROL__ONSTARTEXIT_OFFSET))(this);
		}

		::System::Boolean _OnBackPress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGCONTROL__ONBACKPRESS_OFFSET))(this);
		}
	};
}
