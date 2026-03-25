#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_2_C03CD36EC3EB34E0_CLASS_1_0E9A944B01BE33D0__CTOR_OFFSET UNITYSDK_OFFSET(0xC4E8FD0)

inline static constexpr unsigned int Class_2_C03CD36EC3EB34E0_Class_1_0E9A944B01BE33D0_TypeDefinitionIndex = 58655;

class Class_2_C03CD36EC3EB34E0_Class_1_0E9A944B01BE33D0 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedGameMode* Field_1_1; // 0x10
	::RPG::GameCore::GameEntity* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C03CD36EC3EB34E0_CLASS_1_0E9A944B01BE33D0__CTOR_OFFSET))(this);
	}
};
