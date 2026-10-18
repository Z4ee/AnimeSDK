#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_07C3C4D2990C49EE.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/Struct_2_BA11F281BD100FCC.h"

class Class_0_16E4307DCC419505_648;
class Class_0_16E4307DCC419505_649;
class Class_1_5469D397DAE62876;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SequenceConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE8609A0)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE860C30)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_EXECUTEPREDICATE_OFFSET UNITYSDK_OFFSET(0xE860C10)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_MODIFIER_OFFSET UNITYSDK_OFFSET(0xE860B60)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_NEXT_OFFSET UNITYSDK_OFFSET(0xE860BA0)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_OWNERREF_OFFSET UNITYSDK_OFFSET(0xE860B70)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_PREV_OFFSET UNITYSDK_OFFSET(0xE860B80)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xE860BC0)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_RPG_ILINKABLENODE_RPG_GAMECORE_IDOTTURNBASEDMODIFIEREVENTPROCESSOR__GET_NEXT_OFFSET UNITYSDK_OFFSET(0xE860BF0)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_RPG_ILINKABLENODE_RPG_GAMECORE_IDOTTURNBASEDMODIFIEREVENTPROCESSOR__GET_PREV_OFFSET UNITYSDK_OFFSET(0xE860BD0)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_RPG_ILINKABLENODE_RPG_GAMECORE_IDOTTURNBASEDMODIFIEREVENTPROCESSOR__SET_NEXT_OFFSET UNITYSDK_OFFSET(0xE860C00)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_RPG_ILINKABLENODE_RPG_GAMECORE_IDOTTURNBASEDMODIFIEREVENTPROCESSOR__SET_PREV_OFFSET UNITYSDK_OFFSET(0xE860BE0)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_SET_EXECUTEPREDICATE_OFFSET UNITYSDK_OFFSET(0xE860C20)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_SET_NEXT_OFFSET UNITYSDK_OFFSET(0xE860BB0)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_SET_PREV_OFFSET UNITYSDK_OFFSET(0xE860B90)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xE860860)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE__CTOR_OFFSET UNITYSDK_OFFSET(0xE860700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedModifierInstance_ModifierSequenceComposite_TypeDefinitionIndex = 54844;

	class TurnBasedModifierInstance_ModifierSequenceComposite : public ::Class_3_07C3C4D2990C49EE
	{
	public:
		::Class_0_16E4307DCC419505_648* _RPG_ILinkableNode_RPG_GameCore_IDotTurnBasedModifierEventProcessor__Prev_k__BackingField; // 0x30
		::Class_0_16E4307DCC419505_648* _RPG_ILinkableNode_RPG_GameCore_IDotTurnBasedModifierEventProcessor__Next_k__BackingField; // 0x38
		::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* _TaskConfig; // 0x40
		::Class_0_16E4307DCC419505_649* _Next_k__BackingField; // 0x48
		::RPG::GameCore::TurnBasedModifierInstance* _ModifierInst; // 0x50
		::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* _RecallSeqs; // 0x58
		::RPG::GameCore::GameEntity* _OwnerRef; // 0x60
		::System::Func_3<::RPG::GameCore::TurnBasedModifierInstance*, ::Class_1_5469D397DAE62876*, ::System::Boolean>* _ExecutePredicate_k__BackingField; // 0x68
		::Class_0_16E4307DCC419505_649* _Prev_k__BackingField; // 0x70
		::System::Int32 _Priority; // 0x78
		::System::Boolean _IsGlobalEvent; // 0x7C
		::System::Boolean _CanRecall; // 0x7D
		::System::Int32 _CallCount; // 0x80
		::RPG::GameCore::TurnBasedModifierEvent _CurEventType; // 0x84

		::System::Void _ctor(::RPG::GameCore::TurnBasedModifierInstance* a1, ::System::Boolean a2, ::RPG::GameCore::TaskContext* a3, ::RPG::GameCore::SequenceConfig* a4, ::RPG::GameCore::TurnBasedModifierEvent a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SequenceConfig*, ::RPG::GameCore::TurnBasedModifierEvent, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_1(::RPG::GameCore::TurnBasedModifierInstance* a1, ::System::Boolean a2, ::RPG::GameCore::TaskContext* a3, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a4, ::RPG::GameCore::TurnBasedModifierEvent a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*, ::RPG::GameCore::TurnBasedModifierEvent, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
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

		::Class_0_16E4307DCC419505_649* get_Prev()
		{
			return ((::Class_0_16E4307DCC419505_649*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_PREV_OFFSET))(this);
		}

		::System::Void set_Prev(::Class_0_16E4307DCC419505_649* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_649*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_SET_PREV_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_649* get_Next()
		{
			return ((::Class_0_16E4307DCC419505_649*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_NEXT_OFFSET))(this);
		}

		::System::Void set_Next(::Class_0_16E4307DCC419505_649* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_649*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_SET_NEXT_OFFSET))(this, a1);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_PRIORITY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_648* RPG_ILinkableNode_RPG_GameCore_IDotTurnBasedModifierEventProcessor__get_Prev()
		{
			return ((::Class_0_16E4307DCC419505_648*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_RPG_ILINKABLENODE_RPG_GAMECORE_IDOTTURNBASEDMODIFIEREVENTPROCESSOR__GET_PREV_OFFSET))(this);
		}

		::System::Void RPG_ILinkableNode_RPG_GameCore_IDotTurnBasedModifierEventProcessor__set_Prev(::Class_0_16E4307DCC419505_648* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_648*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_RPG_ILINKABLENODE_RPG_GAMECORE_IDOTTURNBASEDMODIFIEREVENTPROCESSOR__SET_PREV_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_648* RPG_ILinkableNode_RPG_GameCore_IDotTurnBasedModifierEventProcessor__get_Next()
		{
			return ((::Class_0_16E4307DCC419505_648*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_RPG_ILINKABLENODE_RPG_GAMECORE_IDOTTURNBASEDMODIFIEREVENTPROCESSOR__GET_NEXT_OFFSET))(this);
		}

		::System::Void RPG_ILinkableNode_RPG_GameCore_IDotTurnBasedModifierEventProcessor__set_Next(::Class_0_16E4307DCC419505_648* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_648*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_RPG_ILINKABLENODE_RPG_GAMECORE_IDOTTURNBASEDMODIFIEREVENTPROCESSOR__SET_NEXT_OFFSET))(this, a1);
		}

		::System::Func_3<::RPG::GameCore::TurnBasedModifierInstance*, ::Class_1_5469D397DAE62876*, ::System::Boolean>* get_ExecutePredicate()
		{
			return ((::System::Func_3<::RPG::GameCore::TurnBasedModifierInstance*, ::Class_1_5469D397DAE62876*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_EXECUTEPREDICATE_OFFSET))(this);
		}

		::System::Void set_ExecutePredicate(::System::Func_3<::RPG::GameCore::TurnBasedModifierInstance*, ::Class_1_5469D397DAE62876*, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_3<::RPG::GameCore::TurnBasedModifierInstance*, ::Class_1_5469D397DAE62876*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_SET_EXECUTEPREDICATE_OFFSET))(this, a1);
		}

		::System::Void Execute(::Struct_2_BA11F281BD100FCC& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_BA11F281BD100FCC&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_EXECUTE_OFFSET))(this, a1);
		}
	};
}
