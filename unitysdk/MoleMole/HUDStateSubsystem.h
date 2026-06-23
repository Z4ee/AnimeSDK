#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A6875CC70890641D.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_EDE9798445562320.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HUDSTATESUBSYSTEM_BINDEVENTS_OFFSET UNITYSDK_OFFSET(0x1161E120)
#define MOLEMOLE_HUDSTATESUBSYSTEM_DEFERNOTIFY_OFFSET UNITYSDK_OFFSET(0x1161D810)
#define MOLEMOLE_HUDSTATESUBSYSTEM_FLUSHDEFERREDNOTIFY_OFFSET UNITYSDK_OFFSET(0x1161D870)
#define MOLEMOLE_HUDSTATESUBSYSTEM_GET_BASESTATE_OFFSET UNITYSDK_OFFSET(0x1161D9A0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_GET_CURRENTHUDSTATE_OFFSET UNITYSDK_OFFSET(0x1161D770)
#define MOLEMOLE_HUDSTATESUBSYSTEM_GET_HUDSTATEOVERRIDELIST_OFFSET UNITYSDK_OFFSET(0x1161D1F0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_GET_OVERRIDEHUDSTATE_OFFSET UNITYSDK_OFFSET(0x1161D180)
#define MOLEMOLE_HUDSTATESUBSYSTEM_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1161D910)
#define MOLEMOLE_HUDSTATESUBSYSTEM_NOTIFYIFCHANGED_OFFSET UNITYSDK_OFFSET(0x1161DE40)
#define MOLEMOLE_HUDSTATESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1161DEE0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1161EB60)
#define MOLEMOLE_HUDSTATESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1161EB10)
#define MOLEMOLE_HUDSTATESUBSYSTEM_POPHUDSTATE_OFFSET UNITYSDK_OFFSET(0x1161D540)
#define MOLEMOLE_HUDSTATESUBSYSTEM_PUSHHUDSTATE_OFFSET UNITYSDK_OFFSET(0x1161D310)
#define MOLEMOLE_HUDSTATESUBSYSTEM_RECOMPUTEBASESTATE_OFFSET UNITYSDK_OFFSET(0x1161DAE0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1161D9C0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_SETINITIALSTATE_OFFSET UNITYSDK_OFFSET(0x1161DF40)
#define MOLEMOLE_HUDSTATESUBSYSTEM_SET_BASESTATE_OFFSET UNITYSDK_OFFSET(0x1161D9B0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_UNBINDEVENTS_OFFSET UNITYSDK_OFFSET(0x1161EDB0)
#define MOLEMOLE_HUDSTATESUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x11620110)
#define MOLEMOLE_HUDSTATESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x11620040)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ISCOOPMODE_OFFSET UNITYSDK_OFFSET(0x1161F7A0)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONAVATARINOUTBATTLECHANGE_OFFSET UNITYSDK_OFFSET(0x1161F8A0)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONCOOPREGIONPLAYCHANGE_OFFSET UNITYSDK_OFFSET(0x1161FB70)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONETHERSTRONGSTATEINOUT_OFFSET UNITYSDK_OFFSET(0x1161FB10)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONINOUTBANGBOO_OFFSET UNITYSDK_OFFSET(0x1161FAB0)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONMAINCHARACTERDIE_OFFSET UNITYSDK_OFFSET(0x1161FC30)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONPOPSTREAMINGHUDSTATE_OFFSET UNITYSDK_OFFSET(0x1161FD40)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONPUSHSTREAMINGHUDSTATE_OFFSET UNITYSDK_OFFSET(0x1161FC90)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONSTREAMINGGAMEUNSTUCKCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1161FDF0)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONSTREAMINGHUDSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1161FE80)
#define MOLEMOLE_HUDSTATESUBSYSTEM__SETPARTNERDATEINPUTMUTE_OFFSET UNITYSDK_OFFSET(0x1161EBC0)
#define MOLEMOLE_HUDSTATESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x116205A0)
#define MOLEMOLE_HUDSTATESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11620630)
#define MOLEMOLE_HUDSTATESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x116206C0)

namespace MoleMole
{
	inline static constexpr unsigned int HUDStateSubsystem_TypeDefinitionIndex = 74745;

