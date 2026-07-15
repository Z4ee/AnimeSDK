#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_29B23DDF98AF43AC.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_10839CE19336675A_DOONENTER_OFFSET UNITYSDK_OFFSET(0x160F9B00)
#define CLASS_2_10839CE19336675A_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x160F9B80)
#define CLASS_2_10839CE19336675A__CTOR_OFFSET UNITYSDK_OFFSET(0x160F9AC0)

inline static constexpr unsigned int Class_2_10839CE19336675A_TypeDefinitionIndex = 54939;

class Class_2_10839CE19336675A : public ::Class_1_29B23DDF98AF43AC
{
public:
	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_10839CE19336675A__CTOR_OFFSET))(this, a1);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_10839CE19336675A_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_10839CE19336675A_DOONEXIT_OFFSET))(this, a1, a2);
	}
};
