#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

inline static constexpr unsigned int Struct_2_76A4522D4905FF64_TypeDefinitionIndex = 57467;

struct alignas(8) Struct_2_76A4522D4905FF64
{
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::UnityEngine::Vector3 Field_2_3; // 0x28
	::RPG::GameCore::GameEntity* Field_2_4; // 0x38
};
