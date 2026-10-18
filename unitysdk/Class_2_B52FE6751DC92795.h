#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CBE3940117D4417A.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelNPCNearbyAnimConfig; }

#define CLASS_2_B52FE6751DC92795_DOONENTER_OFFSET UNITYSDK_OFFSET(0xC313970)
#define CLASS_2_B52FE6751DC92795_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xC313D40)
#define CLASS_2_B52FE6751DC92795__CTOR_OFFSET UNITYSDK_OFFSET(0xC313920)

inline static constexpr unsigned int Class_2_B52FE6751DC92795_TypeDefinitionIndex = 57517;

class Class_2_B52FE6751DC92795 : public ::Class_1_CBE3940117D4417A
{
public:
	::RPG::GameCore::LevelNPCNearbyAnimConfig* IGHAHBNLIJA; // 0xA0

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::LevelNPCNearbyAnimConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::LevelNPCNearbyAnimConfig*))((::PBYTE)hIl2Cpp + CLASS_2_B52FE6751DC92795__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B52FE6751DC92795_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_B52FE6751DC92795_DOONEXIT_OFFSET))(this, a1, a2);
	}
};
