#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5185521A0D24FE9F.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UISelectMonsterCardWidgetController_ItemRootTurningState.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_86AA8F306FA75018;
class Class_2_208CC9941471731A_477;
class Class_2_C7387D40D4120A48_15_Class_2_870C11D2A8D09105;
class Class_2_C885C7F33138A3B9_1;
class Class_3_2D3090DDF542616F_9;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIDoubleTipsInfoWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI::Extension { class UIButtonBase; }

#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x17A2DCD0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ENABLEEMPTY_OFFSET UNITYSDK_OFFSET(0x17A2DEF0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_GETMAINBUTTON_OFFSET UNITYSDK_OFFSET(0x17A2DF40)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_GET_CURRENTCARDSUMMARY_OFFSET UNITYSDK_OFFSET(0x17A2DC40)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17A2DB60)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_GET__VIEW_OFFSET UNITYSDK_OFFSET(0x17A2DBD0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_INITITEMROOTSTATE_OFFSET UNITYSDK_OFFSET(0x17A30800)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x17A308E0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17A2DE60)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONROLE1CLICK_OFFSET UNITYSDK_OFFSET(0x17A31C70)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONROLE2CLICK_OFFSET UNITYSDK_OFFSET(0x17A31CC0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONROLE3CLICK_OFFSET UNITYSDK_OFFSET(0x17A31D10)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONROLECLICK_OFFSET UNITYSDK_OFFSET(0x17A31BD0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17A2E000)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17A2DC60)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFESHITEMROOTVIEW_OFFSET UNITYSDK_OFFSET(0x17A31980)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFRESHCARDIMG_OFFSET UNITYSDK_OFFSET(0x17A30C60)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFRESHEMPTYVIEW_OFFSET UNITYSDK_OFFSET(0x17A2E600)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFRESHROLE_OFFSET UNITYSDK_OFFSET(0x17A31630)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17A2ECA0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_SETCARDCLICKFUNC_OFFSET UNITYSDK_OFFSET(0x17A307B0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_SETCLICKENABLE_OFFSET UNITYSDK_OFFSET(0x17A30AA0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_SET_CURRENTCARDSUMMARY_OFFSET UNITYSDK_OFFSET(0x17A2DC50)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_TURNITEMROOTACTIVE_OFFSET UNITYSDK_OFFSET(0x17A31A50)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER__BINDEVENT_B__23_0_OFFSET UNITYSDK_OFFSET(0x17A31D70)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A31D60)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER__TURNITEMROOTACTIVE_B__40_0_OFFSET UNITYSDK_OFFSET(0x17A31DE0)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17A31E80)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17A31F20)
#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17A31FC0)

namespace MoleMole
{
	inline static constexpr unsigned int UISelectMonsterCardWidgetController_TypeDefinitionIndex = 88488;

	class UISelectMonsterCardWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Action_1<::System::Int32>* onCardClick; // 0x2F0
		::System::Boolean autoRefreshSelectState; // 0x2F8
		::System::Int32 rewardLevel; // 0x2FC
		::System::Boolean _checkLevelMatch; // 0x300
		::System::Boolean macthMachineLevel; // 0x301
		::System::Boolean enableEmpty; // 0x302
		::System::Int32 caffBuffTipsID; // 0x304
		::System::Int32 overrideRewardID; // 0x308
		::MoleMole::UIDoubleTipsInfoWidgetController* _doubleTipsInfoWidgetController; // 0x310
		::System::Int32 selected; // 0x318
		::System::Int32 rewardItemId1; // 0x31C
		::System::Int32 rewardItemId2; // 0x320
		::System::Int32 rewardItemId3; // 0x324
		::Class_1_86AA8F306FA75018* _CurrentCardSummary_k__BackingField; // 0x328
		::MoleMole::UISelectMonsterCardWidgetController_ItemRootTurningState currentState; // 0x330
		::MoleMole::UISelectMonsterCardWidgetController_ItemRootTurningState nextState; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_C885C7F33138A3B9_1* get__viewModel()
		{
			return ((::Class_2_C885C7F33138A3B9_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::Class_3_2D3090DDF542616F_9* get__view()
		{
			return ((::Class_3_2D3090DDF542616F_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_GET__VIEW_OFFSET))(this);
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

		::System::Void RefreshRole(::Class_2_C7387D40D4120A48_15_Class_2_870C11D2A8D09105* view, ::System::Boolean enable, ::System::Int32 count1, ::System::Int32 count2, ::Class_2_208CC9941471731A_477* itemConfig, ::UnityEngine::Events::UnityAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_C7387D40D4120A48_15_Class_2_870C11D2A8D09105*, ::System::Boolean, ::System::Int32, ::System::Int32, ::Class_2_208CC9941471731A_477*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_REFRESHROLE_OFFSET))(this, view, enable, count1, count2, itemConfig, callback);
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
