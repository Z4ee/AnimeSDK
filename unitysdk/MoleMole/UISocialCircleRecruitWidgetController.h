#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_B196590B3E289741.h"

class Class_1_D7C05CE3854E5916;
class Class_2_1E2C28EB5494586C;
class Class_2_4BF66B2CDED97DD9;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x145864F0)
#define MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER_INPUTACTIONCHECK_OFFSET UNITYSDK_OFFSET(0x14587100)
#define MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14586560)
#define MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER_ONINPUTCHANGED_OFFSET UNITYSDK_OFFSET(0x14587A30)
#define MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER_ONINPUTFIELDDESELECT_OFFSET UNITYSDK_OFFSET(0x14587520)
#define MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER_ONINPUTFIELDSELECT_OFFSET UNITYSDK_OFFSET(0x14587180)
#define MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14586B20)
#define MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14587090)
#define MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14587D60)
#define MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER__ONCREATEVIEWMODEL_B__4_0_OFFSET UNITYSDK_OFFSET(0x14587DC0)
#define MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14587EA0)
#define MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14587F40)
#define MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14587FE0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleRecruitWidgetController_TypeDefinitionIndex = 41247;

	class UISocialCircleRecruitWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_1_D7C05CE3854E5916* handler; // 0x2B8
		::Class_2_1E2C28EB5494586C* TextValidate; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_4BF66B2CDED97DD9* get__viewModel()
		{
			return ((::Class_2_4BF66B2CDED97DD9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean InputActionCheck(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER_INPUTACTIONCHECK_OFFSET))(this, inputAction);
		}

		::System::Void OnInputFieldSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER_ONINPUTFIELDSELECT_OFFSET))(this);
		}

		::System::Void OnInputFieldDeselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER_ONINPUTFIELDDESELECT_OFFSET))(this);
		}

		::System::Void OnInputChanged(::System::String* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER_ONINPUTCHANGED_OFFSET))(this, input);
		}

		::Struct_2_B196590B3E289741 _OnCreateViewModel_b__4_0(::System::String* text, ::System::Int32 charIndex, ::System::Char addedChar)
		{
			return ((::Struct_2_B196590B3E289741(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER__ONCREATEVIEWMODEL_B__4_0_OFFSET))(this, text, charIndex, addedChar);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLERECRUITWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
