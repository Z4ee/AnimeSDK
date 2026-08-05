#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/MoleMole/UIZenkovWorkbenchListWidgetController_TitleState.h"

class Class_1_1EA8435E138F2E03;
class Class_2_5E2149D5B3462FFC;
class Class_3_A0D52B59CDC3E0B7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIZenkovWorkbenchDialogPageController; }
namespace MoleMole { class UIZenkovWorkbenchRowWidgetController; }
namespace System { class String; }

#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_BINDBENCHNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x11E55620)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_GET_ZENKOVWORKBENCHROW00_OFFSET UNITYSDK_OFFSET(0x11E550E0)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_GET_ZENKOVWORKBENCHROW01_OFFSET UNITYSDK_OFFSET(0x11E55100)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11E55320)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11E553B0)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11E55120)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11E552B0)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x11E55440)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_SETTEXT_OFFSET UNITYSDK_OFFSET(0x11E554B0)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_SETTITLESTATE_OFFSET UNITYSDK_OFFSET(0x11E55570)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_SET_ZENKOVWORKBENCHROW00_OFFSET UNITYSDK_OFFSET(0x11E550F0)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_SET_ZENKOVWORKBENCHROW01_OFFSET UNITYSDK_OFFSET(0x11E55110)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11E556A0)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER__ONUIINIT_B__12_0_OFFSET UNITYSDK_OFFSET(0x11E55700)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11E557F0)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11E55880)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11E55910)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11E559A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWorkbenchListWidgetController_TypeDefinitionIndex = 61058;

	class UIZenkovWorkbenchListWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_5E2149D5B3462FFC* _view; // 0x2C0
		::Class_3_A0D52B59CDC3E0B7* _bench; // 0x2C8
		::System::Int32 _benchId; // 0x2D0
		::MoleMole::UIZenkovWorkbenchDialogPageController* _panel; // 0x2D8
		::MoleMole::UIZenkovWorkbenchRowWidgetController* _ZenkovWorkbenchRow00_k__BackingField; // 0x2E0
		::MoleMole::UIZenkovWorkbenchRowWidgetController* _ZenkovWorkbenchRow01_k__BackingField; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIZenkovWorkbenchRowWidgetController* get_ZenkovWorkbenchRow00()
		{
			return ((::MoleMole::UIZenkovWorkbenchRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_GET_ZENKOVWORKBENCHROW00_OFFSET))(this);
		}

		::System::Void set_ZenkovWorkbenchRow00(::MoleMole::UIZenkovWorkbenchRowWidgetController* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovWorkbenchRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_SET_ZENKOVWORKBENCHROW00_OFFSET))(this, value);
		}

		::MoleMole::UIZenkovWorkbenchRowWidgetController* get_ZenkovWorkbenchRow01()
		{
			return ((::MoleMole::UIZenkovWorkbenchRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_GET_ZENKOVWORKBENCHROW01_OFFSET))(this);
		}

		::System::Void set_ZenkovWorkbenchRow01(::MoleMole::UIZenkovWorkbenchRowWidgetController* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovWorkbenchRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_SET_ZENKOVWORKBENCHROW01_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetData(::MoleMole::UIZenkovWorkbenchDialogPageController* panel, ::Class_3_A0D52B59CDC3E0B7* bench, ::System::Int32 benchId)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovWorkbenchDialogPageController*, ::Class_3_A0D52B59CDC3E0B7*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_SETDATA_OFFSET))(this, panel, bench, benchId);
		}

		::System::Void SetText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_SETTEXT_OFFSET))(this, text);
		}

		::System::Void SetTitleState(::MoleMole::UIZenkovWorkbenchListWidgetController_TitleState state)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovWorkbenchListWidgetController_TitleState))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_SETTITLESTATE_OFFSET))(this, state);
		}

		::System::Void BindBenchNotification(::Class_1_1EA8435E138F2E03* benchNode)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1EA8435E138F2E03*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_BINDBENCHNOTIFICATION_OFFSET))(this, benchNode);
		}

		::System::Void _OnUIInit_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER__ONUIINIT_B__12_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
