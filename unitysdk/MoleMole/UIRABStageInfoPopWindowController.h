#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIRABStageInfoPopWindowController_StageInfoData.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_3EFCBE3BDBBED0BB;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_BUILDLIST_OFFSET UNITYSDK_OFFSET(0x1578EA00)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_GETTEMPLATEINDEXFROMDATA_OFFSET UNITYSDK_OFFSET(0x1578F890)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1578E420)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_ONCLOSEBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1578E680)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1578F760)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1578F7F0)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1578E430)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1578E6E0)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1578F910)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER__ONUIINIT_B__7_0_OFFSET UNITYSDK_OFFSET(0x1578F980)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER__ONUIINIT_B__7_1_OFFSET UNITYSDK_OFFSET(0x1578FA00)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1578FA80)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1578FB10)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1578FB20)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1578FB30)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABStageInfoPopWindowController_TypeDefinitionIndex = 49134;

	class UIRABStageInfoPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* TxtKeyTitle; // 0x0
		// static const ::System::String* TxtKeyTitleTag; // 0x0
		::Class_2_3EFCBE3BDBBED0BB* _view; // 0x318
		::System::Collections::Generic::List_1<::MoleMole::UIRABStageInfoPopWindowController_StageInfoData>* _list; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCloseBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_ONCLOSEBTNCLICK_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BuildList(::System::Int32 currentStageId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_BUILDLIST_OFFSET))(this, currentStageId);
		}

		::System::Int32 GetTemplateIndexFromData(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_GETTEMPLATEINDEXFROMDATA_OFFSET))(this, index);
		}

		::MoleMole::ScrollViewItemWidgetController* _OnUIInit_b__7_0(::System::Func_1<::MoleMole::UIControlReference*>* ctrl)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER__ONUIINIT_B__7_0_OFFSET))(this, ctrl);
		}

		::MoleMole::ScrollViewItemWidgetController* _OnUIInit_b__7_1(::System::Func_1<::MoleMole::UIControlReference*>* ctrl)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER__ONUIINIT_B__7_1_OFFSET))(this, ctrl);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
