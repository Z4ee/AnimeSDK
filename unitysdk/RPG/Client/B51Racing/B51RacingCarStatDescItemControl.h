#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCITEMCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC85FB90)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC85FF50)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC85FE90)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarStatDescItemControl_TypeDefinitionIndex = 80489;

	class B51RacingCarStatDescItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::LocalizedText* _TitleText; // 0x38
		::RPG::Client::LocalizedText* _DescrText; // 0x40
		::RPG::Client::UIStateCtrl* _StatTypeStateCtrl; // 0x48
		::System::String* _STATE_VALUE_PREFIX; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCITEMCONTROL_SETUPVIEW_OFFSET))(this);
		}
	};
}
