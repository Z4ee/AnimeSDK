#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnbasedModifierDelayType.h"
#include "unitysdk/System/ValueType.h"

class Class_2_1DB6C02CA182EEBA;
class Class_2_7AA0468CE6C1F3D7_1;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

inline static constexpr unsigned int Struct_2_A8953B47AD39378D_TypeDefinitionIndex = 55184;

struct alignas(8) Struct_2_A8953B47AD39378D
{
	::RPG::GameCore::TurnbasedModifierDelayType Field_2_0; // 0x10
	::RPG::GameCore::TurnBasedModifierInstance* Field_2_1; // 0x18
	::Class_2_1DB6C02CA182EEBA* Field_2_2; // 0x20
	::Class_2_7AA0468CE6C1F3D7_1* Field_2_3; // 0x28
};
