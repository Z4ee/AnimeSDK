#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_7A4252233BCEB3A9.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_60638234271CCDB8_43;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIDepositoryJumpBtnTextItemWidgetController; }
namespace MoleMole { class UIGeneralEquipDetailV2WidgetController; }
namespace MoleMole { class UIRoleEquipReplaceWidgetController; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_CREATWEAPONITEM_OFFSET UNITYSDK_OFFSET(0x156A9BF0)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x156A8EB0)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_GOTODETAIL_OFFSET UNITYSDK_OFFSET(0x156AACF0)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x156A8F70)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x156AAB00)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONCLICKEQUIPBTN_OFFSET UNITYSDK_OFFSET(0x156AAF20)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONCLICKSCROLLVIEWITEM_OFFSET UNITYSDK_OFFSET(0x156A9D00)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x156A9980)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x156AAB60)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONITEMCHANGE_OFFSET UNITYSDK_OFFSET(0x156AAFA0)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x156A9720)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x156A9A10)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x156A8EC0)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x156A9370)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_REFRESHJUMPITEMS_OFFSET UNITYSDK_OFFSET(0x156AA5B0)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x156A98E0)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_SETBTNSSTATE_OFFSET UNITYSDK_OFFSET(0x156A9B60)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_SETDATAEMPTYSTATE_OFFSET UNITYSDK_OFFSET(0x156A9A80)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_SETROLEICON_OFFSET UNITYSDK_OFFSET(0x156A9590)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x156AB210)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER__ONUIOPEN_B__7_0_OFFSET UNITYSDK_OFFSET(0x156AB2C0)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER__ONUIOPEN_B__7_1_OFFSET UNITYSDK_OFFSET(0x156AB4C0)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x156AB4D0)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x156AB560)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x156AB610)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x156AB690)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x156AB6A0)
#define MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x156AB6B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleWeaponRecommendPopWindowController_TypeDefinitionIndex = 74566;

	class UIRoleWeaponRecommendPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_60638234271CCDB8_43* _view; // 0x318
		::System::UInt32 _avatarId; // 0x320
		::MoleMole::UIRoleEquipReplaceWidgetController* _equipReplaceWidget; // 0x328
		::MoleMole::UIGeneralEquipDetailV2WidgetController* _generalEquipCtrl; // 0x330
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* m_jumpBtns; // 0x338
		::System::Collections::Generic::List_1<::MoleMole::UIDepositoryJumpBtnTextItemWidgetController*>* m_jumpBtnCtrls; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void SetDataEmptyState(::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_SETDATAEMPTYSTATE_OFFSET))(this, isEmpty);
		}

		::System::Void SetBtnsState(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_SETBTNSSTATE_OFFSET))(this, isShow);
		}

		::MoleMole::ScrollViewItemWidgetController* CreatWeaponItem(::Enum_3_7A4252233BCEB3A9 arg1, ::System::Func_1<::MoleMole::UIControlReference*>* arg2)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Enum_3_7A4252233BCEB3A9, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_CREATWEAPONITEM_OFFSET))(this, arg1, arg2);
		}

		::System::Void OnClickScrollViewItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONCLICKSCROLLVIEWITEM_OFFSET))(this, index);
		}

		::System::Void RefreshJumpItems(::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_REFRESHJUMPITEMS_OFFSET))(this, itemData);
		}

		::System::Void SetRoleIcon(::System::UInt32 avatarUID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_SETROLEICON_OFFSET))(this, avatarUID);
		}

		::System::Void OnCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONCANCEL_OFFSET))(this);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void GotoDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_GOTODETAIL_OFFSET))(this);
		}

		::System::Void OnClickEquipBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONCLICKEQUIPBTN_OFFSET))(this);
		}

		::System::Void OnItemChange(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_ONITEMCHANGE_OFFSET))(this, obj);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER__ONUIOPEN_B__7_0_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER__ONUIOPEN_B__7_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEWEAPONRECOMMENDPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
