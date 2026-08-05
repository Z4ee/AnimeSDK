#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_0096754AC2F6E253_40;
namespace MoleMole { class UIAnnounceContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x193457C0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_GETCOUNTDOWNTEXT_OFFSET UNITYSDK_OFFSET(0x19345CE0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_GET_ISIGNOREINPUT_OFFSET UNITYSDK_OFFSET(0x193449D0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_GET_ISSHOWINGANNOUNCE_OFFSET UNITYSDK_OFFSET(0x193449E0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_GET_PERMANENT_OFFSET UNITYSDK_OFFSET(0x193449C0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x193449B0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x193456C0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_ONSHOWFINISH_OFFSET UNITYSDK_OFFSET(0x19345C40)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19345630)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19345750)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19344A40)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_SETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x193451A0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_SETSCROLLTEXT_OFFSET UNITYSDK_OFFSET(0x19344CE0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_SHOWUIANNOUNCECONTEXT_OFFSET UNITYSDK_OFFSET(0x19344B30)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_TICKCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x193459D0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_TICKSCROLLTEXT_OFFSET UNITYSDK_OFFSET(0x19345AA0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19345EE0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER__ONSHOWFINISH_B__24_0_OFFSET UNITYSDK_OFFSET(0x19345F40)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x193460A0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19346130)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x193461F0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19346200)

namespace MoleMole
{
	inline static constexpr unsigned int UIAnnouncePopWindowController_TypeDefinitionIndex = 78014;

	class UIAnnouncePopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::UInt16 CountDownShowSeconds = 0xA; // 0x0
		::Class_2_0096754AC2F6E253_40* _view; // 0x318
		::MoleMole::UIAnnounceContext* context; // 0x320
		::System::Int64 closeTimeStamp; // 0x328
		::System::Single scrollSpeed; // 0x330
		::System::Boolean playfinishAnim; // 0x334
		::UnityEngine::Vector2 rightPos; // 0x338
		::UnityEngine::Vector2 leftPos; // 0x340
		::System::String* countDownText; // 0x348
		::System::UInt32 countDownCloseTime; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_Permanent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_GET_PERMANENT_OFFSET))(this);
		}

		::System::Boolean get_IsIgnoreInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_GET_ISIGNOREINPUT_OFFSET))(this);
		}

		::System::Boolean get_isShowingAnnounce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_GET_ISSHOWINGANNOUNCE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void ShowUIAnnounceContext(::MoleMole::UIAnnounceContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAnnounceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_SHOWUIANNOUNCECONTEXT_OFFSET))(this, context);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnShowFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_ONSHOWFINISH_OFFSET))(this);
		}

		::System::Void TickCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_TICKCOUNTDOWN_OFFSET))(this);
		}

		::System::Void TickScrollText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_TICKSCROLLTEXT_OFFSET))(this);
		}

		::System::Void SetScrollText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_SETSCROLLTEXT_OFFSET))(this, text);
		}

		::System::String* GetCountDownText(::System::TimeSpan ts)
		{
			return ((::System::String*(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_GETCOUNTDOWNTEXT_OFFSET))(this, ts);
		}

		::System::Void SetCountDown(::System::String* text, ::System::Int64 endTime, ::System::UInt32 remainTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_SETCOUNTDOWN_OFFSET))(this, text, endTime, remainTime);
		}

		::System::Void _OnShowFinish_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER__ONSHOWFINISH_B__24_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
