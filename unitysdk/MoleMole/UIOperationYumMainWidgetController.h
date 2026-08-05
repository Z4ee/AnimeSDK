#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_341;
class Class_2_79AE422BA06F6D26_202;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0x16739870)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16739B30)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_ONGOBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1673A790)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16739C40)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16739BC0)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16739880)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16739AC0)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16739E20)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_TRYPLAYANIMATION_1_OFFSET UNITYSDK_OFFSET(0x1673B180)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_TRYPLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1673AA90)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1673B870)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER__ONUIINIT_B__7_0_OFFSET UNITYSDK_OFFSET(0x1673B8D0)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1673B910)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1673B9A0)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1673BA40)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1673BAD0)
#define MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1673BB60)

namespace MoleMole
{
	inline static constexpr unsigned int UIOperationYumMainWidgetController_TypeDefinitionIndex = 64009;

	class UIOperationYumMainWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_202* _view; // 0x2C0
		::System::Int32 _questID; // 0x2C8
		::Class_2_208CC9941471731A_341* _config; // 0x2D0
		::System::Boolean _toShowAnimation; // 0x2D8
		::System::String* _npcName; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_QuestID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_GET_QUESTID_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnGoBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_ONGOBTNCLICK_OFFSET))(this);
		}

		::System::Single TryPlayAnimation(::System::Boolean& playedFinishAni)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_TRYPLAYANIMATION_OFFSET))(this, playedFinishAni);
		}

		::System::Single TryPlayAnimation_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER_TRYPLAYANIMATION_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__7_0(::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER__ONUIINIT_B__7_0_OFFSET))(this, b);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMMAINWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
