#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_49ABC235CB23B56F.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_EFAE02082D309C98;
class Class_3_EA9E55D1590FA04D_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralToggleWidgetController; }

#define MOLEMOLE_UIRABLEVELPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x160BE1E0)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x160BE090)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER_GET__VIEW_OFFSET UNITYSDK_OFFSET(0x160BE100)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x160BE1F0)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x160BDC50)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x160BE5E0)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x160BE950)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x160BED20)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x160BE290)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER_REFRESHISON_OFFSET UNITYSDK_OFFSET(0x160BEEF0)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER_REFRESHNOTISON_OFFSET UNITYSDK_OFFSET(0x160BF0F0)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0x160BE8B0)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x160BF2F0)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER__ONSHOW_B__13_0_OFFSET UNITYSDK_OFFSET(0x160BF300)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER__ONUIINIT_B__16_0_OFFSET UNITYSDK_OFFSET(0x160BF370)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x160BF6F0)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x160BF790)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x160BF820)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x160BF830)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x160BF8F0)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x160BF900)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABLevelPageController_TypeDefinitionIndex = 82371;

	class UIRABLevelPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Struct_2_49ABC235CB23B56F timerHandle; // 0x318
		::MoleMole::UIGeneralToggleWidgetController* viewUnCollectToggle; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_EFAE02082D309C98* get__viewModel()
		{
			return ((::Class_2_EFAE02082D309C98*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::Class_3_EA9E55D1590FA04D_2* get__view()
		{
			return ((::Class_3_EA9E55D1590FA04D_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER_GET__VIEW_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER_TICK_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void RefreshIsOn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER_REFRESHISON_OFFSET))(this);
		}

		::System::Void RefreshNotIsOn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER_REFRESHNOTISON_OFFSET))(this);
		}

		::System::Void _OnShow_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER__ONSHOW_B__13_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__16_0(::System::Boolean isOn, ::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER__ONUIINIT_B__16_0_OFFSET))(this, isOn, isInit);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
