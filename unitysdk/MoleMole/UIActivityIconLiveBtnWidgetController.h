#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_2_74EAE7375772B9FE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x192DCBD0)
#define MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x192DD2B0)
#define MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x192DCC60)
#define MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x192DC9E0)
#define MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x192DCB60)
#define MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x192DCCE0)
#define MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x192DD490)
#define MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x192DD4F0)
#define MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x192DD580)
#define MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x192DD610)
#define MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x192DD6A0)
#define MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x192DD730)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityIconLiveBtnWidgetController_TypeDefinitionIndex = 74681;

	class UIActivityIconLiveBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_74EAE7375772B9FE* _view; // 0x2C0
		::Class_1_D375C91CCE5D3999* _rootActivity; // 0x2C8
		::Class_1_D375C91CCE5D3999* _curActivity; // 0x2D0
		::System::Boolean _isSelect; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::Class_1_D375C91CCE5D3999* activity, ::System::Int32 index, ::System::Action_1<::System::Int32>* onClick, ::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*, ::System::Int32, ::System::Action_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, activity, index, onClick, isSelect);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
