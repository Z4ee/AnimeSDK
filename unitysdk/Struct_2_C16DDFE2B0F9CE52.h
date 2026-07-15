#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int Struct_2_C16DDFE2B0F9CE52_TypeDefinitionIndex = 40057;

struct alignas(4) Struct_2_C16DDFE2B0F9CE52
{
	::System::UInt32 Field_2_0; // 0x10
	::RPG::GameCore::Match3::BombType Field_2_1; // 0x14
	::RPG::GameCore::Match3::PieceTag Field_2_2; // 0x18
	::RPG::GameCore::Match3::GridTag Field_2_3; // 0x1C
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_2_4; // 0x20
};
