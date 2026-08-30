#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_77940DB746531DEB_CLEAR_OFFSET UNITYSDK_OFFSET(0xB40ECD0)
#define CLASS_1_77940DB746531DEB__CTOR_OFFSET UNITYSDK_OFFSET(0xB40ED20)

inline static constexpr unsigned int Class_1_77940DB746531DEB_TypeDefinitionIndex = 55047;

class Class_1_77940DB746531DEB : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* NGBAPOEDIOJ; // 0x10
	::RPG::GameCore::GameEntity* KDKBMOMJIOH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77940DB746531DEB__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77940DB746531DEB_CLEAR_OFFSET))(this);
	}
};
