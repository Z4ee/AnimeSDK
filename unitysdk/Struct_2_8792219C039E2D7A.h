#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillPropertyModifyType.h"
#include "unitysdk/RPG/GameCore/SkillPropertyType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Struct_2_8792219C039E2D7A_TypeDefinitionIndex = 53310;

struct alignas(8) Struct_2_8792219C039E2D7A
{
	::RPG::GameCore::GameEntity* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::SkillType>* Field_2_1; // 0x18
	::RPG::GameCore::SkillPropertyType Field_2_2; // 0x20
	::RPG::GameCore::SkillPropertyModifyType Field_2_3; // 0x24
	::RPG::GameCore::FixPoint Field_2_4; // 0x28
};
