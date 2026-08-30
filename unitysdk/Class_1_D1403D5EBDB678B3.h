#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_D1403D5EBDB678B3_CLEAR_OFFSET UNITYSDK_OFFSET(0xE2E31F0)
#define CLASS_1_D1403D5EBDB678B3__CTOR_OFFSET UNITYSDK_OFFSET(0xE2E3240)

inline static constexpr unsigned int Class_1_D1403D5EBDB678B3_TypeDefinitionIndex = 53934;

class Class_1_D1403D5EBDB678B3 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
	::System::Int32 NALMBOOCCIN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1403D5EBDB678B3__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1403D5EBDB678B3_CLEAR_OFFSET))(this);
	}
};
