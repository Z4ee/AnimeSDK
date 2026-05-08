#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_EC28E1D3A39EE7DE_13;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15B7A460)
#define MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15B7A4D0)
#define MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_ONFOCUS_OFFSET UNITYSDK_OFFSET(0x15B7A990)
#define MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x15B7AB10)
#define MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15B7A570)
#define MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15B7ADA0)
#define MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_TABIDXCHANGED_OFFSET UNITYSDK_OFFSET(0x15B7B130)
#define MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15B7B1C0)
#define MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15B7B220)
#define MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x15B7B2C0)
#define MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15B7B350)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBlindBoxWidgetController_TypeDefinitionIndex = 48021;

	class UIActivityBlindBoxWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Action_1<::System::Int32>* OnTabIdxChanged; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_EC28E1D3A39EE7DE_13* get__viewModel()
		{
			return ((::Class_2_EC28E1D3A39EE7DE_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnFocus(::System::Boolean focus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_ONFOCUS_OFFSET))(this, focus);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void TabIdxChanged(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_TABIDXCHANGED_OFFSET))(this, idx);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
