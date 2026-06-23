#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_88D060141644EFC7.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_C31F776B3FE6F486_4;
class Class_2_53862C21928DCAA5;
class Class_2_9D960B88876DE122;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_GETSORTEDDATALIST_OFFSET UNITYSDK_OFFSET(0x15788F00)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x157897C0)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x157896B0)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x15789610)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15789560)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15789740)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15788BE0)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15788CD0)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15789930)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x15789A10)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER__ONUIOPEN_B__2_0_OFFSET UNITYSDK_OFFSET(0x15789A90)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15789BB0)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x15789C40)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15789CD0)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15789D70)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15789E00)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15789E90)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDataStatWidgetController_TypeDefinitionIndex = 61597;

	class UIRABDataStatWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_53862C21928DCAA5* _view; // 0x2C0
		::Class_2_9D960B88876DE122* _inLevelData; // 0x2C8
		::System::Collections::Generic::List_1<::Class_1_C31F776B3FE6F486_4*>* _dataCache; // 0x2D0
		::Enum_3_88D060141644EFC7 _currentType; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_C31F776B3FE6F486_4*>* GetSortedDataList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_C31F776B3FE6F486_4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_GETSORTEDDATALIST_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _OnUIInit_b__1_0(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET))(this, reference);
		}

		::System::Void _OnUIOpen_b__2_0(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER__ONUIOPEN_B__2_0_OFFSET))(this, index);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
