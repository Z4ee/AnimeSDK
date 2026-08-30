#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_9CAA42EF32347EE5_3_CLEAR_OFFSET UNITYSDK_OFFSET(0x18F39AA0)
#define CLASS_1_9CAA42EF32347EE5_3__CTOR_OFFSET UNITYSDK_OFFSET(0x18F39AF0)

inline static constexpr unsigned int Class_1_9CAA42EF32347EE5_3_TypeDefinitionIndex = 57809;

class Class_1_9CAA42EF32347EE5_3 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
	::System::Boolean HBKECKOILDK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CAA42EF32347EE5_3__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CAA42EF32347EE5_3_CLEAR_OFFSET))(this);
	}
};
