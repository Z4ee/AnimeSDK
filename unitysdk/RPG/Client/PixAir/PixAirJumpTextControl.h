#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::PixAir { class PixAirJumpTextViewModel; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDB4DCA0)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xDB4E100)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__GETDISPLAYTEXT_OFFSET UNITYSDK_OFFSET(0xDB4DE90)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__GETSIZESTATENAME_OFFSET UNITYSDK_OFFSET(0xDB4E060)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__GETTYPESTATENAME_OFFSET UNITYSDK_OFFSET(0xDB4DFC0)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__ONANIMATIONEND_OFFSET UNITYSDK_OFFSET(0xDB4DC30)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDB4DB50)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xDB4D810)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__PLAYUISTATE_OFFSET UNITYSDK_OFFSET(0xDB4DDE0)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__REFRESHDISPLAY_OFFSET UNITYSDK_OFFSET(0xDB4DBD0)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__REGISTERANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xDB4DA70)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__SETALLTEXTVALUES_OFFSET UNITYSDK_OFFSET(0xDB4DD50)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirJumpTextControl_TypeDefinitionIndex = 79244;

	class PixAirJumpTextControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::UIStateCtrl* _UIStateCtrl; // 0x40
		::RPG::Client::RPGAnimationEvent* _AnimationEvent; // 0x48
		::UnityEngine::Animation* _Animation; // 0x50
		::UnityEngine::UI::Text* _TxtSmall; // 0x58
		::UnityEngine::UI::Text* _TxtMedium; // 0x60
		::UnityEngine::UI::Text* _TxtLarge; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _RegisterAnimationEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__REGISTERANIMATIONEVENT_OFFSET))(this);
		}

		::System::Void _OnAnimationEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__ONANIMATIONEND_OFFSET))(this);
		}

		::System::Void _RefreshDisplay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__REFRESHDISPLAY_OFFSET))(this);
		}

		::System::Void _SetAllTextValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__SETALLTEXTVALUES_OFFSET))(this);
		}

		::System::String* _GetDisplayText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__GETDISPLAYTEXT_OFFSET))(this);
		}

		::System::Void _PlayUIState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__PLAYUISTATE_OFFSET))(this);
		}

		::System::String* _GetTypeStateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__GETTYPESTATENAME_OFFSET))(this);
		}

		::System::String* _GetSizeStateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__GETSIZESTATENAME_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirJumpTextViewModel* get__ViewModel()
		{
			return ((::RPG::Client::PixAir::PixAirJumpTextViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
