#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class CharacterInputData; }

inline static constexpr unsigned int Struct_2_8DF138C61E6ABA58_TypeDefinitionIndex = 54538;

struct alignas(8) Struct_2_8DF138C61E6ABA58
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::RPG::GameCore::CharacterInputData* Field_2_1; // 0x20
	::System::Boolean Field_2_2; // 0x28
};
