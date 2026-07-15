#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamMemberCountingOption.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

inline static constexpr unsigned int Struct_2_DA3382F1929EE34F_TypeDefinitionIndex = 53897;

struct alignas(8) Struct_2_DA3382F1929EE34F
{
	::RPG::GameCore::TargetEvaluator* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_2_3; // 0x28
	::System::Boolean Field_2_4; // 0x30
	::RPG::GameCore::TeamType Field_2_5; // 0x34
	::System::Boolean Field_2_6; // 0x38
	::RPG::GameCore::TaskContext* Field_2_7; // 0x40
	::RPG::GameCore::TeamMemberCountingOption Field_2_8; // 0x48
};
