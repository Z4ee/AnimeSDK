#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/GridLocalPoint.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/ViewMomentType.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define CLASS_1_43BD383C98B4C0C5_83__CTOR_OFFSET UNITYSDK_OFFSET(0x187E1550)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_83_TypeDefinitionIndex = 40064;

class Class_1_43BD383C98B4C0C5_83 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::RPG::GameCore::Match3::BombType Field_1_2; // 0x18
	::System::Boolean Field_1_3; // 0x1C
	::System::Boolean Field_1_4; // 0x1D
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_5; // 0x20
	::System::UInt32 Field_1_6; // 0x28
	::System::UInt32 Field_1_7; // 0x2C
	::System::UInt32 Field_1_8; // 0x30
	::RPG::Client::LittleGame::Match3::GridLocalPoint Field_1_9; // 0x34
	::System::UInt32 Field_1_10; // 0x38
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_11; // 0x3C
	::System::Single Field_1_12; // 0x44
	::System::UInt32 Field_1_13; // 0x48
	::System::UInt32 Field_1_14; // 0x4C
	::RPG::GameCore::Match3::PieceTag Field_1_15; // 0x50
	::RPG::Client::LittleGame::Match3::ViewMomentType Field_1_16; // 0x54
	::System::UInt32 Field_1_17; // 0x58
	::System::UInt32 Field_1_18; // 0x5C
	::System::UInt32 Field_1_19; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_83__CTOR_OFFSET))(this);
	}
};
