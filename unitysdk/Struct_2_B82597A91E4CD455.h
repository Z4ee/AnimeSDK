#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FiveDimScreenTransferType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimEnterType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimExitType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

inline static constexpr unsigned int Struct_2_B82597A91E4CD455_TypeDefinitionIndex = 57824;

struct alignas(8) Struct_2_B82597A91E4CD455
{
	::System::Boolean Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x11
	::System::Boolean Field_2_2; // 0x12
	::System::Boolean Field_2_3; // 0x13
	::System::Boolean Field_2_4; // 0x14
	::RPG::Client::FiveDimScreenTransferType Field_2_5; // 0x18
	::System::Boolean Field_2_6; // 0x1C
	::System::Action* Field_2_7; // 0x20
	::RPG::Client::LittleGame::FiveDim::FiveDimEnterType Field_2_8; // 0x28
	::RPG::Client::LittleGame::FiveDim::FiveDimExitType Field_2_9; // 0x2C
	::System::UInt32 Field_2_10; // 0x30
};
