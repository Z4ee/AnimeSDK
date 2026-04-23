#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/RPG/GameCore/AdventureDyingStyle.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_19;
class Class_1_E7811A222424F15E;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_3F09352E937002CA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A3A0E0)
#define CLASS_1_3F09352E937002CA_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x11A3AB50)
#define CLASS_1_3F09352E937002CA_METHOD_1_365B3CE7026B1EB7_OFFSET UNITYSDK_OFFSET(0x11A3AB00)
#define CLASS_1_3F09352E937002CA_METHOD_1_5AFB710F0E3F0A8C_OFFSET UNITYSDK_OFFSET(0x11A3A130)
#define CLASS_1_3F09352E937002CA_METHOD_1_8B453125FE4AC604_OFFSET UNITYSDK_OFFSET(0x11A3A040)
#define CLASS_1_3F09352E937002CA_METHOD_1_8D40C6F2FECAC292_OFFSET UNITYSDK_OFFSET(0x11A3ABB0)
#define CLASS_1_3F09352E937002CA_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x11A3ACF0)
#define CLASS_1_3F09352E937002CA_TICK_OFFSET UNITYSDK_OFFSET(0x11A3AE80)
#define CLASS_1_3F09352E937002CA__CTOR_OFFSET UNITYSDK_OFFSET(0x11A3A0D0)

inline static constexpr unsigned int Class_1_3F09352E937002CA_TypeDefinitionIndex = 51504;

class Class_1_3F09352E937002CA : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::Class_1_945ACFB1FEBC7A2C_19* Field_1_5; // 0x10
	::RPG::GameCore::AdventureCharacterController* Field_1_3; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::System::Int32 Field_1_6; // 0x28
	::System::Single Field_1_4; // 0x2C
	::System::Single Field_1_7; // 0x30

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

	::System::Void Method_1_5AFB710F0E3F0A8C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3F09352E937002CA_METHOD_1_5AFB710F0E3F0A8C_OFFSET))(this, a1);
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
