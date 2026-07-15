#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AnimatorButtonCheckMode.h"
#include "unitysdk/RPG/Client/CustomButton.h"
#include "unitysdk/RPG/Client/UIButtonSoundType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_5A54307E9F65186E;
namespace RPG::Client { class StaticListViewItem; }
namespace SuperScrollView { class LoopFlexibleGridViewItem; }
namespace SuperScrollView { class LoopGridViewItem; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace SuperScrollView { class LoopStaggeredGridViewItem; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class ScrollRect; }

#define RPG_CLIENT_ANIMATORBUTTON_ADD_ONSELECTHANDLER_OFFSET UNITYSDK_OFFSET(0x19B17950)
#define RPG_CLIENT_ANIMATORBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x19B15440)
#define RPG_CLIENT_ANIMATORBUTTON_CLEARANDTRANSITIONTOSELECTIONSTATE_OFFSET UNITYSDK_OFFSET(0x19B174D0)
#define RPG_CLIENT_ANIMATORBUTTON_CLEARANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x19B15790)
#define RPG_CLIENT_ANIMATORBUTTON_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x19B15E80)
#define RPG_CLIENT_ANIMATORBUTTON_FORBIDCLICK_OFFSET UNITYSDK_OFFSET(0x19B15D80)
#define RPG_CLIENT_ANIMATORBUTTON_GETLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x19B16380)
#define RPG_CLIENT_ANIMATORBUTTON_GET_ANIMATORBUTTONMODE_OFFSET UNITYSDK_OFFSET(0x19B15380)
#define RPG_CLIENT_ANIMATORBUTTON_GET_HAVECHECKLAYER_OFFSET UNITYSDK_OFFSET(0x19B17A30)
#define RPG_CLIENT_ANIMATORBUTTON_GET_HAVEFOCUSELAYER_OFFSET UNITYSDK_OFFSET(0x19B17A80)
#define RPG_CLIENT_ANIMATORBUTTON_GET_HAVENAVILAYER_OFFSET UNITYSDK_OFFSET(0x19B17480)
#define RPG_CLIENT_ANIMATORBUTTON_GET_ISCLEARSELECTEDBYINPUTSWITCHED_OFFSET UNITYSDK_OFFSET(0x19B178B0)
#define RPG_CLIENT_ANIMATORBUTTON_GET_ISINFAKEDISABLESTATE_OFFSET UNITYSDK_OFFSET(0x19B14E70)
#define RPG_CLIENT_ANIMATORBUTTON_GET_ISUSECHECKER_OFFSET UNITYSDK_OFFSET(0x19B15DD0)
#define RPG_CLIENT_ANIMATORBUTTON_GET_LAYERSELECT_OFFSET UNITYSDK_OFFSET(0x19B15300)
#define RPG_CLIENT_ANIMATORBUTTON_HASSTATE_OFFSET UNITYSDK_OFFSET(0x19B16290)
#define RPG_CLIENT_ANIMATORBUTTON_ISDATASELECT_OFFSET UNITYSDK_OFFSET(0x19B17030)
#define RPG_CLIENT_ANIMATORBUTTON_ISINFORBIDCLICKMODE_OFFSET UNITYSDK_OFFSET(0x19B15250)
#define RPG_CLIENT_ANIMATORBUTTON_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x19B16730)
#define RPG_CLIENT_ANIMATORBUTTON_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19B17420)
#define RPG_CLIENT_ANIMATORBUTTON_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19B15CB0)
#define RPG_CLIENT_ANIMATORBUTTON_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19B15970)
#define RPG_CLIENT_ANIMATORBUTTON_ONNAVIGATIONMOVE_OFFSET UNITYSDK_OFFSET(0x19B17370)
#define RPG_CLIENT_ANIMATORBUTTON_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x19B168E0)
#define RPG_CLIENT_ANIMATORBUTTON_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x19B169E0)
#define RPG_CLIENT_ANIMATORBUTTON_ONSELECT_OFFSET UNITYSDK_OFFSET(0x19B16410)
#define RPG_CLIENT_ANIMATORBUTTON_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x19B17560)
#define RPG_CLIENT_ANIMATORBUTTON_POSTBUTTONSOUND_OFFSET UNITYSDK_OFFSET(0x19B16D50)
#define RPG_CLIENT_ANIMATORBUTTON_REDIRECTSTATE_OFFSET UNITYSDK_OFFSET(0x19B150C0)
#define RPG_CLIENT_ANIMATORBUTTON_REMOVE_ONSELECTHANDLER_OFFSET UNITYSDK_OFFSET(0x19B179C0)
#define RPG_CLIENT_ANIMATORBUTTON_SETALIGNSCROLLRECT_OFFSET UNITYSDK_OFFSET(0x19B173D0)
#define RPG_CLIENT_ANIMATORBUTTON_SETCHECKED_OFFSET UNITYSDK_OFFSET(0x19B16090)
#define RPG_CLIENT_ANIMATORBUTTON_SETPOINTERDOWNANDTRANSITION_OFFSET UNITYSDK_OFFSET(0x19B16150)
#define RPG_CLIENT_ANIMATORBUTTON_SET_ANIMATORBUTTONMODE_OFFSET UNITYSDK_OFFSET(0x19B153D0)
#define RPG_CLIENT_ANIMATORBUTTON_SET_ISCLEARSELECTEDBYINPUTSWITCHED_OFFSET UNITYSDK_OFFSET(0x19B17900)
#define RPG_CLIENT_ANIMATORBUTTON_SET_ISINFAKEDISABLESTATE_OFFSET UNITYSDK_OFFSET(0x19B14EC0)
#define RPG_CLIENT_ANIMATORBUTTON_SPAWNED_OFFSET UNITYSDK_OFFSET(0x19B15E40)
#define RPG_CLIENT_ANIMATORBUTTON_TRYGETSTATELAYER_OFFSET UNITYSDK_OFFSET(0x19B156A0)
#define RPG_CLIENT_ANIMATORBUTTON_UPDATESELECTSTATE_OFFSET UNITYSDK_OFFSET(0x19B17150)
#define RPG_CLIENT_ANIMATORBUTTON__ANIMATORCHECK_OFFSET UNITYSDK_OFFSET(0x19B15580)
#define RPG_CLIENT_ANIMATORBUTTON__ANIMATORPRESS_OFFSET UNITYSDK_OFFSET(0x19B17730)
#define RPG_CLIENT_ANIMATORBUTTON__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B17B50)
#define RPG_CLIENT_ANIMATORBUTTON__CLEARNAVISTATE_OFFSET UNITYSDK_OFFSET(0x19B15D30)
#define RPG_CLIENT_ANIMATORBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x19B17AD0)
#define RPG_CLIENT_ANIMATORBUTTON__FAKEEVALUATEANDTRANSITIONTOSELECTIONSTATE_OFFSET UNITYSDK_OFFSET(0x19B16200)
#define RPG_CLIENT_ANIMATORBUTTON__ISCURRENTEVENTSYSTEMSELECTED_OFFSET UNITYSDK_OFFSET(0x19B15AE0)
#define RPG_CLIENT_ANIMATORBUTTON__ONANIMATORFINISHSUBMIT_OFFSET UNITYSDK_OFFSET(0x19B177D0)
#define RPG_CLIENT_ANIMATORBUTTON__ONINPUTDEVICECLASSSWITCHED_OFFSET UNITYSDK_OFFSET(0x19B17850)
#define RPG_CLIENT_ANIMATORBUTTON__SETTABCONTROLFOCUSED_OFFSET UNITYSDK_OFFSET(0x19B16670)
#define RPG_CLIENT_ANIMATORBUTTON__TRYADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x19B15FC0)
#define RPG_CLIENT_ANIMATORBUTTON__TRYREMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x19B15EF0)
#define RPG_CLIENT_ANIMATORBUTTON__UPDATEBASELAYER_OFFSET UNITYSDK_OFFSET(0x19B14F30)
#define RPG_CLIENT_ANIMATORBUTTON__UPDATECHECKEDLAYER_OFFSET UNITYSDK_OFFSET(0x19B17080)
#define RPG_CLIENT_ANIMATORBUTTON__UPDATENAVILAYER_OFFSET UNITYSDK_OFFSET(0x19B165C0)
#define RPG_CLIENT_ANIMATORBUTTON__UPDATESELECTSTATE_OFFSET UNITYSDK_OFFSET(0x19B171A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AnimatorButton_TypeDefinitionIndex = 69228;

