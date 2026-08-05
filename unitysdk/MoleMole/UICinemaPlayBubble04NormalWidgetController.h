#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_0AF6CFDC2DB32176;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER_DOWIDGETHIDE_OFFSET UNITYSDK_OFFSET(0x186966D0)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x186965F0)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186964E0)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18696570)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18696410)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18696470)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER_PLAYBUBBLEANIMATION_OFFSET UNITYSDK_OFFSET(0x18696640)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18696790)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186967F0)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18696880)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18696910)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186969A0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaPlayBubble04NormalWidgetController_TypeDefinitionIndex = 73893;

	class UICinemaPlayBubble04NormalWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_0AF6CFDC2DB32176* _view; // 0x2C0
		::System::Threading::CancellationTokenSource* animTokenSource; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Class_2_0AF6CFDC2DB32176* GetView()
		{
			return ((::Class_2_0AF6CFDC2DB32176*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid PlayBubbleAnimation(::System::String* animString, ::System::Boolean isHide)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER_PLAYBUBBLEANIMATION_OFFSET))(this, animString, isHide);
		}

		::System::Void DoWidgetHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER_DOWIDGETHIDE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
