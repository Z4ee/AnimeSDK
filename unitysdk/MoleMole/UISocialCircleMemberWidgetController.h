#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_9816D80FAD226AEA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UISOCIALCIRCLEMEMBERWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x175A7C20)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERWIDGETCONTROLLER_MANUALUPDATESOCIALCIRCLEMEMBERLISTHANDLE_OFFSET UNITYSDK_OFFSET(0x175A7EE0)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x175A7C90)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x175A7F90)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x175A7D50)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x175A8000)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x175A8060)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x175A8100)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x175A8190)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleMemberWidgetController_TypeDefinitionIndex = 68693;

	class UISocialCircleMemberWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_9816D80FAD226AEA* get__viewModel()
		{
			return ((::Class_2_9816D80FAD226AEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void ManualUpdateSocialCircleMemberListHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERWIDGETCONTROLLER_MANUALUPDATESOCIALCIRCLEMEMBERLISTHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
