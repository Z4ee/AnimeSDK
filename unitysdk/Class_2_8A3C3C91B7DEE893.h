#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_29B23DDF98AF43AC.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelNPCNearbyEventConfig; }

#define CLASS_2_8A3C3C91B7DEE893_DOONENTER_OFFSET UNITYSDK_OFFSET(0x17FAFF80)
#define CLASS_2_8A3C3C91B7DEE893_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x17FB0320)
#define CLASS_2_8A3C3C91B7DEE893__CTOR_OFFSET UNITYSDK_OFFSET(0x17FAFF30)

inline static constexpr unsigned int Class_2_8A3C3C91B7DEE893_TypeDefinitionIndex = 54948;

class Class_2_8A3C3C91B7DEE893 : public ::Class_1_29B23DDF98AF43AC
{
public:
	::RPG::GameCore::LevelNPCNearbyEventConfig* Field_2_0; // 0x98

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::LevelNPCNearbyEventConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::LevelNPCNearbyEventConfig*))((::PBYTE)hIl2Cpp + CLASS_2_8A3C3C91B7DEE893__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8A3C3C91B7DEE893_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_8A3C3C91B7DEE893_DOONEXIT_OFFSET))(this, a1, a2);
	}
};
