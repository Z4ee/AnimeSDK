#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5185521A0D24FE9F.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UISelectMonsterCardWidgetController_ItemRootTurningState.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_86AA8F306FA75018;
class Class_2_208CC9941471731A_131;
class Class_2_C7387D40D4120A48_2_Class_2_870C11D2A8D09105;
class Class_2_C885C7F33138A3B9;
class Class_3_2D3090DDF542616F;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIDoubleTipsInfoWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI::Extension { class UIButtonBase; }

#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x14DB2240)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ENABLEEMPTY_OFFSET UNITYSDK_OFFSET(0x14DB2460)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_GETMAINBUTTON_OFFSET UNITYSDK_OFFSET(0x14DB24B0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_GET_CURRENTCARDSUMMARY_OFFSET UNITYSDK_OFFSET(0x14DB21B0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14DB20D0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_GET__VIEW_OFFSET UNITYSDK_OFFSET(0x14DB2140)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_INITITEMROOTSTATE_OFFSET UNITYSDK_OFFSET(0x14DB4D70)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x14DB4E50)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14DB23D0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONROLE1CLICK_OFFSET UNITYSDK_OFFSET(0x14DB61E0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONROLE2CLICK_OFFSET UNITYSDK_OFFSET(0x14DB6230)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONROLE3CLICK_OFFSET UNITYSDK_OFFSET(0x14DB6280)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONROLECLICK_OFFSET UNITYSDK_OFFSET(0x14DB6140)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14DB2570)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14DB21D0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFESHITEMROOTVIEW_OFFSET UNITYSDK_OFFSET(0x14DB5EE0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFRESHCARDIMG_OFFSET UNITYSDK_OFFSET(0x14DB51D0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFRESHEMPTYVIEW_OFFSET UNITYSDK_OFFSET(0x14DB2B70)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFRESHROLE_OFFSET UNITYSDK_OFFSET(0x14DB5B90)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x14DB3210)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_SETCARDCLICKFUNC_OFFSET UNITYSDK_OFFSET(0x14DB4D20)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_SETCLICKENABLE_OFFSET UNITYSDK_OFFSET(0x14DB5010)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_SET_CURRENTCARDSUMMARY_OFFSET UNITYSDK_OFFSET(0x14DB21C0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_TURNITEMROOTACTIVE_OFFSET UNITYSDK_OFFSET(0x14DB5FC0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER__BINDEVENT_B__23_0_OFFSET UNITYSDK_OFFSET(0x14DB62E0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB62D0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER__TURNITEMROOTACTIVE_B__40_0_OFFSET UNITYSDK_OFFSET(0x14DB6350)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14DB63F0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14DB6490)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14DB6530)

namespace MoleMole
{
	inline static constexpr unsigned int UISelectMonsterCardWidgetController_TypeDefinitionIndex = 39113;

	class UISelectMonsterCardWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Action_1<::System::Int32>* onCardClick; // 0x2E8
		::System::Boolean autoRefreshSelectState; // 0x2F0
		::System::Int32 rewardLevel; // 0x2F4
		::System::Boolean _checkLevelMatch; // 0x2F8
		::System::Boolean macthMachineLevel; // 0x2F9
		::System::Boolean enableEmpty; // 0x2FA
		::System::Int32 caffBuffTipsID; // 0x2FC
		::System::Int32 overrideRewardID; // 0x300
		::MoleMole::UIDoubleTipsInfoWidgetController* _doubleTipsInfoWidgetController; // 0x308
		::System::Int32 selected; // 0x310
		::System::Int32 rewardItemId1; // 0x314
		::System::Int32 rewardItemId2; // 0x318
		::System::Int32 rewardItemId3; // 0x31C
		::Class_1_86AA8F306FA75018* _CurrentCardSummary_k__BackingField; // 0x320
		::MoleMole::UISelectMonsterCardWidgetController_ItemRootTurningState currentState; // 0x328
		::MoleMole::UISelectMonsterCardWidgetController_ItemRootTurningState nextState; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_C885C7F33138A3B9* get__viewModel()
		{
			return ((::Class_2_C885C7F33138A3B9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::Class_3_2D3090DDF542616F* get__view()
		{
			return ((::Class_3_2D3090DDF542616F*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_GET__VIEW_OFFSET))(this);
		}

		::Class_1_86AA8F306FA75018* get_CurrentCardSummary()
		{
			return ((::Class_1_86AA8F306FA75018*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_GET_CURRENTCARDSUMMARY_OFFSET))(this);
		}

		::System::Void set_CurrentCardSummary(::Class_1_86AA8F306FA75018* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_86AA8F306FA75018*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_SET_CURRENTCARDSUMMARY_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_BINDEVENT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void EnableEmpty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ENABLEEMPTY_OFFSET))(this, value);
		}

		::UnityEngine::UI::Extension::UIButtonBase* GetMainButton()
		{
			return ((::UnityEngine::UI::Extension::UIButtonBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_GETMAINBUTTON_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetCardClickFunc(::System::Action_1<::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_SETCARDCLICKFUNC_OFFSET))(this, onClick);
		}

		::System::Void InitItemRootState(::System::Boolean showItemRoot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_INITITEMROOTSTATE_OFFSET))(this, showItemRoot);
		}

		::System::Boolean IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ISSELECTED_OFFSET))(this);
		}

		::System::Void SetClickEnable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_SETCLICKENABLE_OFFSET))(this, value);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefeshItemRootView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFESHITEMROOTVIEW_OFFSET))(this);
		}

		::System::Void TurnItemRootActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_TURNITEMROOTACTIVE_OFFSET))(this, value);
		}

		::System::Void RefreshEmptyView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFRESHEMPTYVIEW_OFFSET))(this);
		}

		::System::Void RefreshCardImg(::System::String* path, ::Foundation::AssetPath raceImg, ::Enum_3_5185521A0D24FE9F type, ::System::Boolean useFrontMask)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::AssetPath, ::Enum_3_5185521A0D24FE9F, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFRESHCARDIMG_OFFSET))(this, path, raceImg, type, useFrontMask);
		}

		::System::Void RefreshRole(::Class_2_C7387D40D4120A48_2_Class_2_870C11D2A8D09105* view, ::System::Boolean enable, ::System::Int32 count1, ::System::Int32 count2, ::Class_2_208CC9941471731A_131* itemConfig, ::UnityEngine::Events::UnityAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_C7387D40D4120A48_2_Class_2_870C11D2A8D09105*, ::System::Boolean, ::System::Int32, ::System::Int32, ::Class_2_208CC9941471731A_131*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFRESHROLE_OFFSET))(this, view, enable, count1, count2, itemConfig, callback);
		}

		::System::Void OnRoleClick(::System::Int32 rewardItemId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONROLECLICK_OFFSET))(this, rewardItemId);
		}

		::System::Void OnRole1Click()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONROLE1CLICK_OFFSET))(this);
		}

		::System::Void OnRole2Click()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONROLE2CLICK_OFFSET))(this);
		}

		::System::Void OnRole3Click()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONROLE3CLICK_OFFSET))(this);
		}

		::System::Void _BindEvent_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER__BINDEVENT_B__23_0_OFFSET))(this);
		}

		::System::Void _TurnItemRootActive_b__40_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER__TURNITEMROOTACTIVE_B__40_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
