#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillPropertyModifyType.h"
#include "unitysdk/RPG/GameCore/SkillPropertyType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Struct_2_8792219C039E2D7A_TypeDefinitionIndex = 56024;

struct alignas(8) Struct_2_8792219C039E2D7A
{
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::SkillType>* OOOPJAECBIN; // 0x18
	::RPG::GameCore::SkillPropertyType ACHILGIPGKL; // 0x20
	::RPG::GameCore::SkillPropertyModifyType KFAPHPGFEMK; // 0x24
	::RPG::GameCore::FixPoint MNDFOPKBHKP; // 0x28
};
