#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/Struct_2_27857638BF48264B.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class LevelPedestrianV2MemberInfo; }

inline static constexpr unsigned int Class_1_366F8A32A4F9B4A1_Struct_2_E821FD00D05A2DED_TypeDefinitionIndex = 66203;

struct alignas(8) Class_1_366F8A32A4F9B4A1_Struct_2_E821FD00D05A2DED
{
	::Struct_2_27857638BF48264B Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x1C
	::RPG::GameCore::LevelPedestrianV2MemberInfo* Field_2_2; // 0x20
	::System::Single Field_2_3; // 0x28
	::RPG::Client::EPedestrianV2MotionState Field_2_4; // 0x2C
	::System::Int32 Field_2_5; // 0x30
};
