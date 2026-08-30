#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_0_16E4307DCC419505_1405;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::B51Racing { class B51RacingCarTargetPartIconLiteControl; }

#define RPG_CLIENT_B51RACING_B51RACINGBUFFDETAILITEMCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19ED3960)
#define RPG_CLIENT_B51RACING_B51RACINGBUFFDETAILITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19ED3E40)
#define RPG_CLIENT_B51RACING_B51RACINGBUFFDETAILITEMCONTROL__GETWINDOWSERVICE_OFFSET UNITYSDK_OFFSET(0x19ED3D90)
#define RPG_CLIENT_B51RACING_B51RACINGBUFFDETAILITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19ED38A0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingBuffDetailItemControl_TypeDefinitionIndex = 80467;

	class B51RacingBuffDetailItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::B51Racing::B51RacingCarTargetPartIconLiteControl* _Icon; // 0x38
		::RPG::Client::LocalizedText* _NameText; // 0x40
		::RPG::Client::LocalizedText* _DescText; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGBUFFDETAILITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGBUFFDETAILITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGBUFFDETAILITEMCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1405* _GetWindowService()
		{
			return ((::Class_0_16E4307DCC419505_1405*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGBUFFDETAILITEMCONTROL__GETWINDOWSERVICE_OFFSET))(this);
		}
	};
}
