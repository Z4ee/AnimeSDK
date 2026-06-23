#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_41071AA7FA6922A7;
namespace MoleMole { class UIBallGameRoleTabWidgetController_Data; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17344740)
#define MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER_ONCLICKROLETABBUTTON_OFFSET UNITYSDK_OFFSET(0x17344C80)
#define MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x173447B0)
#define MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x173449D0)
#define MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17344850)
#define MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17344A90)
#define MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17344F50)
#define MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17344F60)
#define MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17345000)
#define MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x173450A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameRoleTabWidgetController_TypeDefinitionIndex = 64759;

	class UIBallGameRoleTabWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_41071AA7FA6922A7* get__viewModel()
		{
			return ((::Class_2_41071AA7FA6922A7*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MoleMole::UIBallGameRoleTabWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBallGameRoleTabWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void OnClickRoleTabButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER_ONCLICKROLETABBUTTON_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
