#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::B51Racing { class B51RacingCarTargetPartIconControl; }
namespace RPG::Client::B51Racing { class B51RacingCarTargetPartIconLiteControl; }
namespace RPG::Client::B51Racing { class LuaControllerHandle; }
namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL_ONITEMCLICK_OFFSET UNITYSDK_OFFSET(0xC787C40)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL_SETCHECKED_OFFSET UNITYSDK_OFFSET(0xC787BE0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC787870)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC787D00)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL__GETBRIDGEHANDLE_OFFSET UNITYSDK_OFFSET(0xC7877D0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC787660)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC787580)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL__SETUPCARICON_OFFSET UNITYSDK_OFFSET(0xC787B10)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL__SETUPPARTTYPEICON_OFFSET UNITYSDK_OFFSET(0xC787A50)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDIYPartEquipStatusItemControl_TypeDefinitionIndex = 81781;

	class B51RacingDIYPartEquipStatusItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::UIStateCtrl* _EquipStateCtrl; // 0x40
		::RPG::Client::B51Racing::B51RacingCarTargetPartIconLiteControl* _PartTypeIconControl; // 0x48
		::RPG::Client::LocalizedText* _PartTypeNameText; // 0x50
		::RPG::Client::B51Racing::B51RacingCarTargetPartIconControl* _CarPartIconControl; // 0x58
		::RPG::Client::AnimatorButton* _AnimatorButton; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::B51Racing::LuaControllerHandle* _GetBridgeHandle()
		{
			return ((::RPG::Client::B51Racing::LuaControllerHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL__GETBRIDGEHANDLE_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void SetChecked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL_SETCHECKED_OFFSET))(this, a1);
		}

		::System::Void OnItemClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL_ONITEMCLICK_OFFSET))(this);
		}

		::System::Void _SetupCarIcon(::RPG::GameCore::B51RacingPartType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::B51RacingPartType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL__SETUPCARICON_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupPartTypeIcon(::RPG::GameCore::B51RacingPartType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::B51RacingPartType))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL__SETUPPARTTYPEICON_OFFSET))(this, a1);
		}
	};
}
