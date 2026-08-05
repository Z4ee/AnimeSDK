#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_79F6D62CE30E3F8E_137;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFishingContestTipsPopWindowController_StarInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17D88270)
#define MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17D897E0)
#define MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17D88590)
#define MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17D88480)
#define MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17D89870)
#define MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17D88280)
#define MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D88410)
#define MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D898E0)
#define MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER__ONUIINIT_B__8_0_OFFSET UNITYSDK_OFFSET(0x17D89970)
#define MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17D89980)
#define MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17D89A10)
#define MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17D89A20)
#define MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17D89AE0)
#define MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17D89AF0)
#define MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D89B00)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishingContestTipsPopWindowController_TypeDefinitionIndex = 60292;

	class UIFishingContestTipsPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* PathFormat; // 0x0
		// static const ::System::String* SpecialMat; // 0x0
		::Class_2_79F6D62CE30E3F8E_137* _view; // 0x318
		::System::Collections::Generic::List_1<::MoleMole::UIFishingContestTipsPopWindowController_StarInfo*>* _starInfos; // 0x320
		::System::Boolean _fadeing; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER__ONUIINIT_B__8_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
