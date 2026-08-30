#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/RPG/GameCore/AdventureDyingStyle.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_22;
class Class_1_E7811A222424F15E;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_3F09352E937002CA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x163E4F90)
#define CLASS_1_3F09352E937002CA_METHOD_1_17FF7E72EFD64472_OFFSET UNITYSDK_OFFSET(0x163E4FE0)
#define CLASS_1_3F09352E937002CA_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x163E59F0)
#define CLASS_1_3F09352E937002CA_METHOD_1_365B3CE7026B1EB7_OFFSET UNITYSDK_OFFSET(0x163E59A0)
#define CLASS_1_3F09352E937002CA_METHOD_1_8B453125FE4AC604_OFFSET UNITYSDK_OFFSET(0x163E4EF0)
#define CLASS_1_3F09352E937002CA_METHOD_1_8D40C6F2FECAC292_OFFSET UNITYSDK_OFFSET(0x163E5A50)
#define CLASS_1_3F09352E937002CA_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x163E5B90)
#define CLASS_1_3F09352E937002CA_TICK_OFFSET UNITYSDK_OFFSET(0x163E5D20)
#define CLASS_1_3F09352E937002CA__CTOR_OFFSET UNITYSDK_OFFSET(0x163E4F80)

inline static constexpr unsigned int Class_1_3F09352E937002CA_TypeDefinitionIndex = 56038;

class Class_1_3F09352E937002CA : public ::System::Object
{
public:
	// static const ::System::Single IINNOCEHNNA; // 0x0
	// static const ::System::Single DFICHGHDBON; // 0x0
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x10
	::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x18
	::Class_1_945ACFB1FEBC7A2C_22* DEBHJHGDOGN; // 0x20
	::System::Int32 PKLOPBOLFPP; // 0x28
	::System::Single EOAGDMDPLHL; // 0x2C
	::System::Single DKOFFPPGEFI; // 0x30

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::Class_1_E7811A222424F15E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::Class_1_E7811A222424F15E*))((::PBYTE)hIl2Cpp + CLASS_1_3F09352E937002CA__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Int32 Method_1_8B453125FE4AC604(::RPG::GameCore::AdventureDyingStyle a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::AdventureDyingStyle))((::PBYTE)hIl2Cpp + CLASS_1_3F09352E937002CA_METHOD_1_8B453125FE4AC604_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F09352E937002CA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_17FF7E72EFD64472(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3F09352E937002CA_METHOD_1_17FF7E72EFD64472_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureAnimStateType Method_1_365B3CE7026B1EB7()
	{
		return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F09352E937002CA_METHOD_1_365B3CE7026B1EB7_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3F09352E937002CA_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D40C6F2FECAC292(::RPG::GameCore::AdventureAnimStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + CLASS_1_3F09352E937002CA_METHOD_1_8D40C6F2FECAC292_OFFSET))(this, a1);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F09352E937002CA_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3F09352E937002CA_TICK_OFFSET))(this, a1);
	}
};
