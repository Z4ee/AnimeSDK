#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerAidState.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_B3122B2B681EA91E__CTOR_OFFSET UNITYSDK_OFFSET(0xF3E0F60)

inline static constexpr unsigned int Class_1_B3122B2B681EA91E_TypeDefinitionIndex = 55962;

class Class_1_B3122B2B681EA91E : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* NKKGKNFDPPH; // 0x10
	::RPG::GameCore::GameEntity* GNOCBLOMLAC; // 0x18
	::Class_1_5F51D4049EA87B7B* DLAKDMCEKNO; // 0x20
	::Class_1_5F51D4049EA87B7B* COCMPJEBMKP; // 0x28
	::Class_1_5F51D4049EA87B7B* IBCHKLLMADD; // 0x30
	::RPG::GameCore::GameEntity* DOCIPOEABOM; // 0x38
	::System::Int32 KBAPBCNJHDB; // 0x40
	::RPG::GameCore::TriggerAidState BBCODJDANCH; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3122B2B681EA91E__CTOR_OFFSET))(this);
	}
};
