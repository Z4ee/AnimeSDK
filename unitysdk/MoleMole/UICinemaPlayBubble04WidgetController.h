#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_382A906A6D92F5A5;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_DOWIDGETHIDE_OFFSET UNITYSDK_OFFSET(0x152F5AB0)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x152F58C0)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x152F57B0)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x152F5840)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x152F56E0)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x152F5740)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_PLAYBUBBLEANIMATION_OFFSET UNITYSDK_OFFSET(0x152F5910)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_PLAYRIGHTSTATEANIMATION_OFFSET UNITYSDK_OFFSET(0x152F59A0)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x152F5B90)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x152F5BF0)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x152F5C80)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x152F5D10)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x152F5DA0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaPlayBubble04WidgetController_TypeDefinitionIndex = 39345;

	class UICinemaPlayBubble04WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_382A906A6D92F5A5* _view; // 0x2B8
		::System::Threading::CancellationTokenSource* animTokenSource; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Class_2_382A906A6D92F5A5* GetView()
		{
			return ((::Class_2_382A906A6D92F5A5*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid PlayBubbleAnimation(::System::String* animString, ::System::Boolean isHide)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_PLAYBUBBLEANIMATION_OFFSET))(this, animString, isHide);
		}

		::System::Void PlayRightStateAnimation(::System::Boolean isRight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_PLAYRIGHTSTATEANIMATION_OFFSET))(this, isRight);
		}

		::System::Void DoWidgetHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_DOWIDGETHIDE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
