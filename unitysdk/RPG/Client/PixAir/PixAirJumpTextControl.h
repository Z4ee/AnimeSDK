#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::PixAir { class PixAirJumpTextViewModel; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A0CB300)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0CB790)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__GETDISPLAYTEXT_OFFSET UNITYSDK_OFFSET(0x1A0CB520)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__GETSIZESTATENAME_OFFSET UNITYSDK_OFFSET(0x1A0CB6F0)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__GETTYPESTATENAME_OFFSET UNITYSDK_OFFSET(0x1A0CB650)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__ONANIMATIONEND_OFFSET UNITYSDK_OFFSET(0x1A0CB290)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A0CB1B0)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A0CAE70)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__PLAYUISTATE_OFFSET UNITYSDK_OFFSET(0x1A0CB470)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__REFRESHDISPLAY_OFFSET UNITYSDK_OFFSET(0x1A0CB230)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__REGISTERANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1A0CB0D0)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTCONTROL__SETALLTEXTVALUES_OFFSET UNITYSDK_OFFSET(0x1A0CB3E0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirJumpTextControl_TypeDefinitionIndex = 75216;

	class PixAirJumpTextControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::UIStateCtrl* _UIStateCtrl; // 0x38
		::RPG::Client::RPGAnimationEvent* _AnimationEvent; // 0x40
		::UnityEngine::Animation* _Animation; // 0x48
		::UnityEngine::UI::Text* _TxtSmall; // 0x50
		::UnityEngine::UI::Text* _TxtMedium; // 0x58
		::UnityEngine::UI::Text* _TxtLarge; // 0x60

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
