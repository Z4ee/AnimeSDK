#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::B51Racing { class B51RacingCarTargetPartIconControl; }
namespace RPG::Client::B51Racing { class LuaControllerHandle; }
namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOITEMCONTROL_ONITEMCLICK_OFFSET UNITYSDK_OFFSET(0x19EED880)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOITEMCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19EED570)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19EED940)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOITEMCONTROL__GETBRIDGEHANDLE_OFFSET UNITYSDK_OFFSET(0x19EED4D0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19EED360)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19EED260)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOITEMCONTROL__SETUPCARICON_OFFSET UNITYSDK_OFFSET(0x19EED7B0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDIYDecoItemControl_TypeDefinitionIndex = 80442;

	class B51RacingDIYDecoItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::LocalizedText* _NameText; // 0x38
		::RPG::Client::AnimatorButton* _ButtonRoot; // 0x40
		::RPG::Client::UIStateCtrl* _UIStateRoot; // 0x48
		::RPG::Client::UIStateCtrl* _UIStateDecoPattern; // 0x50
		::RPG::Client::B51Racing::B51RacingCarTargetPartIconControl* _CarPartIconControl; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::B51Racing::LuaControllerHandle* _GetBridgeHandle()
		{
			return ((::RPG::Client::B51Racing::LuaControllerHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOITEMCONTROL__GETBRIDGEHANDLE_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOITEMCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void OnItemClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOITEMCONTROL_ONITEMCLICK_OFFSET))(this);
		}

		::System::Void _SetupCarIcon(::RPG::GameCore::B51RacingPartType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::B51RacingPartType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOITEMCONTROL__SETUPCARICON_OFFSET))(this, a1, a2);
		}
	};
}
