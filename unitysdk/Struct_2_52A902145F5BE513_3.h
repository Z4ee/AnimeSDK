#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicFloatInjection.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/ValueType.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class ActionBarUIConfig; }
namespace RPG::GameCore { class ConditionPriority; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

inline static constexpr unsigned int Struct_2_52A902145F5BE513_3_TypeDefinitionIndex = 53699;

struct alignas(8) Struct_2_52A902145F5BE513_3
{
	::RPG::GameCore::TaskContext* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::RPG::GameCore::GameEntityList* Field_2_2; // 0x20
	::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* Field_2_3; // 0x28
	::RPG::GameCore::TurnState Field_2_4; // 0x30
	::System::String* Field_2_5; // 0x38
	::System::Boolean Field_2_6; // 0x40
	::System::Boolean Field_2_7; // 0x41
	::System::Boolean Field_2_8; // 0x42
	::System::Boolean Field_2_9; // 0x43
	::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>* Field_2_10; // 0x48
	::RPG::GameCore::AliveStateMask Field_2_11; // 0x50
	::RPG::GameCore::AliveStateMask Field_2_12; // 0x52
	::System::Boolean Field_2_13; // 0x54
	::System::Boolean Field_2_14; // 0x55
	::System::Boolean Field_2_15; // 0x56
	::RPG::GameCore::ConditionPriority* Field_2_16; // 0x58
	::Class_1_5F51D4049EA87B7B* Field_2_17; // 0x60
	::System::Boolean Field_2_18; // 0x68
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Field_2_19; // 0x70
	::RPG::GameCore::ActionBarUIConfig* Field_2_20; // 0x78
};
