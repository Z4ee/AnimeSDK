#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtDefenceUnitRow; }

inline static constexpr unsigned int Class_3_F480A087F622C7D7_Struct_2_AFED36C695DAE616_TypeDefinitionIndex = 68432;

struct alignas(8) Class_3_F480A087F622C7D7_Struct_2_AFED36C695DAE616
{
	::RPG::GameCore::GameEntity* Field_2_0; // 0x10
	::UnityEngine::Rect Field_2_1; // 0x18
	::RPG::GameCore::RtDefenceUnitRow* Field_2_2; // 0x28
	::System::UInt32 Field_2_3; // 0x30
};
