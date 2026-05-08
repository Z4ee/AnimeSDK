#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D9968D936B3A50DA.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_EDE9798445562320.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HUDSTATESUBSYSTEM_BINDEVENTS_OFFSET UNITYSDK_OFFSET(0x1428D410)
#define MOLEMOLE_HUDSTATESUBSYSTEM_GET_BASESTATE_OFFSET UNITYSDK_OFFSET(0x1428CC90)
#define MOLEMOLE_HUDSTATESUBSYSTEM_GET_CURRENTHUDSTATE_OFFSET UNITYSDK_OFFSET(0x1428CB60)
#define MOLEMOLE_HUDSTATESUBSYSTEM_GET_HUDSTATEOVERRIDELIST_OFFSET UNITYSDK_OFFSET(0x1428C650)
#define MOLEMOLE_HUDSTATESUBSYSTEM_GET_OVERRIDEHUDSTATE_OFFSET UNITYSDK_OFFSET(0x1428C5E0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1428CC00)
#define MOLEMOLE_HUDSTATESUBSYSTEM_NOTIFYIFCHANGED_OFFSET UNITYSDK_OFFSET(0x1428D130)
#define MOLEMOLE_HUDSTATESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1428D1D0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1428DE10)
#define MOLEMOLE_HUDSTATESUBSYSTEM_POPHUDSTATE_OFFSET UNITYSDK_OFFSET(0x1428C960)
#define MOLEMOLE_HUDSTATESUBSYSTEM_PUSHHUDSTATE_OFFSET UNITYSDK_OFFSET(0x1428C760)
#define MOLEMOLE_HUDSTATESUBSYSTEM_RECOMPUTEBASESTATE_OFFSET UNITYSDK_OFFSET(0x1428CDD0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1428CCB0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_SETINITIALSTATE_OFFSET UNITYSDK_OFFSET(0x1428D230)
#define MOLEMOLE_HUDSTATESUBSYSTEM_SET_BASESTATE_OFFSET UNITYSDK_OFFSET(0x1428CCA0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_UNBINDEVENTS_OFFSET UNITYSDK_OFFSET(0x1428DE60)
#define MOLEMOLE_HUDSTATESUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1428F1F0)
#define MOLEMOLE_HUDSTATESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1428F120)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ISCOOPMODE_OFFSET UNITYSDK_OFFSET(0x1428E860)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONAVATARINOUTBATTLECHANGE_OFFSET UNITYSDK_OFFSET(0x1428E960)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONCOOPREGIONPLAYCHANGE_OFFSET UNITYSDK_OFFSET(0x1428EC30)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONETHERSTRONGSTATEINOUT_OFFSET UNITYSDK_OFFSET(0x1428EBD0)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONINOUTBANGBOO_OFFSET UNITYSDK_OFFSET(0x1428EB70)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONMAINCHARACTERDIE_OFFSET UNITYSDK_OFFSET(0x1428ECF0)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONPOPSTREAMINGHUDSTATE_OFFSET UNITYSDK_OFFSET(0x1428EE00)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONPUSHSTREAMINGHUDSTATE_OFFSET UNITYSDK_OFFSET(0x1428ED50)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONSTREAMINGGAMEUNSTUCKCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1428EEB0)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ONSTREAMINGHUDSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1428EF50)
#define MOLEMOLE_HUDSTATESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1428F510)
#define MOLEMOLE_HUDSTATESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1428F5A0)

namespace MoleMole
{
	inline static constexpr unsigned int HUDStateSubsystem_TypeDefinitionIndex = 57466;

	class HUDStateSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::HUDStateSubsystem*>
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::Enum_3_D9968D936B3A50DA, ::System::Int32>** StaticGet_StatePriorities()
		{
			return (::System::Collections::Generic::Dictionary_2<::Enum_3_D9968D936B3A50DA, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HUDStateSubsystem_TypeDefinitionIndex)->GetStaticField(0x45BA0);
		}
		::System::Collections::Generic::HashSet_1<::Enum_3_D9968D936B3A50DA>* _active; // 0x10
		::System::Action_1<::Enum_3_D9968D936B3A50DA>* OnChangeToSubState; // 0x18
		::Enum_3_D9968D936B3A50DA _BaseState_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__CCTOR_OFFSET))();
		}

		::Enum_3_D9968D936B3A50DA get_OverrideHudState()
		{
			return ((::Enum_3_D9968D936B3A50DA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_GET_OVERRIDEHUDSTATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Struct_2_EDE9798445562320>* get_HUDStateOverrideList()
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_EDE9798445562320>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_GET_HUDSTATEOVERRIDELIST_OFFSET))(this);
		}

		::System::Void PushHudState(::System::String* tag, ::Enum_3_D9968D936B3A50DA state, ::System::Int32 priority)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_D9968D936B3A50DA, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_PUSHHUDSTATE_OFFSET))(this, tag, state, priority);
		}

		::System::Void PopHudState(::System::String* tag, ::System::Boolean needRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_POPHUDSTATE_OFFSET))(this, tag, needRefresh);
		}

		::System::Boolean IsActive(::Enum_3_D9968D936B3A50DA state)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_D9968D936B3A50DA))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_ISACTIVE_OFFSET))(this, state);
		}

		::Enum_3_D9968D936B3A50DA get_BaseState()
		{
			return ((::Enum_3_D9968D936B3A50DA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_GET_BASESTATE_OFFSET))(this);
		}

		::System::Void set_BaseState(::Enum_3_D9968D936B3A50DA value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_D9968D936B3A50DA))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_SET_BASESTATE_OFFSET))(this, value);
		}

		::Enum_3_D9968D936B3A50DA get_CurrentHudState()
		{
			return ((::Enum_3_D9968D936B3A50DA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_GET_CURRENTHUDSTATE_OFFSET))(this);
		}

		::System::Void SetActive(::Enum_3_D9968D936B3A50DA state, ::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_D9968D936B3A50DA, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_SETACTIVE_OFFSET))(this, state, active);
		}

		::System::Void RecomputeBaseState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_RECOMPUTEBASESTATE_OFFSET))(this);
		}

		::System::Void NotifyIfChanged(::Enum_3_D9968D936B3A50DA last)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_D9968D936B3A50DA))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_NOTIFYIFCHANGED_OFFSET))(this, last);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_ONAWAKE_OFFSET))(this);
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

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
