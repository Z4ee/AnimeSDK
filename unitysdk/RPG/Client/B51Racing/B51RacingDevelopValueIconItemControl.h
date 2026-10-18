#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUEICONITEMCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC792CE0)
#define RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUEICONITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC792F10)
#define RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUEICONITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC792BC0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDevelopValueIconItemControl_TypeDefinitionIndex = 81824;

	class B51RacingDevelopValueIconItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* _STATE_VALUE_PREFIX; // 0x0
		// static const ::System::String* _STATE_LEVEL_PREFIX; // 0x0
		// static const ::System::String* _STATE_NORMAL; // 0x0
		// static const ::System::String* _STATE_VALUE_UP; // 0x0
		// static const ::System::String* _STATE_TARGET; // 0x0
		// static const ::System::String* _STATE_AVATAR; // 0x0
		::RPG::Client::UIStateCtrl* _StatTypeStateCtrl; // 0x40
		::RPG::Client::UIStateCtrl* _RootStateCtrl; // 0x48
		::RPG::Client::UIStateCtrl* _ValueUpStateCtrl; // 0x50
		::RPG::Client::UIStateCtrl* _TargetStateCtrl; // 0x58
		::RPG::Client::UIStateCtrl* _AvatarStateCtrl; // 0x60
		::RPG::Client::LocalizedText* _NumText; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUEICONITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUEICONITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUEICONITEMCONTROL_SETUPVIEW_OFFSET))(this);
		}
	};
}
