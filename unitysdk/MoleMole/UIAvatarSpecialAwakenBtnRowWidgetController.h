#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_3_5333182AB57CEC76;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }

#define MOLEMOLE_UIAVATARSPECIALAWAKENBTNROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1708F260)
#define MOLEMOLE_UIAVATARSPECIALAWAKENBTNROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1708F2D0)
#define MOLEMOLE_UIAVATARSPECIALAWAKENBTNROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1708F400)
#define MOLEMOLE_UIAVATARSPECIALAWAKENBTNROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1708F390)
#define MOLEMOLE_UIAVATARSPECIALAWAKENBTNROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1708F530)
#define MOLEMOLE_UIAVATARSPECIALAWAKENBTNROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1708F540)
#define MOLEMOLE_UIAVATARSPECIALAWAKENBTNROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1708F5E0)
#define MOLEMOLE_UIAVATARSPECIALAWAKENBTNROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1708F680)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSpecialAwakenBtnRowWidgetController_TypeDefinitionIndex = 51055;

	class UIAvatarSpecialAwakenBtnRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENBTNROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_3_5333182AB57CEC76* get__viewModel()
		{
			return ((::Class_3_5333182AB57CEC76*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENBTNROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENBTNROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENBTNROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENBTNROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENBTNROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENBTNROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENBTNROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
