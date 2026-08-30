#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }

inline static constexpr unsigned int Struct_2_B4045B92AE12A5DB_TypeDefinitionIndex = 58396;

struct alignas(8) Struct_2_B4045B92AE12A5DB
{
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* NKCKAJPAJCJ; // 0x10
	::RPG::GameCore::PredicateConfig* EKIJFPIPCKF; // 0x18
	::RPG::GameCore::GameEntity* BBOFFGLPHCJ; // 0x20
	::System::Boolean CJNKAFDBIHP; // 0x28
};
