#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_E7811A222424F15E;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventureSkillCharacterComponent; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_E1497142ADDE0A20_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4900A0)
#define CLASS_1_E1497142ADDE0A20_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xB490350)
#define CLASS_1_E1497142ADDE0A20_METHOD_1_365B3CE7026B1EB7_OFFSET UNITYSDK_OFFSET(0xB490310)
#define CLASS_1_E1497142ADDE0A20_METHOD_1_475D7AF7572E6782_OFFSET UNITYSDK_OFFSET(0xB4900F0)
#define CLASS_1_E1497142ADDE0A20_METHOD_1_55AF5C78DC9022E9_OFFSET UNITYSDK_OFFSET(0xB490450)
#define CLASS_1_E1497142ADDE0A20_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB490230)
#define CLASS_1_E1497142ADDE0A20_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0xB490630)
#define CLASS_1_E1497142ADDE0A20_METHOD_1_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xB4903B0)
#define CLASS_1_E1497142ADDE0A20_TICK_OFFSET UNITYSDK_OFFSET(0xB4902A0)
#define CLASS_1_E1497142ADDE0A20__CTOR_OFFSET UNITYSDK_OFFSET(0xB490060)

inline static constexpr unsigned int Class_1_E1497142ADDE0A20_TypeDefinitionIndex = 51500;

class Class_1_E1497142ADDE0A20 : public ::System::Object
{
public:
	::RPG::GameCore::AdventureSkillCharacterComponent* Field_1_4; // 0x10
	::RPG::GameCore::AdventureCharacterController* Field_1_2; // 0x18
	::Class_1_E7811A222424F15E* Field_1_1; // 0x20
	::RPG::GameCore::GameEntity* Field_1_0; // 0x28
	::System::UInt32 Field_1_5; // 0x30
	::RPG::GameCore::AdventureAnimStateType Field_1_3; // 0x34

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::Class_1_E7811A222424F15E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::Class_1_E7811A222424F15E*))((::PBYTE)hIl2Cpp + CLASS_1_E1497142ADDE0A20__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1497142ADDE0A20_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_475D7AF7572E6782(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E1497142ADDE0A20_METHOD_1_475D7AF7572E6782_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureAnimStateType Method_1_365B3CE7026B1EB7()
	{
		return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1497142ADDE0A20_METHOD_1_365B3CE7026B1EB7_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E1497142ADDE0A20_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E1497142ADDE0A20_METHOD_1_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_55AF5C78DC9022E9(::RPG::GameCore::AdventureAnimStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + CLASS_1_E1497142ADDE0A20_METHOD_1_55AF5C78DC9022E9_OFFSET))(this, a1);
	}

	::System::Void Method_1_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1497142ADDE0A20_METHOD_1_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E1497142ADDE0A20_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1497142ADDE0A20_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
