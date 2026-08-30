#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONLITECONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC84B3F0)
#define RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONLITECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC861560)
#define RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONLITECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC861450)
#define RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONLITECONTROL__PARTTYPETOSTATENAME_OFFSET UNITYSDK_OFFSET(0xC8614D0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarTargetPartIconLiteControl_TypeDefinitionIndex = 80492;

	class B51RacingCarTargetPartIconLiteControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::UIStateCtrl* _CarStateCtrl; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONLITECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONLITECONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONLITECONTROL_SETUPVIEW_OFFSET))(this);
		}

		static ::System::String* _PartTypeToStateName(::RPG::GameCore::B51RacingPartType a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::B51RacingPartType))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONLITECONTROL__PARTTYPETOSTATENAME_OFFSET))(a1);
		}
	};
}
