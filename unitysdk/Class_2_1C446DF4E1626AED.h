#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5184AAF9063C3197.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"

class Class_1_A89E800BD673F128;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_1C446DF4E1626AED_METHOD_2_1BCF653166E38585_OFFSET UNITYSDK_OFFSET(0xC72DE10)
#define CLASS_2_1C446DF4E1626AED_METHOD_2_365B3CE7026B1EB7_OFFSET UNITYSDK_OFFSET(0xC72DD20)
#define CLASS_2_1C446DF4E1626AED_METHOD_2_9EB0ACE1EA64B6D6_OFFSET UNITYSDK_OFFSET(0xC72DD70)
#define CLASS_2_1C446DF4E1626AED__CTOR_OFFSET UNITYSDK_OFFSET(0xC72DD10)

inline static constexpr unsigned int Class_2_1C446DF4E1626AED_TypeDefinitionIndex = 52169;

class Class_2_1C446DF4E1626AED : public ::Class_1_5184AAF9063C3197
{
public:
	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::Class_1_A89E800BD673F128* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::Class_1_A89E800BD673F128*))((::PBYTE)hIl2Cpp + CLASS_2_1C446DF4E1626AED__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::AdventureAnimStateType Method_2_365B3CE7026B1EB7()
	{
		return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C446DF4E1626AED_METHOD_2_365B3CE7026B1EB7_OFFSET))(this);
	}

	::System::Void Method_2_9EB0ACE1EA64B6D6(::RPG::GameCore::AdventureAnimStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + CLASS_2_1C446DF4E1626AED_METHOD_2_9EB0ACE1EA64B6D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_1BCF653166E38585(::RPG::GameCore::AdventureAnimStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + CLASS_2_1C446DF4E1626AED_METHOD_2_1BCF653166E38585_OFFSET))(this, a1);
	}
};
