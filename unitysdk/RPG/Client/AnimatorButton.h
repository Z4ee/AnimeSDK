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

#define RPG_CLIENT_ANIMATORBUTTON_ADD_ONSELECTHANDLER_OFFSET UNITYSDK_OFFSET(0x90C6BF0)
#define RPG_CLIENT_ANIMATORBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x90C4C50)
#define RPG_CLIENT_ANIMATORBUTTON_CLEARANDTRANSITIONTOSELECTIONSTATE_OFFSET UNITYSDK_OFFSET(0x90C6770)
#define RPG_CLIENT_ANIMATORBUTTON_CLEARANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x90C4FB0)
#define RPG_CLIENT_ANIMATORBUTTON_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x90C54B0)
#define RPG_CLIENT_ANIMATORBUTTON_FORBIDCLICK_OFFSET UNITYSDK_OFFSET(0x90C53B0)
#define RPG_CLIENT_ANIMATORBUTTON_GETLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x90C5950)
#define RPG_CLIENT_ANIMATORBUTTON_GET_ANIMATORBUTTONMODE_OFFSET UNITYSDK_OFFSET(0x90C4BD0)
#define RPG_CLIENT_ANIMATORBUTTON_GET_HAVECHECKLAYER_OFFSET UNITYSDK_OFFSET(0x90C6CD0)
#define RPG_CLIENT_ANIMATORBUTTON_GET_HAVEFOCUSELAYER_OFFSET UNITYSDK_OFFSET(0x90C6CE0)
#define RPG_CLIENT_ANIMATORBUTTON_GET_HAVENAVILAYER_OFFSET UNITYSDK_OFFSET(0x90C6CF0)
#define RPG_CLIENT_ANIMATORBUTTON_GET_ISCLEARSELECTEDBYINPUTSWITCHED_OFFSET UNITYSDK_OFFSET(0x90C6BD0)
#define RPG_CLIENT_ANIMATORBUTTON_GET_ISINFAKEDISABLESTATE_OFFSET UNITYSDK_OFFSET(0x90C46F0)
#define RPG_CLIENT_ANIMATORBUTTON_GET_ISUSECHECKER_OFFSET UNITYSDK_OFFSET(0x90C5420)
#define RPG_CLIENT_ANIMATORBUTTON_GET_LAYERSELECT_OFFSET UNITYSDK_OFFSET(0x90C4B50)
#define RPG_CLIENT_ANIMATORBUTTON_HASSTATE_OFFSET UNITYSDK_OFFSET(0x90C5860)
#define RPG_CLIENT_ANIMATORBUTTON_ISDATASELECT_OFFSET UNITYSDK_OFFSET(0x90C6320)
#define RPG_CLIENT_ANIMATORBUTTON_ISINFORBIDCLICKMODE_OFFSET UNITYSDK_OFFSET(0x90C4AF0)
#define RPG_CLIENT_ANIMATORBUTTON_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x90C5CC0)
#define RPG_CLIENT_ANIMATORBUTTON_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x90C6710)
#define RPG_CLIENT_ANIMATORBUTTON_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x90C52E0)
#define RPG_CLIENT_ANIMATORBUTTON_ONENABLE_OFFSET UNITYSDK_OFFSET(0x90C5190)
#define RPG_CLIENT_ANIMATORBUTTON_ONNAVIGATIONMOVE_OFFSET UNITYSDK_OFFSET(0x90C6660)
#define RPG_CLIENT_ANIMATORBUTTON_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x90C5DB0)
#define RPG_CLIENT_ANIMATORBUTTON_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x90C5E40)
#define RPG_CLIENT_ANIMATORBUTTON_ONSELECT_OFFSET UNITYSDK_OFFSET(0x90C59E0)
#define RPG_CLIENT_ANIMATORBUTTON_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x90C6850)
#define RPG_CLIENT_ANIMATORBUTTON_POSTBUTTONSOUND_OFFSET UNITYSDK_OFFSET(0x90C60D0)
#define RPG_CLIENT_ANIMATORBUTTON_REDIRECTSTATE_OFFSET UNITYSDK_OFFSET(0x90C4910)
#define RPG_CLIENT_ANIMATORBUTTON_REMOVE_ONSELECTHANDLER_OFFSET UNITYSDK_OFFSET(0x90C6C60)
#define RPG_CLIENT_ANIMATORBUTTON_SETALIGNSCROLLRECT_OFFSET UNITYSDK_OFFSET(0x90C66C0)
#define RPG_CLIENT_ANIMATORBUTTON_SETCHECKED_OFFSET UNITYSDK_OFFSET(0x90C5680)
#define RPG_CLIENT_ANIMATORBUTTON_SETPOINTERDOWNANDTRANSITION_OFFSET UNITYSDK_OFFSET(0x90C5740)
#define RPG_CLIENT_ANIMATORBUTTON_SET_ANIMATORBUTTONMODE_OFFSET UNITYSDK_OFFSET(0x90C4BE0)
#define RPG_CLIENT_ANIMATORBUTTON_SET_ISCLEARSELECTEDBYINPUTSWITCHED_OFFSET UNITYSDK_OFFSET(0x90C6BE0)
#define RPG_CLIENT_ANIMATORBUTTON_SET_ISINFAKEDISABLESTATE_OFFSET UNITYSDK_OFFSET(0x90C4700)
#define RPG_CLIENT_ANIMATORBUTTON_SPAWNED_OFFSET UNITYSDK_OFFSET(0x90C5470)
#define RPG_CLIENT_ANIMATORBUTTON_TRYGETSTATELAYER_OFFSET UNITYSDK_OFFSET(0x90C4EC0)
#define RPG_CLIENT_ANIMATORBUTTON_UPDATESELECTSTATE_OFFSET UNITYSDK_OFFSET(0x90C6440)
#define RPG_CLIENT_ANIMATORBUTTON__ANIMATORCHECK_OFFSET UNITYSDK_OFFSET(0x90C4D90)
#define RPG_CLIENT_ANIMATORBUTTON__ANIMATORPRESS_OFFSET UNITYSDK_OFFSET(0x90C6A50)
#define RPG_CLIENT_ANIMATORBUTTON__CCTOR_OFFSET UNITYSDK_OFFSET(0x90C6D80)
#define RPG_CLIENT_ANIMATORBUTTON__CLEARNAVISTATE_OFFSET UNITYSDK_OFFSET(0x90C5360)
#define RPG_CLIENT_ANIMATORBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x90C6D00)
#define RPG_CLIENT_ANIMATORBUTTON__FAKEEVALUATEANDTRANSITIONTOSELECTIONSTATE_OFFSET UNITYSDK_OFFSET(0x90C5790)
#define RPG_CLIENT_ANIMATORBUTTON__ONANIMATORFINISHSUBMIT_OFFSET UNITYSDK_OFFSET(0x90C6AF0)
#define RPG_CLIENT_ANIMATORBUTTON__ONINPUTDEVICECLASSSWITCHED_OFFSET UNITYSDK_OFFSET(0x90C6B70)
#define RPG_CLIENT_ANIMATORBUTTON__SETTABCONTROLFOCUSED_OFFSET UNITYSDK_OFFSET(0x90C5C00)
#define RPG_CLIENT_ANIMATORBUTTON__TRYADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x90C55D0)
#define RPG_CLIENT_ANIMATORBUTTON__TRYREMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x90C5520)
#define RPG_CLIENT_ANIMATORBUTTON__UPDATEBASELAYER_OFFSET UNITYSDK_OFFSET(0x90C4770)
#define RPG_CLIENT_ANIMATORBUTTON__UPDATECHECKEDLAYER_OFFSET UNITYSDK_OFFSET(0x90C6370)
#define RPG_CLIENT_ANIMATORBUTTON__UPDATENAVILAYER_OFFSET UNITYSDK_OFFSET(0x90C5B50)
#define RPG_CLIENT_ANIMATORBUTTON__UPDATESELECTSTATE_OFFSET UNITYSDK_OFFSET(0x90C6490)
#define RPG_CLIENT_ANIMATORBUTTON___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x90C6EB0)
#define RPG_CLIENT_ANIMATORBUTTON___IFIXBASEPROXY_FORBIDCLICK_OFFSET UNITYSDK_OFFSET(0x90C6EE0)
#define RPG_CLIENT_ANIMATORBUTTON___IFIXBASEPROXY_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x90C6F00)
#define RPG_CLIENT_ANIMATORBUTTON___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x90C7000)
#define RPG_CLIENT_ANIMATORBUTTON___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x90C6ED0)
#define RPG_CLIENT_ANIMATORBUTTON___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x90C6EC0)
#define RPG_CLIENT_ANIMATORBUTTON___IFIXBASEPROXY_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x90C6F10)
#define RPG_CLIENT_ANIMATORBUTTON___IFIXBASEPROXY_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x90C6F20)
#define RPG_CLIENT_ANIMATORBUTTON___IFIXBASEPROXY_ONSELECT_OFFSET UNITYSDK_OFFSET(0x90C6EF0)
#define RPG_CLIENT_ANIMATORBUTTON___IFIXBASEPROXY_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x90C6E90)
#define RPG_CLIENT_ANIMATORBUTTON___IFIXBASEPROXY_POSTBUTTONSOUND_OFFSET UNITYSDK_OFFSET(0x90C6FF0)
#define RPG_CLIENT_ANIMATORBUTTON___IFIXBASEPROXY_REDIRECTSTATE_OFFSET UNITYSDK_OFFSET(0x90C6EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int AnimatorButton_TypeDefinitionIndex = 59409;

	class AnimatorButton : public ::RPG::Client::CustomButton
	{
	public:
		static ::Class_1_5A54307E9F65186E** StaticGet_NaviController()
		{
			return (::Class_1_5A54307E9F65186E**)Il2CppClass::FromTypeDefinitionIndex(AnimatorButton_TypeDefinitionIndex)->GetStaticField(0x34EB0);
		}
		static ::Class_1_5A54307E9F65186E** StaticGet_TabLayerController()
		{
			return (::Class_1_5A54307E9F65186E**)Il2CppClass::FromTypeDefinitionIndex(AnimatorButton_TypeDefinitionIndex)->GetStaticField(0x34EB8);
		}
		static ::Class_1_5A54307E9F65186E** StaticGet_CheckedController()
		{
			return (::Class_1_5A54307E9F65186E**)Il2CppClass::FromTypeDefinitionIndex(AnimatorButton_TypeDefinitionIndex)->GetStaticField(0x34EC0);
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

		::System::Void set_IsInFakeDisableState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_SET_ISINFAKEDISABLESTATE_OFFSET))(this, value);
		}

		::System::Int32 RedirectState()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_REDIRECTSTATE_OFFSET))(this);
		}

		::RPG::Client::AnimatorButtonCheckMode get_AnimatorButtonMode()
		{
			return ((::RPG::Client::AnimatorButtonCheckMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_GET_ANIMATORBUTTONMODE_OFFSET))(this);
		}

		::System::Void set_AnimatorButtonMode(::RPG::Client::AnimatorButtonCheckMode value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnimatorButtonCheckMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_SET_ANIMATORBUTTONMODE_OFFSET))(this, value);
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

		::System::Void SetChecked(::System::Boolean Checked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_SETCHECKED_OFFSET))(this, Checked);
		}

		::System::Void SetPointerDownAndTransition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_SETPOINTERDOWNANDTRANSITION_OFFSET))(this);
		}

		::System::Boolean HasState(::UnityEngine::Animator* _animator, ::System::String* state_name, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_HASSTATE_OFFSET))(this, _animator, state_name, index);
		}

		::System::Int32 TryGetStateLayer(::UnityEngine::Animator* _animator, ::System::String* state_name, ::System::Int32 start, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_TRYGETSTATELAYER_OFFSET))(this, _animator, state_name, start, count);
		}

		::System::Int32 GetLayerIndex(::UnityEngine::Animator* _animator, ::System::String* layer_name)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_GETLAYERINDEX_OFFSET))(this, _animator, layer_name);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_ONSELECT_OFFSET))(this, eventData);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_ONDESELECT_OFFSET))(this, eventData);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void PostButtonSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_POSTBUTTONSOUND_OFFSET))(this);
		}

		::System::Boolean IsDataSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_ISDATASELECT_OFFSET))(this);
		}

		::System::Void ClearAnimationState(::System::Boolean isForce)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_CLEARANIMATIONSTATE_OFFSET))(this, isForce);
		}

		::System::Void _ClearNaviState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON__CLEARNAVISTATE_OFFSET))(this);
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

		::System::Void SetAlignScrollRect(::UnityEngine::UI::ScrollRect* rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ScrollRect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_SETALIGNSCROLLRECT_OFFSET))(this, rect);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_ONDESTROY_OFFSET))(this);
		}

		::System::Void _UpdateBaseLayer(::System::Boolean doTransition, ::System::Boolean instant)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON__UPDATEBASELAYER_OFFSET))(this, doTransition, instant);
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

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_ONSUBMIT_OFFSET))(this, eventData);
		}

		::System::Void _OnInputDeviceClassSwitched(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON__ONINPUTDEVICECLASSSWITCHED_OFFSET))(this, args);
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

		::System::Void set_IsClearSelectedByInputSwitched(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_SET_ISCLEARSELECTEDBYINPUTSWITCHED_OFFSET))(this, value);
		}

		::System::Void _SetTabControlFocused(::System::Boolean isFocused)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON__SETTABCONTROLFOCUSED_OFFSET))(this, isFocused);
		}

		::System::Void add_onSelectHandler(::System::Action_1<::RPG::Client::AnimatorButton*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::AnimatorButton*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_ADD_ONSELECTHANDLER_OFFSET))(this, value);
		}

		::System::Void remove_onSelectHandler(::System::Action_1<::RPG::Client::AnimatorButton*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::AnimatorButton*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON_REMOVE_ONSELECTHANDLER_OFFSET))(this, value);
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

		::System::Void __iFixBaseProxy_OnSubmit(::UnityEngine::EventSystems::BaseEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON___IFIXBASEPROXY_ONSUBMIT_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_RedirectState()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON___IFIXBASEPROXY_REDIRECTSTATE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON___IFIXBASEPROXY_AWAKE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_ForbidClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON___IFIXBASEPROXY_FORBIDCLICK_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnSelect(::UnityEngine::EventSystems::BaseEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON___IFIXBASEPROXY_ONSELECT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnDeselect(::UnityEngine::EventSystems::BaseEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON___IFIXBASEPROXY_ONDESELECT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnPointerDown(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON___IFIXBASEPROXY_ONPOINTERDOWN_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnPointerUp(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON___IFIXBASEPROXY_ONPOINTERUP_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_PostButtonSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON___IFIXBASEPROXY_POSTBUTTONSOUND_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON___IFIXBASEPROXY_ONDESTROY_OFFSET))(this);
		}
	};
}
