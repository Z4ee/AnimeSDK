#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisiblityFollowFlag.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

inline static constexpr unsigned int Struct_2_3C1413457115002E_TypeDefinitionIndex = 52989;

struct alignas(8) Struct_2_3C1413457115002E
{
	::System::String* Field_2_0; // 0x10
	::RPG::GameCore::GameEntity* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::System::Boolean Field_2_3; // 0x28
	::System::Boolean Field_2_4; // 0x29
	::System::Int32 Field_2_5; // 0x2C
	::RPG::GameCore::CharacterVisiblityFollowFlag Field_2_6; // 0x30
	::RPG::GameCore::GameEntity* Field_2_7; // 0x38
};
