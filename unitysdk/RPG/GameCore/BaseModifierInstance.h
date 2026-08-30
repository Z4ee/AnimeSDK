#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierAddReason.h"
#include "unitysdk/RPG/GameCore/ModifierDeathSource.h"
#include "unitysdk/RPG/GameCore/ModifierStackingFlag.h"
#include "unitysdk/RPG/GameCore/ModifierState.h"
#include "unitysdk/RPG/GameCore/ModifierValueBindType.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/Struct_2_ABC67D4EFBF3BD9A_1.h"
#include "unitysdk/Struct_2_DF90B2BD73749811_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_417;
class Class_0_16E4307DCC419505_460;
class Class_1_1C30CE192ABE4C54;
class Class_1_5469D397DAE62876;
class Class_1_76D50EEEB128A93C;
class Class_1_A2D8E5AB4B623162;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierMutexEffectData; }
namespace RPG::GameCore { class GameComponentBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifierConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TaskListTemplate; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BASEMODIFIERINSTANCE_DESTROY_OFFSET UNITYSDK_OFFSET(0x1B6223A0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_DETACHALLEFFECTS_OFFSET UNITYSDK_OFFSET(0x1B620C00)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B6220D0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GETTASKLISTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1B622770)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_BASECONFIG_OFFSET UNITYSDK_OFFSET(0x1B623270)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_CASTERENTITY_OFFSET UNITYSDK_OFFSET(0x1B6232B0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1B6233D0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0x1B6233B0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_DELAYREPLACECASTER_OFFSET UNITYSDK_OFFSET(0x1B623420)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_DYNAMICSTRINGS_OFFSET UNITYSDK_OFFSET(0x1B623400)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_DYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0x1B6233E0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_ISACTIVATING_OFFSET UNITYSDK_OFFSET(0x1B623320)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_ISEXECUTINGIGNORETICKING_OFFSET UNITYSDK_OFFSET(0x1B623350)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_ISEXECUTING_OFFSET UNITYSDK_OFFSET(0x1B623340)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_ISPENDINGDISPOSE_OFFSET UNITYSDK_OFFSET(0x1B6233A0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_KEYFORSTATUSCONFIG_OFFSET UNITYSDK_OFFSET(0x1B623220)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B623200)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_STACKINGFLAG_OFFSET UNITYSDK_OFFSET(0x1B623250)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1B623230)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0x1B623290)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_ONREPLACE_OFFSET UNITYSDK_OFFSET(0x1B622550)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SETUPDYNAMICFLOATINJECTION_OFFSET UNITYSDK_OFFSET(0x1B621D40)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SETUPDYNAMICSTRINGINJECTION_OFFSET UNITYSDK_OFFSET(0x1B621E80)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_BASECONFIG_OFFSET UNITYSDK_OFFSET(0x1B623280)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x1B622000)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0x1B6233C0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_DYNAMICSTRINGS_OFFSET UNITYSDK_OFFSET(0x1B623410)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_DYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0x1B6233F0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_ISACTIVATING_OFFSET UNITYSDK_OFFSET(0x1B623330)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1B623210)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_STACKINGFLAG_OFFSET UNITYSDK_OFFSET(0x1B623260)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1B623240)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0x1B6232A0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_TICK_OFFSET UNITYSDK_OFFSET(0x1B622340)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6216A0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__EXECUTEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1B622950)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__ONATTACHEFFECTFADEOUTFINISH_OFFSET UNITYSDK_OFFSET(0x1B621230)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__ONMODIFIERVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1B6231B0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__ONOTHERMODIFIERATTACHEFFECTFADEOUTFINISH_OFFSET UNITYSDK_OFFSET(0x1B621590)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__ONOTHERMODIFIERDESTROY_OFFSET UNITYSDK_OFFSET(0x1B621480)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__SEQUENCEENDANDFLUSH_OFFSET UNITYSDK_OFFSET(0x1B623050)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__STARTTICKEDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1B622D60)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__TICKSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1B622E20)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__TRYDESTORYMODIFIEREFFECT_OFFSET UNITYSDK_OFFSET(0x1B620D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseModifierInstance_TypeDefinitionIndex = 54643;

	class BaseModifierInstance : public ::System::Object
	{
	public:
		::RPG::GameCore::ModifierConfig* _BaseConfig_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierMutexEffectData*>* _MutexEffectList; // 0x18
		::Class_1_1C30CE192ABE4C54* _DynamicValues_k__BackingField; // 0x20
		::RPG::GameCore::TaskContext* _TaskContext_k__BackingField; // 0x28
		::RPG::GameCore::GameEntity* _CasterEntity; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* _EffectList; // 0x38
		::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* _TmpEffectList; // 0x40
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* _DynamicStrings_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_1>* InitDynamicStringsInjections; // 0x50
		::System::String* _Name_k__BackingField; // 0x58
		::Class_0_16E4307DCC419505_417* _DelayReplaceAbility; // 0x60
		::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* InitDynamicFloatInjections; // 0x68
		::RPG::GameCore::TurnBasedModifierInstance* InfectSource; // 0x70
		::RPG::GameCore::ModifierStackingFlag _StackingFlag_k__BackingField; // 0x78
		::System::Int32 InitCount; // 0x7C
		::System::Boolean _IsActivating_k__BackingField; // 0x80
		::System::Boolean _IsPendingDispose; // 0x81
		::System::Boolean SilenceAdd; // 0x82
		::System::Int32 _ExecutingSequenceCount; // 0x84
		::RPG::GameCore::ModifierAddReason AddReason; // 0x88
		::System::Int32 _Count; // 0x8C
		::System::Int32 _TickingSequenceCount; // 0x90
		::RPG::GameCore::ModifierDeathSource _DeathSource_k__BackingField; // 0x94
		::RPG::GameCore::ModifierState _State_k__BackingField; // 0x98

		::System::Void _ctor(::System::String* a1, ::RPG::GameCore::ModifierConfig* a2, ::RPG::GameCore::GameEntity* a3, ::Class_1_A2D8E5AB4B623162* a4, ::Class_1_76D50EEEB128A93C* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::ModifierConfig*, ::RPG::GameCore::GameEntity*, ::Class_1_A2D8E5AB4B623162*, ::Class_1_76D50EEEB128A93C*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DetachAllEffects(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_DETACHALLEFFECTS_OFFSET))(this, a1);
		}

		::System::Void _TryDestoryModifierEffect(::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__TRYDESTORYMODIFIEREFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAttachEffectFadeOutFinish(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__ONATTACHEFFECTFADEOUTFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnOtherModifierDestroy(::Class_0_16E4307DCC419505_460* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__ONOTHERMODIFIERDESTROY_OFFSET))(this, a1);
		}

		::System::Void _OnOtherModifierAttachEffectFadeOutFinish(::Class_0_16E4307DCC419505_460* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__ONOTHERMODIFIERATTACHEFFECTFADEOUTFINISH_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_TICK_OFFSET))(this, a1);
		}

		::System::Void Destroy(::RPG::GameCore::ModifierDeathSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_DESTROY_OFFSET))(this, a1);
		}

		::System::Void OnReplace(::Class_0_16E4307DCC419505_417* a1, ::Class_1_76D50EEEB128A93C* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_417*, ::Class_1_76D50EEEB128A93C*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_ONREPLACE_OFFSET))(this, a1, a2);
		}

		::System::Void SetupDynamicFloatInjection(::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SETUPDYNAMICFLOATINJECTION_OFFSET))(this, a1);
		}

		::System::Void SetupDynamicStringInjection(::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_1>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_1>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SETUPDYNAMICSTRINGINJECTION_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskListTemplate* GetTaskListTemplate(::System::String* a1)
		{
			return ((::RPG::GameCore::TaskListTemplate*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GETTASKLISTTEMPLATE_OFFSET))(this, a1);
		}

		::System::Void _ExecuteImmediately(::Class_3_07C3C4D2990C49EE* a1, ::Class_1_5469D397DAE62876* a2, ::System::Boolean a3, ::RPG::GameCore::TurnBasedModifierEvent a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_07C3C4D2990C49EE*, ::Class_1_5469D397DAE62876*, ::System::Boolean, ::RPG::GameCore::TurnBasedModifierEvent))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__EXECUTEIMMEDIATELY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _StartTickedSequence(::Class_3_07C3C4D2990C49EE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__STARTTICKEDSEQUENCE_OFFSET))(this, a1);
		}

		::System::Void _TickSequence(::Class_3_07C3C4D2990C49EE* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_07C3C4D2990C49EE*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__TICKSEQUENCE_OFFSET))(this, a1, a2);
		}

		::System::Void _SequenceEndAndFlush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__SEQUENCEENDANDFLUSH_OFFSET))(this);
		}

		::System::Void _OnModifierValueChanged(::RPG::GameCore::ModifierValueBindType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierValueBindType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__ONMODIFIERVALUECHANGED_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_KeyForStatusConfig()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_KEYFORSTATUSCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::ModifierState get_State()
		{
			return ((::RPG::GameCore::ModifierState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::GameCore::ModifierState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_STATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::ModifierStackingFlag get_StackingFlag()
		{
			return ((::RPG::GameCore::ModifierStackingFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_STACKINGFLAG_OFFSET))(this);
		}

		::System::Void set_StackingFlag(::RPG::GameCore::ModifierStackingFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierStackingFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_STACKINGFLAG_OFFSET))(this, a1);
		}

		::RPG::GameCore::ModifierConfig* get_BaseConfig()
		{
			return ((::RPG::GameCore::ModifierConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_BASECONFIG_OFFSET))(this);
		}

		::System::Void set_BaseConfig(::RPG::GameCore::ModifierConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_BASECONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskContext* get_TaskContext()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_TASKCONTEXT_OFFSET))(this);
		}

		::System::Void set_TaskContext(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_TASKCONTEXT_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_CasterEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_CASTERENTITY_OFFSET))(this);
		}

		::System::Boolean get_IsActivating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_ISACTIVATING_OFFSET))(this);
		}

		::System::Void set_IsActivating(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_ISACTIVATING_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExecuting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_ISEXECUTING_OFFSET))(this);
		}

		::System::Boolean get_IsExecutingIgnoreTicking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_ISEXECUTINGIGNORETICKING_OFFSET))(this);
		}

		::System::Boolean get_IsPendingDispose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_ISPENDINGDISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::ModifierDeathSource get_DeathSource()
		{
			return ((::RPG::GameCore::ModifierDeathSource(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_DEATHSOURCE_OFFSET))(this);
		}

		::System::Void set_DeathSource(::RPG::GameCore::ModifierDeathSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_DEATHSOURCE_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_COUNT_OFFSET))(this, a1);
		}

		::Class_1_1C30CE192ABE4C54* get_DynamicValues()
		{
			return ((::Class_1_1C30CE192ABE4C54*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_DYNAMICVALUES_OFFSET))(this);
		}

		::System::Void set_DynamicValues(::Class_1_1C30CE192ABE4C54* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1C30CE192ABE4C54*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_DYNAMICVALUES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* get_DynamicStrings()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_DYNAMICSTRINGS_OFFSET))(this);
		}

		::System::Void set_DynamicStrings(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_DYNAMICSTRINGS_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_DelayReplaceCaster()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_DELAYREPLACECASTER_OFFSET))(this);
		}
	};
}
