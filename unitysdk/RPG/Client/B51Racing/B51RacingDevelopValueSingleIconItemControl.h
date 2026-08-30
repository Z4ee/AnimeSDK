#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUESINGLEICONITEMCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19EFCCA0)
#define RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUESINGLEICONITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19EFCF20)
#define RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUESINGLEICONITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19EFCE60)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDevelopValueSingleIconItemControl_TypeDefinitionIndex = 80497;

	class B51RacingDevelopValueSingleIconItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* _STATE_VALUE_PREFIX; // 0x0
		// static const ::System::String* _STATE_LEVEL_PREFIX; // 0x0
		// static const ::System::String* _STATE_NORMAL; // 0x0
		// static const ::System::String* _STATE_VALUE_UP; // 0x0
		::RPG::Client::UIStateCtrl* _StatTypeStateCtrl; // 0x38
		::RPG::Client::UIStateCtrl* _RootStateCtrl; // 0x40
		::RPG::Client::UIStateCtrl* _ValueUpStateCtrl; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUESINGLEICONITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUESINGLEICONITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUESINGLEICONITEMCONTROL_SETUPVIEW_OFFSET))(this);
		}
	};
}
