#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SkillTargetCandidateState.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

inline static constexpr unsigned int Struct_2_2DEC9C8F439E3FDC_TypeDefinitionIndex = 57844;

struct alignas(8) Struct_2_2DEC9C8F439E3FDC
{
	::RPG::GameCore::GameEntity* ECCMPMOGIGN; // 0x10
	::RPG::GameCore::SkillTargetCandidateState MEPFOEEGBEA; // 0x18
	::RPG::Client::TextID LHALPAOODDJ; // 0x20
	::System::String* HLNDDMBAKKN; // 0x30
};
