#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_08996034AAFF91A2;
class Class_2_9D9172C07F82DDAE;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER_CREATEITEMICON_OFFSET UNITYSDK_OFFSET(0x1897A060)
#define MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x189793A0)
#define MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x189795E0)
#define MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER_ONCLICKITEMBTN_OFFSET UNITYSDK_OFFSET(0x1897A1A0)
#define MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x189799A0)
#define MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18979A30)
#define MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x189793B0)
#define MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18979490)
#define MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER_OPENEQUIPDETAIL_OFFSET UNITYSDK_OFFSET(0x1897A5A0)
#define MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18979B50)
#define MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER_SETTIP_OFFSET UNITYSDK_OFFSET(0x18979AA0)
#define MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1897A9A0)
#define MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1897A9D0)
#define MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1897AA60)
#define MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1897AA70)
#define MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1897AA80)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralUpDialogPopWindowController_TypeDefinitionIndex = 84596;

	class UIGeneralUpDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_08996034AAFF91A2* _view; // 0x318
		::Class_2_9D9172C07F82DDAE* _itemModel; // 0x320
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* _curShowItems; // 0x328
		::System::Boolean _skipAnim; // 0x330
		::System::Single _scrollPos; // 0x334
		::System::Boolean _useCustomInfo; // 0x338
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* _customItemList; // 0x340
		::System::String* _customTitle; // 0x348
		::System::String* _customTitleEn; // 0x350
		::System::String* _tipInfo; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetTip(::System::String* tip)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER_SETTIP_OFFSET))(this, tip);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateItemIcon(::Struct_2_575273D27F02957E binderInfo)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Struct_2_575273D27F02957E))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER_CREATEITEMICON_OFFSET))(this, binderInfo);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnClickItemBtn(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER_ONCLICKITEMBTN_OFFSET))(this, idx);
		}

		::System::Void OpenEquipDetail(::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER_OPENEQUIPDETAIL_OFFSET))(this, itemData);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
