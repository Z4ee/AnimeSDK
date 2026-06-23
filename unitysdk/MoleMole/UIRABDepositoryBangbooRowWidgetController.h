#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_8966FA72AE2DDDDA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRABDepositoryBangbooRowWidgetController_Context; }
namespace System { class Object; }

#define MOLEMOLE_UIRABDEPOSITORYBANGBOOROWWIDGETCONTROLLER_GET_CONTEXTVALUE_OFFSET UNITYSDK_OFFSET(0x1578A940)
#define MOLEMOLE_UIRABDEPOSITORYBANGBOOROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1578A8D0)
#define MOLEMOLE_UIRABDEPOSITORYBANGBOOROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1578AA80)
#define MOLEMOLE_UIRABDEPOSITORYBANGBOOROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1578ACD0)
#define MOLEMOLE_UIRABDEPOSITORYBANGBOOROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1578AB20)
#define MOLEMOLE_UIRABDEPOSITORYBANGBOOROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1578AE90)
#define MOLEMOLE_UIRABDEPOSITORYBANGBOOROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1578AEA0)
#define MOLEMOLE_UIRABDEPOSITORYBANGBOOROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1578AF40)
#define MOLEMOLE_UIRABDEPOSITORYBANGBOOROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1578AFE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryBangbooRowWidgetController_TypeDefinitionIndex = 52050;

	class UIRABDepositoryBangbooRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYBANGBOOROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_8966FA72AE2DDDDA* get__viewModel()
		{
			return ((::Class_2_8966FA72AE2DDDDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYBANGBOOROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::MoleMole::UIRABDepositoryBangbooRowWidgetController_Context* get_ContextValue()
		{
			return ((::MoleMole::UIRABDepositoryBangbooRowWidgetController_Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYBANGBOOROWWIDGETCONTROLLER_GET_CONTEXTVALUE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYBANGBOOROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYBANGBOOROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYBANGBOOROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYBANGBOOROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYBANGBOOROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYBANGBOOROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
