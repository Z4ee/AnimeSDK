#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_AD1CFCD3D39E1033;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRABDepositoryElementTextTagRowWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1757BFF0)
#define MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1757C2D0)
#define MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1757C370)
#define MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1757C060)
#define MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1757C150)
#define MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1757C430)
#define MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1757C440)
#define MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1757C4E0)
#define MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1757C580)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryElementTextTagRowWidgetController_TypeDefinitionIndex = 84726;

	class UIRABDepositoryElementTextTagRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_AD1CFCD3D39E1033* get__viewModel()
		{
			return ((::Class_2_AD1CFCD3D39E1033*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MoleMole::UIRABDepositoryElementTextTagRowWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRABDepositoryElementTextTagRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
