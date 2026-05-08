#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_F20F831D471F73F2;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_DOCLICK_OFFSET UNITYSDK_OFFSET(0x158D80A0)
#define MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_GETTIMETEXT_OFFSET UNITYSDK_OFFSET(0x158D7780)
#define MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x158D7670)
#define MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x158D76E0)
#define MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x158D7FA0)
#define MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x158D7B00)
#define MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_SETWEAKFOCUSANIM_OFFSET UNITYSDK_OFFSET(0x158D8160)
#define MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x158D8300)
#define MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x158D8310)
#define MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x158D83B0)
#define MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x158D8440)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopHistoryTabWidgetController_TypeDefinitionIndex = 60512;

	class UICoopHistoryTabWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Int32 index; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_F20F831D471F73F2* get__viewModel()
		{
			return ((::Class_2_F20F831D471F73F2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::String* GetTimeText(::System::Int64 time)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_GETTIMETEXT_OFFSET))(this, time);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* info, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, info, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void DoClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_DOCLICK_OFFSET))(this);
		}

		::System::Void SetWeakFocusAnim(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_SETWEAKFOCUSANIM_OFFSET))(this, enable);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
