#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_86FD0075D1E5CD44_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17E0F020)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x17E0F130)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONPLAYGETREWARDANI_OFFSET UNITYSDK_OFFSET(0x17E10030)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17E0F1E0)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17E0F0B0)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17E0EDB0)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17E0EFB0)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x17E0FD40)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x17E0F340)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E102B0)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER__ONPLAYGETREWARDANI_B__8_0_OFFSET UNITYSDK_OFFSET(0x17E10390)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x17E10300)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17E104C0)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x17E10550)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17E105E0)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17E10680)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17E10710)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17E107A0)

namespace MoleMole
{
	inline static constexpr unsigned int UINyakichiMedalItemWidgetController_TypeDefinitionIndex = 71484;

	class UINyakichiMedalItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_86FD0075D1E5CD44_1* _view; // 0x2F0
		::System::Int32 questID; // 0x2F8
		::MoleMole::UIGeneralPopUpHintWidgetController* hint; // 0x300
		::System::String* GetRewardFadein; // 0x308
		::System::String* GetRewardFadeout; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_SETEMPTY_OFFSET))(this);
		}

		::System::Void OnPlayGetRewardAni()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONPLAYGETREWARDANI_OFFSET))(this);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_UPDATEUI_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1_0(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET))(this, arg);
		}

		::System::Void _OnPlayGetRewardAni_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER__ONPLAYGETREWARDANI_B__8_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
