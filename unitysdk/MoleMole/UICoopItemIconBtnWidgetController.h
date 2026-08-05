#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIItemIconBtnWidgetController.h"

namespace System { class Object; }

#define MOLEMOLE_UICOOPITEMICONBTNWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x183D39B0)
#define MOLEMOLE_UICOOPITEMICONBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x183D3460)
#define MOLEMOLE_UICOOPITEMICONBTNWIDGETCONTROLLER_UPDATENEWHINT_OFFSET UNITYSDK_OFFSET(0x183D3760)
#define MOLEMOLE_UICOOPITEMICONBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x183D3C10)
#define MOLEMOLE_UICOOPITEMICONBTNWIDGETCONTROLLER__ONCLICKITEM_B__2_0_OFFSET UNITYSDK_OFFSET(0x183D3C30)
#define MOLEMOLE_UICOOPITEMICONBTNWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x183D3C40)
#define MOLEMOLE_UICOOPITEMICONBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x183D3C50)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopItemIconBtnWidgetController_TypeDefinitionIndex = 50008;

	class UICoopItemIconBtnWidgetController : public ::MoleMole::UIItemIconBtnWidgetController
	{
	public:
		::System::Boolean _isCommonDress; // 0x3D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPITEMICONBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPITEMICONBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPITEMICONBTNWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void UpdateNewHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPITEMICONBTNWIDGETCONTROLLER_UPDATENEWHINT_OFFSET))(this);
		}

		::System::Void _OnClickItem_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPITEMICONBTNWIDGETCONTROLLER__ONCLICKITEM_B__2_0_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPITEMICONBTNWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPITEMICONBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
