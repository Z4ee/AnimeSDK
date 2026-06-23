#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_81D34D116310A358;
class Class_1_BE6BF7909AD9D940;
class Class_2_79433D17E9DE75DE;
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_BINDPLATFORMICONBTNLONGPRESS_OFFSET UNITYSDK_OFFSET(0x177173A0)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_INITPLATFORMUIVIEW_OFFSET UNITYSDK_OFFSET(0x17716D80)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17716190)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x177162A0)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_ONSWITCHPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x17717620)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17716220)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x177160D0)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_SHOWPLATFORMUI_OFFSET UNITYSDK_OFFSET(0x17717110)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x177176B0)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER__INITPLATFORMUIVIEW_G__SETUPPLATFORMUI_6_0_OFFSET UNITYSDK_OFFSET(0x17717300)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x177176C0)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17717750)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x177177F0)
#define MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17717880)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendInviteRowWidgetController_TypeDefinitionIndex = 51995;

	class UIFriendInviteRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79433D17E9DE75DE* _view; // 0x2F0
		::Class_1_81D34D116310A358* _inviteRequest; // 0x2F8
		::Class_1_BE6BF7909AD9D940* _briefInfo; // 0x300
		::System::Boolean _allowShowPlatform; // 0x308
		::System::Boolean _canSwitchPlatformInfo; // 0x309
		::System::Boolean _isShowingPlatform; // 0x30A
		::UnityEngine::UI::Extension::UILocalizationText* displayNameText; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void InitPlatformUIVIew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_INITPLATFORMUIVIEW_OFFSET))(this);
		}

		::System::Void ShowPlatformUI(::System::Boolean isShowingPlatformInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_SHOWPLATFORMUI_OFFSET))(this, isShowingPlatformInfo);
		}

		::System::Void OnSwitchPlatformInfo(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_ONSWITCHPLATFORMINFO_OFFSET))(this, args);
		}

		::System::Void BindPlatformIconBtnLongPress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER_BINDPLATFORMICONBTNLONGPRESS_OFFSET))(this);
		}

		::System::Void _InitPlatformUIVIew_g__SetupPlatformUI_6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER__INITPLATFORMUIVIEW_G__SETUPPLATFORMUI_6_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINVITEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