	class AnimatorButton : public ::RPG::Client::CustomButton
	{
	public:
		static ::Class_1_5A54307E9F65186E** StaticGet_CheckedController()
		{
			return (::Class_1_5A54307E9F65186E**)Il2CppClass::FromTypeDefinitionIndex(AnimatorButton_TypeDefinitionIndex)->GetStaticField(0x542F0);
		}
		static ::Class_1_5A54307E9F65186E** StaticGet_NaviController()
		{
			return (::Class_1_5A54307E9F65186E**)Il2CppClass::FromTypeDefinitionIndex(AnimatorButton_TypeDefinitionIndex)->GetStaticField(0x542F8);
		}
		static ::Class_1_5A54307E9F65186E** StaticGet_TabLayerController()
		{
			return (::Class_1_5A54307E9F65186E**)Il2CppClass::FromTypeDefinitionIndex(AnimatorButton_TypeDefinitionIndex)->GetStaticField(0x54300);
		}
		::RPG::Client::UIButtonSoundType DeselectSoundType; // 0x158
		::System::String* DeselectSpecialSoundEvent; // 0x160
		::System::Boolean isClearSelectedByInputSwitched; // 0x168
		::System::Boolean isFakeDisableEnable; // 0x169
		::System::Boolean isInFakeDisableState; // 0x16A
		::RPG::Client::AnimatorButtonCheckMode mAnimatorButtonMode; // 0x16C
		::System::Action_1<::RPG::Client::AnimatorButton*>* onSelectHandler; // 0x170
		::SuperScrollView::LoopGridViewItem* gridItem; // 0x178
		::SuperScrollView::LoopListViewItem2* listItem; // 0x180
		::SuperScrollView::LoopFlexibleGridViewItem* flexGridItem; // 0x188
		::RPG::Client::StaticListViewItem* staticListItem; // 0x190
		::SuperScrollView::LoopStaggeredGridViewItem* staggerItem; // 0x198
		::UnityEngine::Animator* localAnimator; // 0x1A0
		::System::Boolean isNaviSelect; // 0x1A8
		::System::Boolean isChecked; // 0x1A9
		::System::Boolean haveCheckLayer; // 0x1AA
		::System::Boolean haveFocuseLayer; // 0x1AB
		::System::Boolean haveNaviLayer; // 0x1AC
		::System::Boolean _isAddNotify; // 0x1AD
		::UnityEngine::UI::ScrollRect* _AlignScrollRect; // 0x1B0
		::System::Single downTs; // 0x1B8
		::UnityEngine::Vector2 downPos; // 0x1BC
		::System::Int32 _IsSelectedHash; // 0x1C4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsInFakeDisableState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_GET_ISINFAKEDISABLESTATE_OFFSET))(this);
		}

