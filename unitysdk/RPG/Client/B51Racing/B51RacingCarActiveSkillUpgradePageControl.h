#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client { class MonoInControlMove; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::B51Racing { class B51RacingCarActiveSkillItemControl; }
namespace RPG::Client::B51Racing { class B51RacingCarActiveSkillUpgradePageViewModel; }
namespace RPG::Client::B51Racing { class LuaControllerHandle; }
namespace RPG::UINavigation { class UINavigationScroller; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class CanvasGroup; }

#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL_PLAYEXPANIMATION_OFFSET UNITYSDK_OFFSET(0xC714E20)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC7146D0)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__BLOCKINTERACTION_OFFSET UNITYSDK_OFFSET(0xC714CB0)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC7154C0)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__GETBRIDGEHANDLE_OFFSET UNITYSDK_OFFSET(0xC713F10)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__GETUINAVIGATIONZONEMANAGER_OFFSET UNITYSDK_OFFSET(0xC713FB0)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC7140A0)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC714330)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC713C60)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__ONINPUTDEVICECLASSSWITCHED_OFFSET UNITYSDK_OFFSET(0xC714FE0)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__ONLEVELUPANIMFINISH_OFFSET UNITYSDK_OFFSET(0xC7153A0)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__ONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0xC714620)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__PLAYEXPANIMSEQUENCE_OFFSET UNITYSDK_OFFSET(0xC714F50)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__REFRESHDAYBAR_OFFSET UNITYSDK_OFFSET(0xC714790)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__REFRESHSKILLSVIEW_OFFSET UNITYSDK_OFFSET(0xC714B90)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__REFRESHTITLE_OFFSET UNITYSDK_OFFSET(0xC714A70)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__SETUPMONOINCONTROLMOVESENABLE_OFFSET UNITYSDK_OFFSET(0xC715140)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__SETUPMONOINCONTROLTIPS_OFFSET UNITYSDK_OFFSET(0xC7151E0)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__SETUPNAVISCROLLERENABLE_OFFSET UNITYSDK_OFFSET(0xC7150A0)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__UNBLOCKINTERACTABLE_OFFSET UNITYSDK_OFFSET(0xC7143F0)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL___ONINITIALIZECOMPONENT_B__16_0_OFFSET UNITYSDK_OFFSET(0xC7154F0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarActiveSkillUpgradePageControl_TypeDefinitionIndex = 81727;

	class B51RacingCarActiveSkillUpgradePageControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* _STATE_NORMAL; // 0x0
		// static const ::System::String* _STATE_LEVEL_UP; // 0x0
		// static const ::System::String* _TEXT_GAIN_EXP; // 0x0
		// static const ::System::String* _TEXT_SKILL_LEVEL_UP; // 0x0
		// static const ::System::Single _EXP_ANIM_DURATION; // 0x0
		::RPG::Client::UIStateCtrl* _RootStateCtrl; // 0x40
		::RPG::Client::LocalizedText* _TitleText; // 0x48
		::RPG::Client::LocalizedText* _DayText; // 0x50
		::RPG::Client::LocalizedText* _HintText; // 0x58
		::RPG::Client::B51Racing::B51RacingCarActiveSkillItemControl* _SkillNowControl; // 0x60
		::RPG::Client::B51Racing::B51RacingCarActiveSkillItemControl* _SkillLevelUpControl; // 0x68
		::RPG::Client::AnimatorButton* _BtnEmptyClose; // 0x70
		::RPG::Client::AnimatorButton* _BtnSwitchScroll; // 0x78
		::UnityEngine::CanvasGroup* _OperationEnableHintCanvasGroup; // 0x80
		::UnityEngine::CanvasGroup* _LeftScrollEnableHintCanvasGroup; // 0x88
		::UnityEngine::CanvasGroup* _RightScrollEnableHintCanvasGroup; // 0x90
		::RPG::Client::MonoAnimationTrigger* _FadeInAnimTrigger; // 0x98
		::RPG::Client::MonoInControlMove* _SkillNowMonoInControlMove; // 0xA0
		::RPG::Client::MonoInControlMove* _SkillLevelUpMonoInControlMove; // 0xA8
		::RPG::UINavigation::UINavigationScroller* _SkillNowNaviScroller; // 0xB0
		::RPG::UINavigation::UINavigationScroller* _SkillLevelUpNaviScroller; // 0xB8
		::System::UInt32 _BlockUID; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::RPG::Client::B51Racing::LuaControllerHandle* _GetBridgeHandle()
		{
			return ((::RPG::Client::B51Racing::LuaControllerHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__GETBRIDGEHANDLE_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZoneManager* _GetUINavigationZoneManager()
		{
			return ((::RPG::UINavigation::UINavigationZoneManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__GETUINAVIGATIONZONEMANAGER_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__ONDESTROY_OFFSET))(this);
		}

		::System::Void _OnStartExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__ONSTARTEXIT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void PlayExpAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL_PLAYEXPANIMATION_OFFSET))(this);
		}

		::System::Void _OnInputDeviceClassSwitched(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__ONINPUTDEVICECLASSSWITCHED_OFFSET))(this, a1);
		}

		::System::Void _RefreshDayBar(::RPG::Client::B51Racing::B51RacingCarActiveSkillUpgradePageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingCarActiveSkillUpgradePageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__REFRESHDAYBAR_OFFSET))(this, a1);
		}

		::System::Void _RefreshTitle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__REFRESHTITLE_OFFSET))(this);
		}

		::System::Void _RefreshSkillsView(::RPG::Client::B51Racing::B51RacingCarActiveSkillUpgradePageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingCarActiveSkillUpgradePageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__REFRESHSKILLSVIEW_OFFSET))(this, a1);
		}

		::System::UInt32 _BlockInteraction()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__BLOCKINTERACTION_OFFSET))(this);
		}

		::System::Void _UnBlockInteractable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__UNBLOCKINTERACTABLE_OFFSET))(this);
		}

		::System::Void _SetUpMonoInControlMovesEnable(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__SETUPMONOINCONTROLMOVESENABLE_OFFSET))(this, a1, a2);
		}

		::System::Void _SetUpNaviScrollerEnable(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__SETUPNAVISCROLLERENABLE_OFFSET))(this, a1, a2);
		}

		::System::Void _SetUpMonoInControlTips(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__SETUPMONOINCONTROLTIPS_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* _PlayExpAnimSequence(::RPG::Client::B51Racing::B51RacingCarActiveSkillUpgradePageViewModel* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingCarActiveSkillUpgradePageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__PLAYEXPANIMSEQUENCE_OFFSET))(this, a1);
		}

		::System::Void _OnLevelUpAnimFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL__ONLEVELUPANIMFINISH_OFFSET))(this);
		}

		::System::Void __OnInitializeComponent_b__16_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLUPGRADEPAGECONTROL___ONINITIALIZECOMPONENT_B__16_0_OFFSET))(this, a1);
		}
	};
}
