#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_FA88EDBD82459FC3_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1631BC20)
#define CLASS_1_FA88EDBD82459FC3_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1631BBD0)
#define CLASS_1_FA88EDBD82459FC3__CTOR_OFFSET UNITYSDK_OFFSET(0x1631BBC0)

inline static constexpr unsigned int Class_1_FA88EDBD82459FC3_TypeDefinitionIndex = 56856;

class Class_1_FA88EDBD82459FC3 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* BDHFPPIGIAH; // 0x10
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x18

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_FA88EDBD82459FC3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA88EDBD82459FC3_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA88EDBD82459FC3_GETEVENTTYPE_OFFSET))(this);
	}
};
