#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_DCB9C072E5EB22C2__CTOR_OFFSET UNITYSDK_OFFSET(0x12CCFF80)

inline static constexpr unsigned int Class_1_DCB9C072E5EB22C2_TypeDefinitionIndex = 54963;

class Class_1_DCB9C072E5EB22C2 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
	::RPG::GameCore::FloatMessageType GBJBHFGLNDP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCB9C072E5EB22C2__CTOR_OFFSET))(this);
	}
};
