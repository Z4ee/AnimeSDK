#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::B51Racing { class LuaControllerHandle; }

#define RPG_CLIENT_B51RACING_B51RACINGDIYNUMBUTTONITEMCONTROL_ONBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x19EEF590)
#define RPG_CLIENT_B51RACING_B51RACINGDIYNUMBUTTONITEMCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19EEF440)
#define RPG_CLIENT_B51RACING_B51RACINGDIYNUMBUTTONITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19EEF640)
#define RPG_CLIENT_B51RACING_B51RACINGDIYNUMBUTTONITEMCONTROL__GETBRIDGEHANDLE_OFFSET UNITYSDK_OFFSET(0x19EEF3A0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYNUMBUTTONITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19EEF230)
#define RPG_CLIENT_B51RACING_B51RACINGDIYNUMBUTTONITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19EEF170)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDIYNumButtonItemControl_TypeDefinitionIndex = 80445;

	class B51RacingDIYNumButtonItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::LocalizedText* _DigitText; // 0x38
		::RPG::Client::UIStateCtrl* _UIStateCtrl; // 0x40
		::RPG::Client::AnimatorButton* _ButtonRoot; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYNUMBUTTONITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYNUMBUTTONITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYNUMBUTTONITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::B51Racing::LuaControllerHandle* _GetBridgeHandle()
		{
			return ((::RPG::Client::B51Racing::LuaControllerHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYNUMBUTTONITEMCONTROL__GETBRIDGEHANDLE_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYNUMBUTTONITEMCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void OnButtonClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYNUMBUTTONITEMCONTROL_ONBUTTONCLICK_OFFSET))(this);
		}
	};
}
