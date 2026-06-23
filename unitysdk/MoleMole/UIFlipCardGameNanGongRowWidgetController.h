#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_0_16E4307DCC419505_29;
class Class_2_28659CDDAC432EF5;
class Class_2_EBD55FDDE62F0CAC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_GETCARDID_OFFSET UNITYSDK_OFFSET(0x175D2140)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x175D2490)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x175D19C0)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_ONREQUESTFLIPCARDSUCCESS_OFFSET UNITYSDK_OFFSET(0x175D2760)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x175D1AD0)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x175D1A50)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x175D16F0)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x175D1BD0)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_SHOWFLIPEDCARDREWARDPOPWINDOW_OFFSET UNITYSDK_OFFSET(0x175D21E0)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x175D28F0)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER__ONREQUESTFLIPCARDSUCCESS_B__16_0_OFFSET UNITYSDK_OFFSET(0x175D2900)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x175D2940)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x175D2950)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x175D29E0)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x175D2A80)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x175D2B10)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlipCardGameNanGongRowWidgetController_TypeDefinitionIndex = 81025;

	class UIFlipCardGameNanGongRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::Int32 TipIdHasNoCoin = 0x2DD107; // 0x0
		::System::Action_2<::System::Int32, ::System::Single>* FlipCardSuccessAction; // 0x2F0
		::System::Int32 _indexOfCardBoard; // 0x2F8
		::MoleMole::UIItemIconBtnSmallWidgetController* _itemIconBtnSmall0; // 0x300
		::MoleMole::UIItemIconBtnSmallWidgetController* _itemIconBtnSmall1; // 0x308
		::Class_2_EBD55FDDE62F0CAC* _model; // 0x310
		::Class_2_28659CDDAC432EF5* _view; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::System::Boolean considerUnknown)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, considerUnknown);
		}

		::System::Void ShowFlipedCardRewardPopWindow(::System::Int32 cardID, ::System::Boolean isFlipCard)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_SHOWFLIPEDCARDREWARDPOPWINDOW_OFFSET))(this, cardID, isFlipCard);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Boolean GetCardID(::System::Int32& cardID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_GETCARDID_OFFSET))(this, cardID);
		}

		::System::Void OnRequestFlipCardSuccess(::Class_0_16E4307DCC419505_29* rcvmessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_ONREQUESTFLIPCARDSUCCESS_OFFSET))(this, rcvmessage);
		}

		::System::Void _OnRequestFlipCardSuccess_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER__ONREQUESTFLIPCARDSUCCESS_B__16_0_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
