#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_4AE9DE3D2ED9A9E2;
class Class_2_79F6D62CE30E3F8E_146;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_CANTAKEREWARD_OFFSET UNITYSDK_OFFSET(0x15F48020)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_GETITEMLIST_OFFSET UNITYSDK_OFFSET(0x15F480A0)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F471A0)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_ONROWBTNCLICK_OFFSET UNITYSDK_OFFSET(0x15F480F0)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15F472B0)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F47230)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F47040)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_REFRESHCOMMONUI_OFFSET UNITYSDK_OFFSET(0x15F473B0)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15F483F0)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F48480)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15F48510)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F485B0)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F48640)

namespace MoleMole
{
	inline static constexpr unsigned int UISpecialGiftSignInRowWidgetController_TypeDefinitionIndex = 80742;

	class UISpecialGiftSignInRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_146* _view; // 0x2F0
		::Class_1_4AE9DE3D2ED9A9E2* _loginFundRewardData; // 0x2F8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _itemList; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshCommonUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_REFRESHCOMMONUI_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetItemList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_GETITEMLIST_OFFSET))(this);
		}

		::System::Void OnRowBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_ONROWBTNCLICK_OFFSET))(this);
		}

		::System::Boolean CanTakeReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_CANTAKEREWARD_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
