#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_1A2217F61195ED80;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01WIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16786E70)
#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01WIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16786EE0)
#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01WIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16786FA0)
#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16787100)
#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01WIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16787160)
#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01WIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16787200)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapLeftTastListRow01WidgetController_TypeDefinitionIndex = 46203;

	class UIUrbanMapLeftTastListRow01WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_1A2217F61195ED80* get__viewModel()
		{
			return ((::Class_2_1A2217F61195ED80*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01WIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01WIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01WIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01WIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01WIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
