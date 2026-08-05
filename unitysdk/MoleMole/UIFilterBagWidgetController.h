#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_C2158DDF8D8502CE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER_GET_ITEMINFOROOT_OFFSET UNITYSDK_OFFSET(0x183DF7A0)
#define MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x183DF730)
#define MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x183DFA00)
#define MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x183DFAA0)
#define MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x183DFC60)
#define MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x183DFCC0)
#define MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x183DFD60)

namespace MoleMole
{
	inline static constexpr unsigned int UIFilterBagWidgetController_TypeDefinitionIndex = 42841;

	class UIFilterBagWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_C2158DDF8D8502CE* get__viewModel()
		{
			return ((::Class_2_C2158DDF8D8502CE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_ItemInfoRoot()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER_GET_ITEMINFOROOT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILTERBAGWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
