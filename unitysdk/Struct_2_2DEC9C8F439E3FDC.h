#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SkillTargetCandidateState.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

inline static constexpr unsigned int Struct_2_2DEC9C8F439E3FDC_TypeDefinitionIndex = 55121;

struct alignas(8) Struct_2_2DEC9C8F439E3FDC
{
	::RPG::GameCore::GameEntity* Field_2_0; // 0x10
	::RPG::GameCore::SkillTargetCandidateState Field_2_1; // 0x18
	::RPG::Client::TextID Field_2_2; // 0x20
	::System::String* Field_2_3; // 0x30
};
