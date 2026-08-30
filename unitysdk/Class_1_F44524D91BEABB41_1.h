#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_F44524D91BEABB41_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1854E9D0)

inline static constexpr unsigned int Class_1_F44524D91BEABB41_1_TypeDefinitionIndex = 56598;

class Class_1_F44524D91BEABB41_1 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
	::System::UInt32 APDMBOFHCAI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44524D91BEABB41_1__CTOR_OFFSET))(this);
	}
};
