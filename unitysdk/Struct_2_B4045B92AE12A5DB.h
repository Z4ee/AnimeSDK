#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }

inline static constexpr unsigned int Struct_2_B4045B92AE12A5DB_TypeDefinitionIndex = 55665;

struct alignas(8) Struct_2_B4045B92AE12A5DB
{
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_2_0; // 0x10
	::RPG::GameCore::PredicateConfig* Field_2_1; // 0x18
	::RPG::GameCore::GameEntity* Field_2_2; // 0x20
	::System::Boolean Field_2_3; // 0x28
};
