#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_E7811A222424F15E;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_25A07BFF7DC8A1C4_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A89B10)
#define CLASS_1_25A07BFF7DC8A1C4_1_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x18A89F60)
#define CLASS_1_25A07BFF7DC8A1C4_1_METHOD_1_2ADBA02EC0F7C432_OFFSET UNITYSDK_OFFSET(0x18A89BB0)
#define CLASS_1_25A07BFF7DC8A1C4_1_METHOD_1_365B3CE7026B1EB7_OFFSET UNITYSDK_OFFSET(0x18A89B60)
#define CLASS_1_25A07BFF7DC8A1C4_1_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x18A89FC0)
#define CLASS_1_25A07BFF7DC8A1C4_1_METHOD_1_9EB0ACE1EA64B6D6_OFFSET UNITYSDK_OFFSET(0x18A89D80)
#define CLASS_1_25A07BFF7DC8A1C4_1_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x18A8A1A0)
#define CLASS_1_25A07BFF7DC8A1C4_1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18A89F20)
#define CLASS_1_25A07BFF7DC8A1C4_1_TICK_OFFSET UNITYSDK_OFFSET(0x18A89E30)
#define CLASS_1_25A07BFF7DC8A1C4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18A89B00)

inline static constexpr unsigned int Class_1_25A07BFF7DC8A1C4_1_TypeDefinitionIndex = 56046;

class Class_1_25A07BFF7DC8A1C4_1 : public ::System::Object
{
public:
	::Class_1_E7811A222424F15E* ONBOGBCKHDC; // 0x10
	::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x18
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x20
	::System::Boolean DOOPHCHLJPC; // 0x28

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::Class_1_E7811A222424F15E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::Class_1_E7811A222424F15E*))((::PBYTE)hIl2Cpp + CLASS_1_25A07BFF7DC8A1C4_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25A07BFF7DC8A1C4_1_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AdventureAnimStateType Method_1_365B3CE7026B1EB7()
	{
		return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25A07BFF7DC8A1C4_1_METHOD_1_365B3CE7026B1EB7_OFFSET))(this);
	}

	::System::Void Method_1_2ADBA02EC0F7C432(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_25A07BFF7DC8A1C4_1_METHOD_1_2ADBA02EC0F7C432_OFFSET))(this, a1);
	}

	::System::Void Method_1_9EB0ACE1EA64B6D6(::RPG::GameCore::AdventureAnimStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + CLASS_1_25A07BFF7DC8A1C4_1_METHOD_1_9EB0ACE1EA64B6D6_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_25A07BFF7DC8A1C4_1_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25A07BFF7DC8A1C4_1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_25A07BFF7DC8A1C4_1_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25A07BFF7DC8A1C4_1_METHOD_1_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25A07BFF7DC8A1C4_1_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
