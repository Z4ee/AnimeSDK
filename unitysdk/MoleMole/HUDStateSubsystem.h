#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C856E655551E512E.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_EDE9798445562320.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HUDSTATESUBSYSTEM_BINDEVENTS_OFFSET UNITYSDK_OFFSET(0x192506A0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_DEFERNOTIFY_OFFSET UNITYSDK_OFFSET(0x1924FBA0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_FLUSHDEFERREDNOTIFY_OFFSET UNITYSDK_OFFSET(0x1924FC00)
#define MOLEMOLE_HUDSTATESUBSYSTEM_GET_BASESTATE_OFFSET UNITYSDK_OFFSET(0x1924FD50)
#define MOLEMOLE_HUDSTATESUBSYSTEM_GET_CURRENTHUDSTATE_OFFSET UNITYSDK_OFFSET(0x1924FB00)
#define MOLEMOLE_HUDSTATESUBSYSTEM_GET_HUDSTATEOVERRIDELIST_OFFSET UNITYSDK_OFFSET(0x1924F590)
#define MOLEMOLE_HUDSTATESUBSYSTEM_GET_OVERRIDEHUDSTATE_OFFSET UNITYSDK_OFFSET(0x1924F520)
#define MOLEMOLE_HUDSTATESUBSYSTEM_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1924FCC0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_NOTIFYIFCHANGED_OFFSET UNITYSDK_OFFSET(0x192503C0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x19250460)
#define MOLEMOLE_HUDSTATESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x192510E0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19251090)
#define MOLEMOLE_HUDSTATESUBSYSTEM_POPHUDSTATE_OFFSET UNITYSDK_OFFSET(0x1924F8E0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_PUSHHUDSTATE_OFFSET UNITYSDK_OFFSET(0x1924F6B0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_RECOMPUTEBASESTATE_OFFSET UNITYSDK_OFFSET(0x1924FEA0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1924FD70)
#define MOLEMOLE_HUDSTATESUBSYSTEM_SETINITIALSTATE_OFFSET UNITYSDK_OFFSET(0x192504C0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_SET_BASESTATE_OFFSET UNITYSDK_OFFSET(0x1924FD60)
#define MOLEMOLE_HUDSTATESUBSYSTEM_UNBINDEVENTS_OFFSET UNITYSDK_OFFSET(0x19251330)
#define MOLEMOLE_HUDSTATESUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x19252910)
#define MOLEMOLE_HUDSTATESUBSYSTEM__CLEANUPELEVATOROVERRIDEIFLEAKED_OFFSET UNITYSDK_OFFSET(0x19250200)
#define MOLEMOLE_HUDSTATESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19252840)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ISCOOPMODE_OFFSET UNITYSDK_OFFSET(0x19251D20)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ISELEVATORUSINGOVERRIDE_OFFSET UNITYSDK_OFFSET(0x19252400)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONAVATARINOUTBATTLECHANGE_OFFSET UNITYSDK_OFFSET(0x19251E20)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONCOOPREGIONPLAYCHANGE_OFFSET UNITYSDK_OFFSET(0x192520F0)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONETHERSTRONGSTATEINOUT_OFFSET UNITYSDK_OFFSET(0x19252090)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONINOUTBANGBOO_OFFSET UNITYSDK_OFFSET(0x19252030)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONMAINCHARACTERDIE_OFFSET UNITYSDK_OFFSET(0x192521B0)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONPOPSTREAMINGHUDSTATE_OFFSET UNITYSDK_OFFSET(0x192522C0)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONPUSHSTREAMINGHUDSTATE_OFFSET UNITYSDK_OFFSET(0x19252210)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONSTREAMINGGAMEUNSTUCKCOMPLETE_OFFSET UNITYSDK_OFFSET(0x19252370)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONSTREAMINGHUDSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x19252560)
#define MOLEMOLE_HUDSTATESUBSYSTEM__SETPARTNERDATEINPUTMUTE_OFFSET UNITYSDK_OFFSET(0x19251140)
#define MOLEMOLE_HUDSTATESUBSYSTEM__STATECONTAINS_OFFSET UNITYSDK_OFFSET(0x19252480)
#define MOLEMOLE_HUDSTATESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x19252F10)
#define MOLEMOLE_HUDSTATESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19252FA0)
#define MOLEMOLE_HUDSTATESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19253030)