	class HUDStateSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::HUDStateSubsystem*>
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::Enum_3_A6875CC70890641D, ::System::Int32>** StaticGet_StatePriorities()
		{
			return (::System::Collections::Generic::Dictionary_2<::Enum_3_A6875CC70890641D, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HUDStateSubsystem_TypeDefinitionIndex)->GetStaticField(0x46960);
		}
		// static const ::System::String* PartnerDateInputTag; // 0x0
		::System::Collections::Generic::HashSet_1<::Enum_3_A6875CC70890641D>* _active; // 0x10
		::System::Action_1<::Enum_3_A6875CC70890641D>* OnChangeToSubState; // 0x18
		::Enum_3_A6875CC70890641D _BaseState_k__BackingField; // 0x20
		::Enum_3_A6875CC70890641D _lastNotifiedState; // 0x24
		::System::Boolean _hasPendingNotify; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__CCTOR_OFFSET))();
		}

		::Enum_3_A6875CC70890641D get_OverrideHudState()
		{
			return ((::Enum_3_A6875CC70890641D(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_GET_OVERRIDEHUDSTATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Struct_2_EDE9798445562320>* get_HUDStateOverrideList()
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_EDE9798445562320>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_GET_HUDSTATEOVERRIDELIST_OFFSET))(this);
		}

		::System::Void PushHudState(::System::String* tag, ::Enum_3_A6875CC70890641D state, ::System::Int32 priority)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_A6875CC70890641D, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_PUSHHUDSTATE_OFFSET))(this, tag, state, priority);
		}

		::System::Void PopHudState(::System::String* tag, ::System::Boolean needRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_POPHUDSTATE_OFFSET))(this, tag, needRefresh);
		}

		::System::Void DeferNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_DEFERNOTIFY_OFFSET))(this);
		}

		::System::Void FlushDeferredNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_FLUSHDEFERREDNOTIFY_OFFSET))(this);
		}

		::System::Boolean IsActive(::Enum_3_A6875CC70890641D state)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_A6875CC70890641D))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_ISACTIVE_OFFSET))(this, state);
		}

		::Enum_3_A6875CC70890641D get_BaseState()
		{
			return ((::Enum_3_A6875CC70890641D(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_GET_BASESTATE_OFFSET))(this);
		}

		::System::Void set_BaseState(::Enum_3_A6875CC70890641D value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A6875CC70890641D))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_SET_BASESTATE_OFFSET))(this, value);
		}

		::Enum_3_A6875CC70890641D get_CurrentHudState()
		{
			return ((::Enum_3_A6875CC70890641D(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_GET_CURRENTHUDSTATE_OFFSET))(this);
		}

		::System::Void SetActive(::Enum_3_A6875CC70890641D state, ::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A6875CC70890641D, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_SETACTIVE_OFFSET))(this, state, active);
		}

		::System::Void RecomputeBaseState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_RECOMPUTEBASESTATE_OFFSET))(this);
		}

		::System::Void NotifyIfChanged(::Enum_3_A6875CC70890641D last)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A6875CC70890641D))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_NOTIFYIFCHANGED_OFFSET))(this, last);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void SetInitialState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_SETINITIALSTATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean _isCoopMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__ISCOOPMODE_OFFSET))(this);
		}

		::System::Void _OnAvatarInOutBattleChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__ONAVATARINOUTBATTLECHANGE_OFFSET))(this, args);
		}

		::System::Void _OnInOutBangboo(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__ONINOUTBANGBOO_OFFSET))(this, args);
		}

		::System::Void _OnEtherStrongStateInOut(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__ONETHERSTRONGSTATEINOUT_OFFSET))(this, args);
		}

		::System::Void _OnCoopRegionPlayChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__ONCOOPREGIONPLAYCHANGE_OFFSET))(this, args);
		}

		::System::Void _OnMainCharacterDie(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__ONMAINCHARACTERDIE_OFFSET))(this, args);
		}

		::System::Void _OnPushStreamingHUDState(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__ONPUSHSTREAMINGHUDSTATE_OFFSET))(this, args);
		}

		::System::Void _OnPopStreamingHUDState(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__ONPOPSTREAMINGHUDSTATE_OFFSET))(this, args);
		}

		::System::Void _OnStreamingGameUnstuckComplete(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__ONSTREAMINGGAMEUNSTUCKCOMPLETE_OFFSET))(this, args);
		}

		::System::Void _OnStreamingHUDStateChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__ONSTREAMINGHUDSTATECHANGE_OFFSET))(this, args);
		}

		::System::Void BindEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_BINDEVENTS_OFFSET))(this);
		}

		::System::Void UnbindEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_UNBINDEVENTS_OFFSET))(this);
		}

		::System::Void _SetPartnerDateInputMute(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__SETPARTNERDATEINPUTMUTE_OFFSET))(this, enable);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
