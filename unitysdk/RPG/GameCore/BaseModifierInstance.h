#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierAddReason.h"
#include "unitysdk/RPG/GameCore/ModifierDeathSource.h"
#include "unitysdk/RPG/GameCore/ModifierStackingFlag.h"
#include "unitysdk/RPG/GameCore/ModifierState.h"
#include "unitysdk/RPG/GameCore/ModifierValueBindType.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/Struct_2_ABC67D4EFBF3BD9A_1.h"
#include "unitysdk/Struct_2_DF90B2BD73749811_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_345;
class Class_0_16E4307DCC419505_382;
class Class_1_2CAAA2FDF9170110;
class Class_1_5469D397DAE62876;
class Class_1_A2D8E5AB4B623162;
class Class_1_B086460A47690D65;
class Class_3_E21F6DE9B7FA4D05;
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

#define RPG_GAMECORE_BASEMODIFIERINSTANCE_DESTROY_OFFSET UNITYSDK_OFFSET(0xB5C0180)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_DETACHALLEFFECTS_OFFSET UNITYSDK_OFFSET(0xB5BEE30)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5BFF10)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GETTASKLISTTEMPLATE_OFFSET UNITYSDK_OFFSET(0xB5C0390)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_BASECONFIG_OFFSET UNITYSDK_OFFSET(0xB5C0BF0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_CASTERENTITY_OFFSET UNITYSDK_OFFSET(0xB5C0C30)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xB5C0DB0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0xB5C0D90)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_DELAYREPLACECASTER_OFFSET UNITYSDK_OFFSET(0xB5C0E00)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_DYNAMICSTRINGS_OFFSET UNITYSDK_OFFSET(0xB5C0DE0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_DYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0xB5C0DC0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_ISACTIVATING_OFFSET UNITYSDK_OFFSET(0xB5C0D00)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_ISEXECUTINGIGNORETICKING_OFFSET UNITYSDK_OFFSET(0xB5C0D30)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_ISEXECUTING_OFFSET UNITYSDK_OFFSET(0xB5C0D20)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_ISPENDINGDISPOSE_OFFSET UNITYSDK_OFFSET(0xB5C0D80)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_KEYFORSTATUSCONFIG_OFFSET UNITYSDK_OFFSET(0xB5C0BA0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB5C0B80)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_STACKINGFLAG_OFFSET UNITYSDK_OFFSET(0xB5C0BD0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_STATE_OFFSET UNITYSDK_OFFSET(0xB5C0BB0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0xB5C0C10)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_ONREPLACE_OFFSET UNITYSDK_OFFSET(0xB5C02B0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SETUPDYNAMICFLOATINJECTION_OFFSET UNITYSDK_OFFSET(0xB5BFBD0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SETUPDYNAMICSTRINGINJECTION_OFFSET UNITYSDK_OFFSET(0xB5BFCF0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_BASECONFIG_OFFSET UNITYSDK_OFFSET(0xB5C0C00)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_COUNT_OFFSET UNITYSDK_OFFSET(0xB5BFEA0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0xB5C0DA0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_DYNAMICSTRINGS_OFFSET UNITYSDK_OFFSET(0xB5C0DF0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_DYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0xB5C0DD0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_ISACTIVATING_OFFSET UNITYSDK_OFFSET(0xB5C0D10)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB5C0B90)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_STACKINGFLAG_OFFSET UNITYSDK_OFFSET(0xB5C0BE0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_STATE_OFFSET UNITYSDK_OFFSET(0xB5C0BC0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0xB5C0C20)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_TICK_OFFSET UNITYSDK_OFFSET(0xB5C0120)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xB5BF5D0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__EXECUTEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xB5C0540)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__ONATTACHEFFECTFADEOUTFINISH_OFFSET UNITYSDK_OFFSET(0xB5BF320)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__ONMODIFIERVALUECHANGED_OFFSET UNITYSDK_OFFSET(0xB5C0B30)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__ONOTHERMODIFIERATTACHEFFECTFADEOUTFINISH_OFFSET UNITYSDK_OFFSET(0xB5BF530)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__ONOTHERMODIFIERDESTROY_OFFSET UNITYSDK_OFFSET(0xB5BF490)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__SEQUENCEENDANDFLUSH_OFFSET UNITYSDK_OFFSET(0xB5C0AA0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__STARTTICKEDSEQUENCE_OFFSET UNITYSDK_OFFSET(0xB5C0810)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__TICKSEQUENCE_OFFSET UNITYSDK_OFFSET(0xB5C08D0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__TRYDESTORYMODIFIEREFFECT_OFFSET UNITYSDK_OFFSET(0xB5BEF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseModifierInstance_TypeDefinitionIndex = 50208;

	class BaseModifierInstance : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_345* _DelayReplaceAbility; // 0x10
		::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_1>* InitDynamicStringsInjections; // 0x18
		::RPG::GameCore::ModifierConfig* _BaseConfig_k__BackingField; // 0x20
		::RPG::GameCore::GameEntity* _CasterEntity; // 0x28
		::Class_1_2CAAA2FDF9170110* _DynamicValues_k__BackingField; // 0x30
		::RPG::GameCore::TurnBasedModifierInstance* InfectSource; // 0x38
		::System::String* _Name_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* _EffectList; // 0x48
		::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* InitDynamicFloatInjections; // 0x50
		::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* _TmpEffectList; // 0x58
		::RPG::GameCore::TaskContext* _TaskContext_k__BackingField; // 0x60
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* _DynamicStrings_k__BackingField; // 0x68
		::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierMutexEffectData*>* _MutexEffectList; // 0x70
		::System::Int32 InitCount; // 0x78
		::System::Int32 _Count; // 0x7C
		::RPG::GameCore::ModifierStackingFlag _StackingFlag_k__BackingField; // 0x80
		::System::Int32 _TickingSequenceCount; // 0x84
		::System::Boolean _IsActivating_k__BackingField; // 0x88
		::System::Boolean _IsPendingDispose; // 0x89
		::System::Boolean SilenceAdd; // 0x8A
		::System::Int32 _ExecutingSequenceCount; // 0x8C
		::RPG::GameCore::ModifierDeathSource _DeathSource_k__BackingField; // 0x90
		::RPG::GameCore::ModifierState _State_k__BackingField; // 0x94
		::RPG::GameCore::ModifierAddReason AddReason; // 0x98

		::System::Void _ctor(::System::String* sName, ::RPG::GameCore::ModifierConfig* pConfig, ::RPG::GameCore::GameEntity* pModifierOwner, ::Class_1_A2D8E5AB4B623162* pCastAbility, ::Class_1_B086460A47690D65* pInitParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::ModifierConfig*, ::RPG::GameCore::GameEntity*, ::Class_1_A2D8E5AB4B623162*, ::Class_1_B086460A47690D65*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__CTOR_OFFSET))(this, sName, pConfig, pModifierOwner, pCastAbility, pInitParams);
		}

		::System::Void DetachAllEffects(::System::Boolean fadeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_DETACHALLEFFECTS_OFFSET))(this, fadeout);
		}

		::System::Void _TryDestoryModifierEffect(::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* effectList, ::System::Boolean bIsFadeOut)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__TRYDESTORYMODIFIEREFFECT_OFFSET))(this, effectList, bIsFadeOut);
		}

		::System::Void _OnAttachEffectFadeOutFinish(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* effectData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__ONATTACHEFFECTFADEOUTFINISH_OFFSET))(this, effectData);
		}

		::System::Void _OnOtherModifierDestroy(::Class_0_16E4307DCC419505_382* pEvtRef)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__ONOTHERMODIFIERDESTROY_OFFSET))(this, pEvtRef);
		}

		::System::Void _OnOtherModifierAttachEffectFadeOutFinish(::Class_0_16E4307DCC419505_382* pEvtRef)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__ONOTHERMODIFIERATTACHEFFECTFADEOUTFINISH_OFFSET))(this, pEvtRef);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fDeltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_TICK_OFFSET))(this, fDeltaTime);
		}

		::System::Void Destroy(::RPG::GameCore::ModifierDeathSource deathSource)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_DESTROY_OFFSET))(this, deathSource);
		}

		::System::Void OnReplace(::Class_0_16E4307DCC419505_345* pNewAbilityInstance, ::Class_1_B086460A47690D65* pInitParams)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_345*, ::Class_1_B086460A47690D65*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_ONREPLACE_OFFSET))(this, pNewAbilityInstance, pInitParams);
		}

		::System::Void SetupDynamicFloatInjection(::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* pList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SETUPDYNAMICFLOATINJECTION_OFFSET))(this, pList);
		}

		::System::Void SetupDynamicStringInjection(::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_1>* pList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_1>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SETUPDYNAMICSTRINGINJECTION_OFFSET))(this, pList);
		}

		::RPG::GameCore::TaskListTemplate* GetTaskListTemplate(::System::String* name)
		{
			return ((::RPG::GameCore::TaskListTemplate*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GETTASKLISTTEMPLATE_OFFSET))(this, name);
		}

		::System::Void _ExecuteImmediately(::Class_3_E21F6DE9B7FA4D05* pSeq, ::Class_1_5469D397DAE62876* pParamData, ::System::Boolean bExecuteWhenModifierDestroyed)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_E21F6DE9B7FA4D05*, ::Class_1_5469D397DAE62876*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__EXECUTEIMMEDIATELY_OFFSET))(this, pSeq, pParamData, bExecuteWhenModifierDestroyed);
		}

		::System::Void _StartTickedSequence(::Class_3_E21F6DE9B7FA4D05* pSequence)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_E21F6DE9B7FA4D05*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__STARTTICKEDSEQUENCE_OFFSET))(this, pSequence);
		}

		::System::Void _TickSequence(::Class_3_E21F6DE9B7FA4D05* pSequence, ::System::Single fDeltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_E21F6DE9B7FA4D05*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__TICKSEQUENCE_OFFSET))(this, pSequence, fDeltaTime);
		}

		::System::Void _SequenceEndAndFlush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__SEQUENCEENDANDFLUSH_OFFSET))(this);
		}

		::System::Void _OnModifierValueChanged(::RPG::GameCore::ModifierValueBindType bindType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierValueBindType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__ONMODIFIERVALUECHANGED_OFFSET))(this, bindType);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_KeyForStatusConfig()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_KEYFORSTATUSCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::ModifierState get_State()
		{
			return ((::RPG::GameCore::ModifierState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::GameCore::ModifierState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_STATE_OFFSET))(this, value);
		}

		::RPG::GameCore::ModifierStackingFlag get_StackingFlag()
		{
			return ((::RPG::GameCore::ModifierStackingFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_STACKINGFLAG_OFFSET))(this);
		}

		::System::Void set_StackingFlag(::RPG::GameCore::ModifierStackingFlag value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierStackingFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_STACKINGFLAG_OFFSET))(this, value);
		}

		::RPG::GameCore::ModifierConfig* get_BaseConfig()
		{
			return ((::RPG::GameCore::ModifierConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_BASECONFIG_OFFSET))(this);
		}

		::System::Void set_BaseConfig(::RPG::GameCore::ModifierConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_BASECONFIG_OFFSET))(this, value);
		}

		::RPG::GameCore::TaskContext* get_TaskContext()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_TASKCONTEXT_OFFSET))(this);
		}

		::System::Void set_TaskContext(::RPG::GameCore::TaskContext* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_TASKCONTEXT_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_CasterEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_CASTERENTITY_OFFSET))(this);
		}

		::System::Boolean get_IsActivating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_ISACTIVATING_OFFSET))(this);
		}

		::System::Void set_IsActivating(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_ISACTIVATING_OFFSET))(this, value);
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

		::System::Void set_DeathSource(::RPG::GameCore::ModifierDeathSource value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_DEATHSOURCE_OFFSET))(this, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_COUNT_OFFSET))(this, value);
		}

		::Class_1_2CAAA2FDF9170110* get_DynamicValues()
		{
			return ((::Class_1_2CAAA2FDF9170110*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_DYNAMICVALUES_OFFSET))(this);
		}

		::System::Void set_DynamicValues(::Class_1_2CAAA2FDF9170110* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2CAAA2FDF9170110*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_DYNAMICVALUES_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* get_DynamicStrings()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_DYNAMICSTRINGS_OFFSET))(this);
		}

		::System::Void set_DynamicStrings(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_DYNAMICSTRINGS_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_DelayReplaceCaster()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_DELAYREPLACECASTER_OFFSET))(this);
		}
	};
}
