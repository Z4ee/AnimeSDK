#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/RPG/GameCore/AdventureDyingStyle.h"
#include "unitysdk/System/Object.h"

class Class_1_E7811A222424F15E;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_4B3659C0E18451E9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10520530)
#define CLASS_1_4B3659C0E18451E9_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x10520EF0)
#define CLASS_1_4B3659C0E18451E9_METHOD_1_365B3CE7026B1EB7_OFFSET UNITYSDK_OFFSET(0x10520EA0)
#define CLASS_1_4B3659C0E18451E9_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x10521080)
#define CLASS_1_4B3659C0E18451E9_METHOD_1_8B453125FE4AC604_OFFSET UNITYSDK_OFFSET(0x10520490)
#define CLASS_1_4B3659C0E18451E9_METHOD_1_8D40C6F2FECAC292_OFFSET UNITYSDK_OFFSET(0x10520F50)
#define CLASS_1_4B3659C0E18451E9_METHOD_1_C5B6BDE490FA4153_OFFSET UNITYSDK_OFFSET(0x10520580)
#define CLASS_1_4B3659C0E18451E9_TICK_OFFSET UNITYSDK_OFFSET(0x105212E0)
#define CLASS_1_4B3659C0E18451E9__CTOR_OFFSET UNITYSDK_OFFSET(0x10520520)

inline static constexpr unsigned int Class_1_4B3659C0E18451E9_TypeDefinitionIndex = 44757;

class Class_1_4B3659C0E18451E9 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::RPG::GameCore::GameEntity* Field_1_2; // 0x10
	::RPG::GameCore::AdventureCharacterController* Field_1_3; // 0x18
	::System::Single Field_1_5; // 0x20
	::System::Single Field_1_4; // 0x24

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::Class_1_E7811A222424F15E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::Class_1_E7811A222424F15E*))((::PBYTE)hIl2Cpp + CLASS_1_4B3659C0E18451E9__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Int32 Method_1_8B453125FE4AC604(::RPG::GameCore::AdventureDyingStyle a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::AdventureDyingStyle))((::PBYTE)hIl2Cpp + CLASS_1_4B3659C0E18451E9_METHOD_1_8B453125FE4AC604_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B3659C0E18451E9_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C5B6BDE490FA4153(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4B3659C0E18451E9_METHOD_1_C5B6BDE490FA4153_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureAnimStateType Method_1_365B3CE7026B1EB7()
	{
		return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B3659C0E18451E9_METHOD_1_365B3CE7026B1EB7_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4B3659C0E18451E9_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D40C6F2FECAC292(::RPG::GameCore::AdventureAnimStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + CLASS_1_4B3659C0E18451E9_METHOD_1_8D40C6F2FECAC292_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B3659C0E18451E9_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4B3659C0E18451E9_TICK_OFFSET))(this, a1);
	}
};
