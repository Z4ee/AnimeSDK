#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_0_16E4307DCC419505_1606;
class Class_0_16E4307DCC419505_1617;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::B51Racing { class B51RacingCarTargetPartIconControl; }
namespace RPG::Client::B51Racing { class B51RacingCarTargetPartIconLiteControl; }
namespace RPG::Client::B51Racing { class B51RacingNewPartHintDialogViewModel; }
namespace RPG::Client::B51Racing { class B51RacingPartRetentionItemControl; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL_GETSELECTEDPARTID_OFFSET UNITYSDK_OFFSET(0xC7B3280)
#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL_ONCLOSECLICK_1_OFFSET UNITYSDK_OFFSET(0xC7B2AE0)
#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL_ONCLOSECLICK_OFFSET UNITYSDK_OFFSET(0xC7B2A90)
#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL_ONCONFIRMCLICK_OFFSET UNITYSDK_OFFSET(0xC7B3340)
#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL_ONITEM1CLICK_OFFSET UNITYSDK_OFFSET(0xC7B2FE0)
#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL_ONITEM2CLICK_OFFSET UNITYSDK_OFFSET(0xC7B31D0)
#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC7B24B0)
#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__BLOCKINTERACTION_OFFSET UNITYSDK_OFFSET(0xC7B2F20)
#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0xC7B3C80)
#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC7B3C50)
#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__GETCARDIYSERVICE_OFFSET UNITYSDK_OFFSET(0xC7B2E70)
#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__GETUINAVIGATIONZONEMANAGER_OFFSET UNITYSDK_OFFSET(0xC7B35D0)
#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__GETWINDOWSERVICE_OFFSET UNITYSDK_OFFSET(0xC7B3500)
#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC7B22E0)
#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__PREINITKEEPMODE_OFFSET UNITYSDK_OFFSET(0xC7B2950)
#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__REFRESHCHECKEDSTATE_OFFSET UNITYSDK_OFFSET(0xC7B3090)
#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__RELEASEBLOCK_OFFSET UNITYSDK_OFFSET(0xC7B3770)
#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__SETUPNORMALCARICON_OFFSET UNITYSDK_OFFSET(0xC7B25F0)
#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__SETUPSKILLINFO_OFFSET UNITYSDK_OFFSET(0xC7B2780)
#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__SHOWNEWPARTDISPLAYPAGE_OFFSET UNITYSDK_OFFSET(0xC7B36C0)
#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL___ONINITIALIZECOMPONENT_B__9_0_OFFSET UNITYSDK_OFFSET(0xC7B3EB0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingNewPartHintDialogControl_TypeDefinitionIndex = 81790;

	class B51RacingNewPartHintDialogControl : public ::Sofa::BaseSofaControl
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::RPG::Client::TextID>** StaticGet__SLOT_TYPE_NAME_MAP()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(B51RacingNewPartHintDialogControl_TypeDefinitionIndex)->GetStaticField(0x549E0);
		}
		// static const ::System::String* STATE_NORMAL_TO_KEEP; // 0x0
		::RPG::Client::UIStateCtrl* _ContentsStateCtrl; // 0x40
		::RPG::Client::B51Racing::B51RacingCarTargetPartIconControl* _NormalCarPartIconControl; // 0x48
		::RPG::Client::B51Racing::B51RacingCarTargetPartIconLiteControl* _NewPartSubSkillIconControl; // 0x50
		::RPG::Client::LocalizedText* _NewPartNameText; // 0x58
		::RPG::Client::LocalizedText* _NewPartSubSkillNameText; // 0x60
		::RPG::Client::B51Racing::B51RacingPartRetentionItemControl* _Item1Control; // 0x68
		::RPG::Client::B51Racing::B51RacingPartRetentionItemControl* _Item2Control; // 0x70
		::RPG::Client::AnimatorButton* _BtnGo; // 0x78
		::RPG::Client::MonoAnimationTrigger* _KeepAnimTrigger; // 0x80
		::Class_0_16E4307DCC419505_1606* _WindowService; // 0x88
		::System::UInt32 _BlockUID; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__CCTOR_OFFSET))();
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void OnCloseClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL_ONCLOSECLICK_OFFSET))(this);
		}

		::System::Void OnCloseClick_1(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL_ONCLOSECLICK_1_OFFSET))(this, a1);
		}

		::System::Void OnItem1Click()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL_ONITEM1CLICK_OFFSET))(this);
		}

		::System::Void OnItem2Click()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL_ONITEM2CLICK_OFFSET))(this);
		}

		::System::UInt32 GetSelectedPartID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL_GETSELECTEDPARTID_OFFSET))(this);
		}

		::System::Void OnConfirmClick(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL_ONCONFIRMCLICK_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_1617* _GetCarDIYService()
		{
			return ((::Class_0_16E4307DCC419505_1617*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__GETCARDIYSERVICE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1606* _GetWindowService()
		{
			return ((::Class_0_16E4307DCC419505_1606*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__GETWINDOWSERVICE_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZoneManager* _GetUINavigationZoneManager()
		{
			return ((::RPG::UINavigation::UINavigationZoneManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__GETUINAVIGATIONZONEMANAGER_OFFSET))(this);
		}

		::System::Void _ShowNewPartDisplayPage(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__SHOWNEWPARTDISPLAYPAGE_OFFSET))(this, a1);
		}

		::System::UInt32 _BlockInteraction()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__BLOCKINTERACTION_OFFSET))(this);
		}

		::System::Void _ReleaseBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__RELEASEBLOCK_OFFSET))(this);
		}

		::System::Void _SetupNormalCarIcon(::RPG::Client::B51Racing::B51RacingNewPartHintDialogViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingNewPartHintDialogViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__SETUPNORMALCARICON_OFFSET))(this, a1);
		}

		::System::Void _SetupSkillInfo(::RPG::Client::B51Racing::B51RacingNewPartHintDialogViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingNewPartHintDialogViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__SETUPSKILLINFO_OFFSET))(this, a1);
		}

		::System::Void _PreInitKeepMode(::RPG::Client::B51Racing::B51RacingNewPartHintDialogViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingNewPartHintDialogViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__PREINITKEEPMODE_OFFSET))(this, a1);
		}

		::System::Void _RefreshCheckedState(::RPG::Client::B51Racing::B51RacingNewPartHintDialogViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingNewPartHintDialogViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL__REFRESHCHECKEDSTATE_OFFSET))(this, a1);
		}

		::System::Void __OnInitializeComponent_b__9_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL___ONINITIALIZECOMPONENT_B__9_0_OFFSET))(this, a1);
		}
	};
}
