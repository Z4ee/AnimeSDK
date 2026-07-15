#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraFollowClampMask.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraPriority.h"
#include "unitysdk/RPG/GameCore/FiveDimLevelCameraType.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int Struct_2_5C0B0D7675435A20_TypeDefinitionIndex = 40661;

struct alignas(4) Struct_2_5C0B0D7675435A20
{
	::RPG::GameCore::FiveDimCameraPriority Field_2_0; // 0x10
	::RPG::GameCore::FiveDimLevelCameraType Field_2_1; // 0x14
	::System::Boolean Field_2_2; // 0x18
	::System::Boolean Field_2_3; // 0x19
	::System::Boolean Field_2_4; // 0x1A
	::System::Boolean Field_2_5; // 0x1B
	::System::Boolean Field_2_6; // 0x1C
	::System::Boolean Field_2_7; // 0x1D
	::RPG::GameCore::FiveDimCameraFollowClampMask Field_2_8; // 0x20
	::System::Single Field_2_9; // 0x24
};