		::System::Void set_IsInFakeDisableState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_SET_ISINFAKEDISABLESTATE_OFFSET))(this, a1);
		}

		::System::Int32 RedirectState()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_REDIRECTSTATE_OFFSET))(this);
		}

		::RPG::Client::AnimatorButtonCheckMode get_AnimatorButtonMode()
		{
			return ((::RPG::Client::AnimatorButtonCheckMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_GET_ANIMATORBUTTONMODE_OFFSET))(this);
		}

		::System::Void set_AnimatorButtonMode(::RPG::Client::AnimatorButtonCheckMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnimatorButtonCheckMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_SET_ANIMATORBUTTONMODE_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean ForbidClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_FORBIDCLICK_OFFSET))(this);
		}

		::System::Boolean IsInForbidClickMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_ISINFORBIDCLICKMODE_OFFSET))(this);
		}

		::System::Boolean get_IsUseChecker()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_GET_ISUSECHECKER_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_DESPAWNED_OFFSET))(this);
		}

		::System::Void _TryAddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON__TRYADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _TryRemoveNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON__TRYREMOVENOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void SetChecked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_SETCHECKED_OFFSET))(this, a1);
		}

		::System::Void SetPointerDownAndTransition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_SETPOINTERDOWNANDTRANSITION_OFFSET))(this);
		}

		::System::Boolean HasState(::UnityEngine::Animator* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_HASSTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 TryGetStateLayer(::UnityEngine::Animator* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_TRYGETSTATELAYER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 GetLayerIndex(::UnityEngine::Animator* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_GETLAYERINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_ONSELECT_OFFSET))(this, a1);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_ONDESELECT_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void PostButtonSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_POSTBUTTONSOUND_OFFSET))(this);
		}

		::System::Boolean IsDataSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_ISDATASELECT_OFFSET))(this);
		}

		::System::Void ClearAnimationState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_CLEARANIMATIONSTATE_OFFSET))(this, a1);
		}

		::System::Void _ClearNaviState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON__CLEARNAVISTATE_OFFSET))(this);
		}

		::System::Boolean _IsCurrentEventSystemSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON__ISCURRENTEVENTSYSTEMSELECTED_OFFSET))(this);
		}

		::System::Void _updateNaviLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON__UPDATENAVILAYER_OFFSET))(this);
		}

		::System::Void UpdateSelectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_UPDATESELECTSTATE_OFFSET))(this);
		}

		::System::Void OnNavigationMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_ONNAVIGATIONMOVE_OFFSET))(this);
		}

		::System::Void SetAlignScrollRect(::UnityEngine::UI::ScrollRect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ScrollRect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_SETALIGNSCROLLRECT_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_ONDESTROY_OFFSET))(this);
		}

		::System::Void _UpdateBaseLayer(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON__UPDATEBASELAYER_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateCheckedLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON__UPDATECHECKEDLAYER_OFFSET))(this);
		}

		::System::Boolean _AnimatorCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON__ANIMATORCHECK_OFFSET))(this);
		}

		::System::Void _FakeEvaluateAndTransitionToSelectionState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON__FAKEEVALUATEANDTRANSITIONTOSELECTIONSTATE_OFFSET))(this);
		}

		::System::Void ClearAndTransitionToSelectionState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_CLEARANDTRANSITIONTOSELECTIONSTATE_OFFSET))(this);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_ONSUBMIT_OFFSET))(this, a1);
		}

		::System::Void _OnInputDeviceClassSwitched(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON__ONINPUTDEVICECLASSSWITCHED_OFFSET))(this, a1);
		}

		::System::Void _UpdateSelectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON__UPDATESELECTSTATE_OFFSET))(this);
		}

		::System::Void _AnimatorPress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON__ANIMATORPRESS_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _OnAnimatorFinishSubmit()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON__ONANIMATORFINISHSUBMIT_OFFSET))(this);
		}

		::System::Boolean get_IsClearSelectedByInputSwitched()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_GET_ISCLEARSELECTEDBYINPUTSWITCHED_OFFSET))(this);
		}

		::System::Void set_IsClearSelectedByInputSwitched(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_SET_ISCLEARSELECTEDBYINPUTSWITCHED_OFFSET))(this, a1);
		}

		::System::Void _SetTabControlFocused(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON__SETTABCONTROLFOCUSED_OFFSET))(this, a1);
		}

		::System::Void add_onSelectHandler(::System::Action_1<::RPG::Client::AnimatorButton*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::AnimatorButton*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_ADD_ONSELECTHANDLER_OFFSET))(this, a1);
		}

		::System::Void remove_onSelectHandler(::System::Action_1<::RPG::Client::AnimatorButton*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::AnimatorButton*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_REMOVE_ONSELECTHANDLER_OFFSET))(this, a1);
		}

		::System::Boolean get_LayerSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_GET_LAYERSELECT_OFFSET))(this);
		}

		::System::Boolean get_HaveCheckLayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_GET_HAVECHECKLAYER_OFFSET))(this);
		}

		::System::Boolean get_HaveFocuseLayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_GET_HAVEFOCUSELAYER_OFFSET))(this);
		}

		::System::Boolean get_HaveNaviLayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_GET_HAVENAVILAYER_OFFSET))(this);
		}
	};
}
