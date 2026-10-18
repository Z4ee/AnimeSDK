#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CBE3940117D4417A.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelNPCNearbyEventConfig; }

#define CLASS_2_8B80E560EDC57221_DOONENTER_OFFSET UNITYSDK_OFFSET(0xBA64D60)
#define CLASS_2_8B80E560EDC57221_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xBA65130)
#define CLASS_2_8B80E560EDC57221__CTOR_OFFSET UNITYSDK_OFFSET(0xBA64D10)

inline static constexpr unsigned int Class_2_8B80E560EDC57221_TypeDefinitionIndex = 57518;

class Class_2_8B80E560EDC57221 : public ::Class_1_CBE3940117D4417A
{
public:
	::RPG::GameCore::LevelNPCNearbyEventConfig* IGHAHBNLIJA; // 0xA0

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::LevelNPCNearbyEventConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::LevelNPCNearbyEventConfig*))((::PBYTE)hIl2Cpp + CLASS_2_8B80E560EDC57221__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8B80E560EDC57221_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_8B80E560EDC57221_DOONEXIT_OFFSET))(this, a1, a2);
	}
};
