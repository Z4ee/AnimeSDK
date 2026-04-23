#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/GridLocalPoint.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/ViewMomentType.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define CLASS_1_43BD383C98B4C0C5_73__CTOR_OFFSET UNITYSDK_OFFSET(0x17FCD540)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_73_TypeDefinitionIndex = 38488;

class Class_1_43BD383C98B4C0C5_73 : public ::System::Object
{
public:
	::System::UInt32 Field_1_18; // 0x10
	::System::UInt32 Field_1_11; // 0x14
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_5; // 0x18
	::System::UInt32 Field_1_15; // 0x20
	::RPG::GameCore::Match3::PieceTag Field_1_9; // 0x24
	::System::Single Field_1_13; // 0x28
	::System::UInt32 Field_1_0; // 0x2C
	::RPG::GameCore::Match3::BombType Field_1_8; // 0x30
	::System::UInt32 Field_1_1; // 0x34
	::System::UInt32 Field_1_2; // 0x38
	::System::UInt32 Field_1_7; // 0x3C
	::System::Boolean Field_1_16; // 0x40
	::System::Boolean Field_1_17; // 0x41
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_4; // 0x44
	::RPG::Client::LittleGame::Match3::GridLocalPoint Field_1_12; // 0x4C
	::System::UInt32 Field_1_19; // 0x50
	::System::UInt32 Field_1_10; // 0x54
	::System::UInt32 Field_1_6; // 0x58
	::System::UInt32 Field_1_14; // 0x5C
	::RPG::Client::LittleGame::Match3::ViewMomentType Field_1_3; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_73__CTOR_OFFSET))(this);
	}
};
