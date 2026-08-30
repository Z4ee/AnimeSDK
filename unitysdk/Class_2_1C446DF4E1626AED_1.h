#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5184AAF9063C3197.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"

class Class_1_E7811A222424F15E;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_1C446DF4E1626AED_1_METHOD_2_365B3CE7026B1EB7_OFFSET UNITYSDK_OFFSET(0xDACC460)
#define CLASS_2_1C446DF4E1626AED_1__CTOR_OFFSET UNITYSDK_OFFSET(0xDACC450)

inline static constexpr unsigned int Class_2_1C446DF4E1626AED_1_TypeDefinitionIndex = 56050;

class Class_2_1C446DF4E1626AED_1 : public ::Class_1_5184AAF9063C3197
{
public:
	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::Class_1_E7811A222424F15E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::Class_1_E7811A222424F15E*))((::PBYTE)hIl2Cpp + CLASS_2_1C446DF4E1626AED_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::AdventureAnimStateType Method_2_365B3CE7026B1EB7()
	{
		return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C446DF4E1626AED_1_METHOD_2_365B3CE7026B1EB7_OFFSET))(this);
	}
};
