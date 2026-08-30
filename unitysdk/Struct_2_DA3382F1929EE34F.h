#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamMemberCountingOption.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

inline static constexpr unsigned int Struct_2_DA3382F1929EE34F_TypeDefinitionIndex = 56617;

struct alignas(8) Struct_2_DA3382F1929EE34F
{
	::RPG::GameCore::TargetEvaluator* DMJCIFFAFNK; // 0x10
	::System::String* BDMNDNBMKAG; // 0x18
	::System::Boolean OIPOMFLGBOB; // 0x20
	::RPG::GameCore::TargetEvaluator* KGONNLNKLDB; // 0x28
	::System::Boolean JPNNNDFMBBJ; // 0x30
	::RPG::GameCore::TeamType BEGKIKOGEOD; // 0x34
	::System::Boolean DAJDJCBHMHK; // 0x38
	::RPG::GameCore::TaskContext* GPKCGOLOJKC; // 0x40
	::RPG::GameCore::TeamMemberCountingOption CBFAMPJIHKG; // 0x48
};
