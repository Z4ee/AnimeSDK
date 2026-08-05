#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_B236BAA0027D4C6B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UICoopLevelUnlockRowWidgetController_Context; }
namespace System { class Object; }

#define MOLEMOLE_UICOOPLEVELUNLOCKROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x183D4350)
#define MOLEMOLE_UICOOPLEVELUNLOCKROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x183D43C0)
#define MOLEMOLE_UICOOPLEVELUNLOCKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x183D4480)
#define MOLEMOLE_UICOOPLEVELUNLOCKROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x183D46C0)
#define MOLEMOLE_UICOOPLEVELUNLOCKROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x183D4540)
#define MOLEMOLE_UICOOPLEVELUNLOCKROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x183D4760)
#define MOLEMOLE_UICOOPLEVELUNLOCKROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x183D4770)
#define MOLEMOLE_UICOOPLEVELUNLOCKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x183D4810)
#define MOLEMOLE_UICOOPLEVELUNLOCKROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x183D48B0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopLevelUnlockRowWidgetController_TypeDefinitionIndex = 86260;

	class UICoopLevelUnlockRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELUNLOCKROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_B236BAA0027D4C6B* get__viewModel()
		{
			return ((::Class_2_B236BAA0027D4C6B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELUNLOCKROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELUNLOCKROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELUNLOCKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELUNLOCKROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshView(::MoleMole::UICoopLevelUnlockRowWidgetController_Context* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopLevelUnlockRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELUNLOCKROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELUNLOCKROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELUNLOCKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELUNLOCKROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
