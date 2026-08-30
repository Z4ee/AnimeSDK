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

inline static constexpr unsigned int Struct_2_52A902145F5BE513_4_TypeDefinitionIndex = 56418;

struct alignas(8) Struct_2_52A902145F5BE513_4
{
	::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x10
	::System::String* KBKOGLCAEKG; // 0x18
	::RPG::GameCore::GameEntityList* HAFHBEALHCD; // 0x20
	::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* HACPIPNNFGJ; // 0x28
	::RPG::GameCore::TurnState EHLFPNOBDHO; // 0x30
	::System::String* FNDKCMJDBAF; // 0x38
	::System::Boolean KCNCKFALLJG; // 0x40
	::System::Boolean EKGJLLPPOGP; // 0x41
	::System::Boolean KAJHHMFICKG; // 0x42
	::System::Boolean EAEHLIHAMIN; // 0x43
	::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>* FMCJJBALBEN; // 0x48
	::RPG::GameCore::AliveStateMask BAOGFEGJAHN; // 0x50
	::RPG::GameCore::AliveStateMask HDILGAPLELK; // 0x52
	::System::Boolean BDILLCNCCBO; // 0x54
	::System::Boolean LGKDFBLIOBP; // 0x55
	::System::Boolean FGMIILDDAEH; // 0x56
	::RPG::GameCore::ConditionPriority* CKHAGAPIMEL; // 0x58
	::Class_1_5F51D4049EA87B7B* OBFDONOPIEE; // 0x60
	::System::Boolean MBJGAMBENFD; // 0x68
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* IJOCLILHGFF; // 0x70
	::RPG::GameCore::ActionBarUIConfig* HMEKMIKDBLL; // 0x78
};
