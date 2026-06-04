#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MiniGameHundredFloorBlockConfig; }

#define CLASS_1_2D1BF568C55DF562__CTOR_OFFSET UNITYSDK_OFFSET(0x18BF1650)

inline static constexpr unsigned int Class_1_2D1BF568C55DF562_TypeDefinitionIndex = 39984;

class Class_1_2D1BF568C55DF562 : public ::System::Object
{
public:
	::RPG::GameCore::MiniGameHundredFloorBlockConfig* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D1BF568C55DF562__CTOR_OFFSET))(this);
	}
};
