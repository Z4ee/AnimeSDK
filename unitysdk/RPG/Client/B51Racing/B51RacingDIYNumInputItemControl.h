#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }

#define RPG_CLIENT_B51RACING_B51RACINGDIYNUMINPUTITEMCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC72DEB0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYNUMINPUTITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC72DFD0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYNUMINPUTITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC72DE10)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDIYNumInputItemControl_TypeDefinitionIndex = 81774;

	class B51RacingDIYNumInputItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::LocalizedText* _DigitText; // 0x40
		::RPG::Client::UIStateCtrl* _BlinkEffStateCtrl; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYNUMINPUTITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYNUMINPUTITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYNUMINPUTITEMCONTROL_SETUPVIEW_OFFSET))(this);
		}
	};
}
