#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_0_16E4307DCC419505_1402;
class Class_0_16E4307DCC419505_1405;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::B51Racing { class B51RacingCarInfoPanelViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarStatItemControl; }
namespace RPG::Client::B51Racing { class LuaControllerHandle; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_B51RACING_B51RACINGCARINFOPANELCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19EE6D10)
#define RPG_CLIENT_B51RACING_B51RACINGCARINFOPANELCONTROL__BINDSTATITEMCONTROLS_OFFSET UNITYSDK_OFFSET(0x19EE6690)
#define RPG_CLIENT_B51RACING_B51RACINGCARINFOPANELCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE7470)
#define RPG_CLIENT_B51RACING_B51RACINGCARINFOPANELCONTROL__GETBRIDGEHANDLE_OFFSET UNITYSDK_OFFSET(0x19EE6C70)
#define RPG_CLIENT_B51RACING_B51RACINGCARINFOPANELCONTROL__GETWINDOWSERVICE_OFFSET UNITYSDK_OFFSET(0x19EE73C0)
#define RPG_CLIENT_B51RACING_B51RACINGCARINFOPANELCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19EE6B10)
#define RPG_CLIENT_B51RACING_B51RACINGCARINFOPANELCONTROL__ONBTNSTATDETAILCLICKED_OFFSET UNITYSDK_OFFSET(0x19EE7360)
#define RPG_CLIENT_B51RACING_B51RACINGCARINFOPANELCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19EE64F0)
#define RPG_CLIENT_B51RACING_B51RACINGCARINFOPANELCONTROL__REFRESHACTIVESKILL_OFFSET UNITYSDK_OFFSET(0x19EE6DC0)
#define RPG_CLIENT_B51RACING_B51RACINGCARINFOPANELCONTROL__REFRESHSTATBARS_OFFSET UNITYSDK_OFFSET(0x19EE7260)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarInfoPanelControl_TypeDefinitionIndex = 80439;

	class B51RacingCarInfoPanelControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::Int32 _STAT_ITEM_COUNT = 0x5; // 0x0
		::UnityEngine::UI::Image* _SkillIcon; // 0x38
		::RPG::Client::LocalizedText* _SkillNameText; // 0x40
		::RPG::Client::LocalizedText* _SkillLevelText; // 0x48
		::RPG::Client::LocalizedText* _SkillDescText; // 0x50
		::UnityEngine::Transform* _SkillLevelNode; // 0x58
		::RPG::Client::AnimatorButton* _BtnStatDetail; // 0x60
		::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemControl*>* _StatItemControls; // 0x68
		::Class_0_16E4307DCC419505_1402* _ConfigRepo; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARINFOPANELCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARINFOPANELCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _BindStatItemControls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARINFOPANELCONTROL__BINDSTATITEMCONTROLS_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARINFOPANELCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARINFOPANELCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void _RefreshActiveSkill(::RPG::Client::B51Racing::B51RacingCarInfoPanelViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingCarInfoPanelViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARINFOPANELCONTROL__REFRESHACTIVESKILL_OFFSET))(this, a1);
		}

		::System::Void _RefreshStatBars(::RPG::Client::B51Racing::B51RacingCarInfoPanelViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingCarInfoPanelViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARINFOPANELCONTROL__REFRESHSTATBARS_OFFSET))(this, a1);
		}

		::RPG::Client::B51Racing::LuaControllerHandle* _GetBridgeHandle()
		{
			return ((::RPG::Client::B51Racing::LuaControllerHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARINFOPANELCONTROL__GETBRIDGEHANDLE_OFFSET))(this);
		}

		::System::Void _OnBtnStatDetailClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARINFOPANELCONTROL__ONBTNSTATDETAILCLICKED_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1405* _GetWindowService()
		{
			return ((::Class_0_16E4307DCC419505_1405*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARINFOPANELCONTROL__GETWINDOWSERVICE_OFFSET))(this);
		}
	};
}
