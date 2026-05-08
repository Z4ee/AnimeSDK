#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_1685EC66FBD28897;
class Class_2_79F6D62CE30E3F8E_130;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIWishlistTargetAvatarPopupWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14FBBA90)
#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14FBBBA0)
#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14FBBB20)
#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14FBB880)
#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER_REFRESHGAMEPADLIST_OFFSET UNITYSDK_OFFSET(0x14FBD850)
#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14FBDF00)
#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER__ONSCROLLITEMUPDATE_B__9_1_OFFSET UNITYSDK_OFFSET(0x14FBDF10)
#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER__ONSCROLLITEMUPDATE_G__SETEMPTY_9_0_OFFSET UNITYSDK_OFFSET(0x14FBD7F0)
#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14FBDF80)
#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14FBE010)
#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14FBE0B0)
#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14FBE140)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookItemWidgetController_TypeDefinitionIndex = 59902;

	class UIHandBookItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::MoleMole::UIWishlistTargetAvatarPopupWidgetController* _wishlistTargetAvatarPopupWidgetCtrl; // 0x2E8
		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* _rewards; // 0x2F0
		::Class_2_79F6D62CE30E3F8E_130* _view; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshGamepadList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER_REFRESHGAMEPADLIST_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__9_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER__ONSCROLLITEMUPDATE_B__9_1_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_g__SetEmpty_9_0(::System::Boolean empty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER__ONSCROLLITEMUPDATE_G__SETEMPTY_9_0_OFFSET))(this, empty);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
