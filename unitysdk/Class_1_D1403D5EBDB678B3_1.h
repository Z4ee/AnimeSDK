#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_D1403D5EBDB678B3_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F29320)
#define CLASS_1_D1403D5EBDB678B3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17F29370)

inline static constexpr unsigned int Class_1_D1403D5EBDB678B3_1_TypeDefinitionIndex = 51790;

class Class_1_D1403D5EBDB678B3_1 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1403D5EBDB678B3_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1403D5EBDB678B3_1_CLEAR_OFFSET))(this);
	}
};
