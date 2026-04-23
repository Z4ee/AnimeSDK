#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_E21F6DE9B7FA4D05.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/Struct_2_BA11F281BD100FCC.h"

class Class_0_16E4307DCC419505_486;
class Class_0_16E4307DCC419505_487;
class Class_1_5469D397DAE62876;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SequenceConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB854470)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB8500D0)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_EXECUTEPREDICATE_OFFSET UNITYSDK_OFFSET(0xB854630)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_MODIFIER_OFFSET UNITYSDK_OFFSET(0xB854580)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_NEXT_OFFSET UNITYSDK_OFFSET(0xB8545C0)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_OWNERREF_OFFSET UNITYSDK_OFFSET(0xB854590)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_PREV_OFFSET UNITYSDK_OFFSET(0xB8545A0)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xB8545E0)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_RPG_ILINKABLENODE_RPG_GAMECORE_IDOTTURNBASEDMODIFIEREVENTPROCESSOR__GET_NEXT_OFFSET UNITYSDK_OFFSET(0xB854610)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_RPG_ILINKABLENODE_RPG_GAMECORE_IDOTTURNBASEDMODIFIEREVENTPROCESSOR__GET_PREV_OFFSET UNITYSDK_OFFSET(0xB8545F0)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_RPG_ILINKABLENODE_RPG_GAMECORE_IDOTTURNBASEDMODIFIEREVENTPROCESSOR__SET_NEXT_OFFSET UNITYSDK_OFFSET(0xB854620)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_RPG_ILINKABLENODE_RPG_GAMECORE_IDOTTURNBASEDMODIFIEREVENTPROCESSOR__SET_PREV_OFFSET UNITYSDK_OFFSET(0xB854600)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_SET_EXECUTEPREDICATE_OFFSET UNITYSDK_OFFSET(0xB854640)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_SET_NEXT_OFFSET UNITYSDK_OFFSET(0xB8545D0)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_SET_PREV_OFFSET UNITYSDK_OFFSET(0xB8545B0)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB84FF80)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE__CTOR_OFFSET UNITYSDK_OFFSET(0xB854300)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB854650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedModifierInstance_ModifierSequenceComposite_TypeDefinitionIndex = 51475;

	class TurnBasedModifierInstance_ModifierSequenceComposite : public ::Class_3_E21F6DE9B7FA4D05
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* _ModifierInst; // 0x30
		::RPG::GameCore::GameEntity* _OwnerRef; // 0x38
		::Class_0_16E4307DCC419505_486* _RPG_ILinkableNode_RPG_GameCore_IDotTurnBasedModifierEventProcessor__Prev_k__BackingField; // 0x40
		::Class_0_16E4307DCC419505_487* _Next_k__BackingField; // 0x48
		::Class_0_16E4307DCC419505_486* _RPG_ILinkableNode_RPG_GameCore_IDotTurnBasedModifierEventProcessor__Next_k__BackingField; // 0x50
		::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* _TaskConfig; // 0x58
		::Class_0_16E4307DCC419505_487* _Prev_k__BackingField; // 0x60
		::System::Func_3<::RPG::GameCore::TurnBasedModifierInstance*, ::Class_1_5469D397DAE62876*, ::System::Boolean>* _ExecutePredicate_k__BackingField; // 0x68
		::System::Collections::Generic::List_1<::Class_3_E21F6DE9B7FA4D05*>* _RecallSeqs; // 0x70
		::System::Int32 _Priority; // 0x78
		::System::Int32 _CallCount; // 0x7C
		::System::Boolean _IsGlobalEvent; // 0x80
		::System::Boolean _CanRecall; // 0x81
		::RPG::GameCore::TurnBasedModifierEvent _CurEventType; // 0x84

		::System::Void _ctor(::RPG::GameCore::TurnBasedModifierInstance* modifier, ::System::Boolean canRecall, ::RPG::GameCore::TaskContext* Context, ::RPG::GameCore::SequenceConfig* pConfig, ::RPG::GameCore::TurnBasedModifierEvent eEvent, ::System::Int32 priority)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SequenceConfig*, ::RPG::GameCore::TurnBasedModifierEvent, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE__CTOR_OFFSET))(this, modifier, canRecall, Context, pConfig, eEvent, priority);
		}

		::System::Void _ctor_1(::RPG::GameCore::TurnBasedModifierInstance* modifier, ::System::Boolean canRecall, ::RPG::GameCore::TaskContext* Context, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* TaskConfigList, ::RPG::GameCore::TurnBasedModifierEvent eEvent, ::System::Int32 priority)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*, ::RPG::GameCore::TurnBasedModifierEvent, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE__CTOR_1_OFFSET))(this, modifier, canRecall, Context, TaskConfigList, eEvent, priority);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::TurnBasedModifierInstance* get_Modifier()
		{
			return ((::RPG::GameCore::TurnBasedModifierInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_MODIFIER_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OwnerRef()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_OWNERREF_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_487* get_Prev()
		{
			return ((::Class_0_16E4307DCC419505_487*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_PREV_OFFSET))(this);
		}

		::System::Void set_Prev(::Class_0_16E4307DCC419505_487* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_487*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_SET_PREV_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_487* get_Next()
		{
			return ((::Class_0_16E4307DCC419505_487*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_NEXT_OFFSET))(this);
		}

		::System::Void set_Next(::Class_0_16E4307DCC419505_487* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_487*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_SET_NEXT_OFFSET))(this, value);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_PRIORITY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_486* RPG_ILinkableNode_RPG_GameCore_IDotTurnBasedModifierEventProcessor__get_Prev()
		{
			return ((::Class_0_16E4307DCC419505_486*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_RPG_ILINKABLENODE_RPG_GAMECORE_IDOTTURNBASEDMODIFIEREVENTPROCESSOR__GET_PREV_OFFSET))(this);
		}

		::System::Void RPG_ILinkableNode_RPG_GameCore_IDotTurnBasedModifierEventProcessor__set_Prev(::Class_0_16E4307DCC419505_486* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_486*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_RPG_ILINKABLENODE_RPG_GAMECORE_IDOTTURNBASEDMODIFIEREVENTPROCESSOR__SET_PREV_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_486* RPG_ILinkableNode_RPG_GameCore_IDotTurnBasedModifierEventProcessor__get_Next()
		{
			return ((::Class_0_16E4307DCC419505_486*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_RPG_ILINKABLENODE_RPG_GAMECORE_IDOTTURNBASEDMODIFIEREVENTPROCESSOR__GET_NEXT_OFFSET))(this);
		}

		::System::Void RPG_ILinkableNode_RPG_GameCore_IDotTurnBasedModifierEventProcessor__set_Next(::Class_0_16E4307DCC419505_486* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_486*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_RPG_ILINKABLENODE_RPG_GAMECORE_IDOTTURNBASEDMODIFIEREVENTPROCESSOR__SET_NEXT_OFFSET))(this, value);
		}

		::System::Func_3<::RPG::GameCore::TurnBasedModifierInstance*, ::Class_1_5469D397DAE62876*, ::System::Boolean>* get_ExecutePredicate()
		{
			return ((::System::Func_3<::RPG::GameCore::TurnBasedModifierInstance*, ::Class_1_5469D397DAE62876*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_EXECUTEPREDICATE_OFFSET))(this);
		}

		::System::Void set_ExecutePredicate(::System::Func_3<::RPG::GameCore::TurnBasedModifierInstance*, ::Class_1_5469D397DAE62876*, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_3<::RPG::GameCore::TurnBasedModifierInstance*, ::Class_1_5469D397DAE62876*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_SET_EXECUTEPREDICATE_OFFSET))(this, value);
		}

		::System::Void Execute(::Struct_2_BA11F281BD100FCC& ctx)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_BA11F281BD100FCC&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_EXECUTE_OFFSET))(this, ctx);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
