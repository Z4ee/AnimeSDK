#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FiveDimScreenTransferType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimExitType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

inline static constexpr unsigned int Struct_2_B7F6733609A5D9EA_TypeDefinitionIndex = 57811;

struct alignas(8) Struct_2_B7F6733609A5D9EA
{
	::System::Boolean Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x11
	::System::Boolean Field_2_2; // 0x12
	::RPG::Client::FiveDimScreenTransferType Field_2_3; // 0x14
	::System::Action* Field_2_4; // 0x18
	::RPG::Client::LittleGame::FiveDim::FiveDimExitType Field_2_5; // 0x20
	::System::UInt32 Field_2_6; // 0x24
};
