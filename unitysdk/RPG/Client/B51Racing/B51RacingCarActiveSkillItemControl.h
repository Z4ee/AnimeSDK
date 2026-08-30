#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_0_16E4307DCC419505_1402;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::B51Racing { class B51RacingCarActiveSkillItemViewModel; }
namespace RPG::UINavigation { class UINavigationButton; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Slider; }

#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLITEMCONTROL_SETCHECKED_OFFSET UNITYSDK_OFFSET(0xC84C020)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLITEMCONTROL_SETCURRENT_OFFSET UNITYSDK_OFFSET(0xC84C080)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLITEMCONTROL_SETEXPBARVALUE_OFFSET UNITYSDK_OFFSET(0xC84BF20)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLITEMCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC84B7D0)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC84C1D0)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLITEMCONTROL__GETCONFIGREPO_OFFSET UNITYSDK_OFFSET(0xC84C100)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC84B640)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLITEMCONTROL__REFRESHEXPBAR_OFFSET UNITYSDK_OFFSET(0xC84BE00)
#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLITEMCONTROL__REFRESHSKILLINFO_OFFSET UNITYSDK_OFFSET(0xC84B8D0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarActiveSkillItemControl_TypeDefinitionIndex = 80399;

	class B51RacingCarActiveSkillItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* _LEVEL_TEXT_ID; // 0x0
		::UnityEngine::UI::Image* _Icon; // 0x38
		::RPG::Client::LocalizedText* _NameText; // 0x40
		::RPG::Client::LocalizedText* _LevelNumText; // 0x48
		::RPG::Client::LocalizedText* _CurLevelText; // 0x50
		::RPG::Client::LocalizedText* _NextLevelText; // 0x58
		::UnityEngine::UI::Slider* _ExpBar; // 0x60
		::RPG::Client::LocalizedText* _DescrText; // 0x68
		::RPG::Client::AnimatorButton* _AnimatorButton; // 0x70
		::RPG::UINavigation::UINavigationButton* _UINavigationButton; // 0x78
		::RPG::Client::UIStateCtrl* _CurrentStateCtrl; // 0x80
		::Class_0_16E4307DCC419505_1402* _ConfigRepo; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLITEMCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void SetExpBarValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLITEMCONTROL_SETEXPBARVALUE_OFFSET))(this, a1);
		}

		::System::Void SetChecked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLITEMCONTROL_SETCHECKED_OFFSET))(this, a1);
		}

		::System::Void SetCurrent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLITEMCONTROL_SETCURRENT_OFFSET))(this, a1);
		}

		::System::Void _RefreshSkillInfo(::RPG::Client::B51Racing::B51RacingCarActiveSkillItemViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingCarActiveSkillItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLITEMCONTROL__REFRESHSKILLINFO_OFFSET))(this, a1);
		}

		::System::Void _RefreshExpBar(::RPG::Client::B51Racing::B51RacingCarActiveSkillItemViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingCarActiveSkillItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLITEMCONTROL__REFRESHEXPBAR_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_1402* _GetConfigRepo()
		{
			return ((::Class_0_16E4307DCC419505_1402*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLITEMCONTROL__GETCONFIGREPO_OFFSET))(this);
		}
	};
}
