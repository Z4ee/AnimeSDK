#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_84A8303CB3C9005F_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB7D6250)

inline static constexpr unsigned int Class_1_84A8303CB3C9005F_1_TypeDefinitionIndex = 71522;

class Class_1_84A8303CB3C9005F_1 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84A8303CB3C9005F_1__CTOR_OFFSET))(this);
	}
};
