#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_77940DB746531DEB_CLEAR_OFFSET UNITYSDK_OFFSET(0x11989350)
#define CLASS_1_77940DB746531DEB__CTOR_OFFSET UNITYSDK_OFFSET(0x119893A0)

inline static constexpr unsigned int Class_1_77940DB746531DEB_TypeDefinitionIndex = 50598;

class Class_1_77940DB746531DEB : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_1; // 0x10
	::RPG::GameCore::TurnBasedModifierInstance* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77940DB746531DEB__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77940DB746531DEB_CLEAR_OFFSET))(this);
	}
};
