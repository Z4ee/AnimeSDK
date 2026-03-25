#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIStateCtrlStatus.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_CD08FD31D792BD24;
namespace RPG::Client { class UIStateCtrl_UIStateCtrlInternalAccessor; }
namespace RPG::Client::UI::UIStateCtrl { class StateData; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_UISTATECTRL_COMPLETECURRENTSTATEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xA733580)
#define RPG_CLIENT_UISTATECTRL_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xA733DD0)
#define RPG_CLIENT_UISTATECTRL_GET_INTERNALACCESSOR_OFFSET UNITYSDK_OFFSET(0xA733E30)
#define RPG_CLIENT_UISTATECTRL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA733AE0)
#define RPG_CLIENT_UISTATECTRL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA733890)
#define RPG_CLIENT_UISTATECTRL_PLAYSTATE_OFFSET UNITYSDK_OFFSET(0xA733240)
#define RPG_CLIENT_UISTATECTRL_UPDATE_OFFSET UNITYSDK_OFFSET(0xA733A90)
#define RPG_CLIENT_UISTATECTRL__CTOR_OFFSET UNITYSDK_OFFSET(0xA733ED0)
#define RPG_CLIENT_UISTATECTRL__FORCECOMPLETECURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xA733660)
#define RPG_CLIENT_UISTATECTRL__GETCURRENTSTATEACTIONSSTATUS_OFFSET UNITYSDK_OFFSET(0xA7330E0)
#define RPG_CLIENT_UISTATECTRL__GETSTATEDATABYSTATENAME_OFFSET UNITYSDK_OFFSET(0xA733C80)
#define RPG_CLIENT_UISTATECTRL__INITSTATEDATAS_OFFSET UNITYSDK_OFFSET(0xA733970)
#define RPG_CLIENT_UISTATECTRL__PLAYSTATEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA733300)
#define RPG_CLIENT_UISTATECTRL__SETPARENT_OFFSET UNITYSDK_OFFSET(0xA733C00)
#define RPG_CLIENT_UISTATECTRL__STARTSTATE_OFFSET UNITYSDK_OFFSET(0xA732BE0)
#define RPG_CLIENT_UISTATECTRL__TICKSTATE_OFFSET UNITYSDK_OFFSET(0xA732D90)
#define RPG_CLIENT_UISTATECTRL__TICK_OFFSET UNITYSDK_OFFSET(0xA732C80)
#define RPG_CLIENT_UISTATECTRL__TRYUPDATESTATUSOFCURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xA733060)

namespace RPG::Client
{
	inline static constexpr unsigned int UIStateCtrl_TypeDefinitionIndex = 56473;

	class UIStateCtrl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::StateData*>* _StateDatas; // 0x18
		::Class_1_CD08FD31D792BD24* _Context; // 0x20
		::System::Boolean _Inited; // 0x28
		::RPG::Client::UIStateCtrl_UIStateCtrlInternalAccessor* _internalAccessor; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL__CTOR_OFFSET))(this);
		}

		::System::Void _StartState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL__STARTSTATE_OFFSET))(this);
		}

		::System::Void _Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL__TICK_OFFSET))(this, deltaTime);
		}

		::System::Void _TickState(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL__TICKSTATE_OFFSET))(this, deltaTime);
		}

		::RPG::Client::UIStateCtrlStatus _GetCurrentStateActionsStatus()
		{
			return ((::RPG::Client::UIStateCtrlStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL__GETCURRENTSTATEACTIONSSTATUS_OFFSET))(this);
		}

		::System::Void PlayState(::System::String* stateName, ::System::Boolean isImmediately, ::System::Action* onUIStatePlayCompleted)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_PLAYSTATE_OFFSET))(this, stateName, isImmediately, onUIStatePlayCompleted);
		}

		::System::Void CompleteCurrentStateImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_COMPLETECURRENTSTATEIMMEDIATELY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_ONDESTROY_OFFSET))(this);
		}

		::System::Void _InitStateDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL__INITSTATEDATAS_OFFSET))(this);
		}

		::System::Void _SetParent(::RPG::Client::UIStateCtrl* parentUIStateCtrl)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL__SETPARENT_OFFSET))(this, parentUIStateCtrl);
		}

		::System::Void _PlayStateInternal(::System::String* stateName, ::System::Boolean isImmediately, ::System::Action* onUIStatePlayCompleted)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL__PLAYSTATEINTERNAL_OFFSET))(this, stateName, isImmediately, onUIStatePlayCompleted);
		}

		::RPG::Client::UI::UIStateCtrl::StateData* _GetStateDataByStateName(::System::String* stateName)
		{
			return ((::RPG::Client::UI::UIStateCtrl::StateData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL__GETSTATEDATABYSTATENAME_OFFSET))(this, stateName);
		}

		::System::Void _TryUpdateStatusOfCurrentState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL__TRYUPDATESTATUSOFCURRENTSTATE_OFFSET))(this);
		}

		::System::Void _ForceCompleteCurrentState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL__FORCECOMPLETECURRENTSTATE_OFFSET))(this);
		}

		::System::String* get_CurrentState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_GET_CURRENTSTATE_OFFSET))(this);
		}

		::RPG::Client::UIStateCtrl_UIStateCtrlInternalAccessor* get_InternalAccessor()
		{
			return ((::RPG::Client::UIStateCtrl_UIStateCtrlInternalAccessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_GET_INTERNALACCESSOR_OFFSET))(this);
		}
	};
}