namespace MoleMole
{
	inline static constexpr unsigned int HUDStateSubsystem_TypeDefinitionIndex = 64878;

	class HUDStateSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::HUDStateSubsystem*>
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::Enum_3_C856E655551E512E, ::System::Int32>** StaticGet_StatePriorities()
		{
			return (::System::Collections::Generic::Dictionary_2<::Enum_3_C856E655551E512E, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HUDStateSubsystem_TypeDefinitionIndex)->GetStaticField(0x4FD80);
		}
		// static const ::System::String* PartnerDateInputTag; // 0x0
		// static const ::System::String* ElevatorOverrideTag; // 0x0
		// static const ::System::String* EousAndRobotOverrideTag; // 0x0
		::System::Collections::Generic::HashSet_1<::Enum_3_C856E655551E512E>* _active; // 0x10
		::System::Action_2<::Enum_3_C856E655551E512E, ::Enum_3_C856E655551E512E>* OnChangeToSubStateEx; // 0x18
		::System::Action_1<::Enum_3_C856E655551E512E>* OnChangeToSubState; // 0x20
		::System::Boolean _hasPendingNotify; // 0x28
		::Enum_3_C856E655551E512E _lastNotifiedState; // 0x2C
		::Enum_3_C856E655551E512E _BaseState_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__CCTOR_OFFSET))();
		}

		::Enum_3_C856E655551E512E get_OverrideHudState()
		{
			return ((::Enum_3_C856E655551E512E(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_GET_OVERRIDEHUDSTATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Struct_2_EDE9798445562320>* get_HUDStateOverrideList()
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_EDE9798445562320>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_GET_HUDSTATEOVERRIDELIST_OFFSET))(this);
		}

		::System::Void PushHudState(::System::String* tag, ::Enum_3_C856E655551E512E state, ::System::Int32 priority)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_C856E655551E512E, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_PUSHHUDSTATE_OFFSET))(this, tag, state, priority);
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

		::System::Boolean IsActive(::Enum_3_C856E655551E512E state)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_C856E655551E512E))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_ISACTIVE_OFFSET))(this, state);
		}

		::Enum_3_C856E655551E512E get_BaseState()
		{
			return ((::Enum_3_C856E655551E512E(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_GET_BASESTATE_OFFSET))(this);
		}

		::System::Void set_BaseState(::Enum_3_C856E655551E512E value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_C856E655551E512E))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_SET_BASESTATE_OFFSET))(this, value);
		}

		::Enum_3_C856E655551E512E get_CurrentHudState()
		{
			return ((::Enum_3_C856E655551E512E(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_GET_CURRENTHUDSTATE_OFFSET))(this);
		}

		::System::Void SetActive(::Enum_3_C856E655551E512E state, ::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_C856E655551E512E, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_SETACTIVE_OFFSET))(this, state, active);
		}

		::System::Void RecomputeBaseState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_RECOMPUTEBASESTATE_OFFSET))(this);
		}

		::System::Void NotifyIfChanged(::Enum_3_C856E655551E512E last)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_C856E655551E512E))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_NOTIFYIFCHANGED_OFFSET))(this, last);
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

		::System::Boolean _IsElevatorUsingOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__ISELEVATORUSINGOVERRIDE_OFFSET))(this);
		}

		::System::Void _CleanupElevatorOverrideIfLeaked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__CLEANUPELEVATOROVERRIDEIFLEAKED_OFFSET))(this);
		}

		::System::Boolean _StateContains(::Enum_3_C856E655551E512E state)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_C856E655551E512E))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__STATECONTAINS_OFFSET))(this, state);
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
