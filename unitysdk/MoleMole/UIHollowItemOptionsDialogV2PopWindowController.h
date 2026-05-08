#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIInlevelHollowCardOptionsDialogV2PopWindowController.h"

class MonoUITableScrollV2;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralToggleWidgetControllerWithModel; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_CREATEARTIFACTITEMROWV2_OFFSET UNITYSDK_OFFSET(0x14A09090)
#define MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_CREATEARTIFACTITEMROW_OFFSET UNITYSDK_OFFSET(0x14A09000)
#define MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_CREATECARDROWV2_OFFSET UNITYSDK_OFFSET(0x14A091B0)
#define MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_CREATECARDROW_OFFSET UNITYSDK_OFFSET(0x14A08EE0)
#define MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_CREATEHOLLOWCHOICEITEMROW_OFFSET UNITYSDK_OFFSET(0x14A09120)
#define MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_CREATERELICITEMROW_OFFSET UNITYSDK_OFFSET(0x14A08F70)
#define MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_GETTEMPLATEINDEXFROMDATA_OFFSET UNITYSDK_OFFSET(0x14A09240)
#define MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_ONTOGGLECHANGE_OFFSET UNITYSDK_OFFSET(0x14A08690)
#define MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14A080D0)
#define MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14A083E0)
#define MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_REFRESHTOGGLETEXT_OFFSET UNITYSDK_OFFSET(0x14A08B50)
#define MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_SCROLLWIDGETFUNC_OFFSET UNITYSDK_OFFSET(0x14A08C00)
#define MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_SETTOGGLE_OFFSET UNITYSDK_OFFSET(0x14A08350)
#define MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14A09330)
#define MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14A09390)
#define MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14A093A0)
#define MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER___BASE_SCROLLWIDGETFUNC_OFFSET UNITYSDK_OFFSET(0x14A093B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowItemOptionsDialogV2PopWindowController_TypeDefinitionIndex = 38052;

	class UIHollowItemOptionsDialogV2PopWindowController : public ::MoleMole::UIInlevelHollowCardOptionsDialogV2PopWindowController
	{
	public:
		::MoleMole::UIGeneralToggleWidgetControllerWithModel* _toggleDetail; // 0x3F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetToggle(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_SETTOGGLE_OFFSET))(this, enable);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnToggleChange(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_ONTOGGLECHANGE_OFFSET))(this, isOn);
		}

		::System::Void RefreshToggleText(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_REFRESHTOGGLETEXT_OFFSET))(this, isOn);
		}

		::System::Void ScrollWidgetFunc(::MonoUITableScrollV2* scroll)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_SCROLLWIDGETFUNC_OFFSET))(this, scroll);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateCardRow(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_CREATECARDROW_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateRelicItemRow(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_CREATERELICITEMROW_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateArtifactItemRow(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_CREATEARTIFACTITEMROW_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateArtifactItemRowV2(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_CREATEARTIFACTITEMROWV2_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateHollowChoiceItemRow(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_CREATEHOLLOWCHOICEITEMROW_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateCardRowV2(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_CREATECARDROWV2_OFFSET))(this, arg);
		}

		::System::Int32 GetTemplateIndexFromData(::System::Int32 dataIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER_GETTEMPLATEINDEXFROMDATA_OFFSET))(this, dataIndex);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_ScrollWidgetFunc(::MonoUITableScrollV2* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMOPTIONSDIALOGV2POPWINDOWCONTROLLER___BASE_SCROLLWIDGETFUNC_OFFSET))(this, P0);
		}
	};
}
