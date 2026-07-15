#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SoundEmitterType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

inline static constexpr unsigned int Struct_2_7A3F2FEE63423E6C_TypeDefinitionIndex = 53935;

struct alignas(8) Struct_2_7A3F2FEE63423E6C
{
	::RPG::GameCore::SoundEmitterType Field_2_0; // 0x10
	::RPG::GameCore::TargetEvaluator* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::System::UInt32 Field_2_3; // 0x28
	::System::UInt32 Field_2_4; // 0x2C
};
