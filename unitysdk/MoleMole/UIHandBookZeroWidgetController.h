#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7EA3F9477E892234.h"
#include "unitysdk/MoleMole/UIHandBookZeroWidgetController_HBAbyssEntranceTypeEnum.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_1685EC66FBD28897;
class Class_2_208CC9941471731A_643;
class Class_2_208CC9941471731A_917;
class Class_2_79F6D62CE30E3F8E_145;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_DOJUMP_OFFSET UNITYSDK_OFFSET(0x17DAFF40)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_HBTOABYSSENUM_OFFSET UNITYSDK_OFFSET(0x17DAF040)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17DAFE30)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x17DAFDA0)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_ONREWARDBTNCLICK_OFFSET UNITYSDK_OFFSET(0x17DB0EA0)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_ONSHOPBTNCLICK_OFFSET UNITYSDK_OFFSET(0x17DB1090)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17DAFB60)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17DAFEC0)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17DAF0A0)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17DAFA00)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_REFRESHBUTTONSTATES_OFFSET UNITYSDK_OFFSET(0x17DB0BB0)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_REFRESHHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x17DB01E0)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_REFRESHREDEEM_OFFSET UNITYSDK_OFFSET(0x17DAFBF0)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17DAFAE0)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_UILOCKCHANGEDHANDLE_OFFSET UNITYSDK_OFFSET(0x17DB12B0)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17DB1300)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER__DOJUMP_B__15_0_OFFSET UNITYSDK_OFFSET(0x17DB13E0)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER__ONSHOPBTNCLICK_B__21_0_OFFSET UNITYSDK_OFFSET(0x17DB1510)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER__ONSHOPBTNCLICK_B__21_1_OFFSET UNITYSDK_OFFSET(0x17DB15F0)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17DB17D0)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x17DB1860)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17DB18F0)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17DB1990)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17DB1A20)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17DB1AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookZeroWidgetController_TypeDefinitionIndex = 62177;

	class UIHandBookZeroWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_208CC9941471731A_917* _entry; // 0x2C0
		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* _rewards; // 0x2C8
		::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_643*>* _entries; // 0x2D0
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_643*>* _scrollEntries; // 0x2D8
		::Class_2_79F6D62CE30E3F8E_145* _view; // 0x2E0
		::MoleMole::UIHandBookZeroWidgetController_HBAbyssEntranceTypeEnum curHighLightEntry; // 0x2E8
		::System::Int32 targetIdx; // 0x2EC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::Enum_3_7EA3F9477E892234 HBToAbyssEnum(::MoleMole::UIHandBookZeroWidgetController_HBAbyssEntranceTypeEnum e)
		{
			return ((::Enum_3_7EA3F9477E892234(*)(::MoleMole::UIHandBookZeroWidgetController_HBAbyssEntranceTypeEnum))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_HBTOABYSSENUM_OFFSET))(e);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void DoJump()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_DOJUMP_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshHighLight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_REFRESHHIGHLIGHT_OFFSET))(this);
		}

		::System::Void RefreshRedeem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_REFRESHREDEEM_OFFSET))(this);
		}

		::System::Void RefreshButtonStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_REFRESHBUTTONSTATES_OFFSET))(this);
		}

		::System::Void OnRewardBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_ONREWARDBTNCLICK_OFFSET))(this);
		}

		::System::Void OnShopBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_ONSHOPBTNCLICK_OFFSET))(this);
		}

		::System::Void UILockChangedHandle(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER_UILOCKCHANGEDHANDLE_OFFSET))(this, args);
		}

		::System::Void _DoJump_b__15_0(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER__DOJUMP_B__15_0_OFFSET))(this, success);
		}

		::System::Void _OnShopBtnClick_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER__ONSHOPBTNCLICK_B__21_0_OFFSET))(this);
		}

		::System::Void _OnShopBtnClick_b__21_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER__ONSHOPBTNCLICK_B__21_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
