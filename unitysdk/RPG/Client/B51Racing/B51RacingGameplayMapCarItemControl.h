#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class UIStateCtrl; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYMAPCARITEMCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B6AE760)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYMAPCARITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6B70A0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYMAPCARITEMCONTROL__ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B6B7050)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYMAPCARITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B6B6F30)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingGameplayMapCarItemControl_TypeDefinitionIndex = 80560;

	class B51RacingGameplayMapCarItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::RectTransform* _RootRect; // 0x38
		::RPG::Client::UIStateCtrl* _StateCtrl; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYMAPCARITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYMAPCARITEMCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYMAPCARITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYMAPCARITEMCONTROL__ONDESTROY_OFFSET))(this);
		}
	};
}
