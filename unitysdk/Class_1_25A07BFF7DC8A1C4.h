#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_E7811A222424F15E;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_25A07BFF7DC8A1C4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x97A2150)
#define CLASS_1_25A07BFF7DC8A1C4_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x97A2820)
#define CLASS_1_25A07BFF7DC8A1C4_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x97A2770)
#define CLASS_1_25A07BFF7DC8A1C4_METHOD_1_365B3CE7026B1EB7_OFFSET UNITYSDK_OFFSET(0x97A2720)
#define CLASS_1_25A07BFF7DC8A1C4_METHOD_1_8990549FFB79855C_OFFSET UNITYSDK_OFFSET(0x97A27D0)
#define CLASS_1_25A07BFF7DC8A1C4_METHOD_1_913E009081E7833B_OFFSET UNITYSDK_OFFSET(0x97A2AC0)
#define CLASS_1_25A07BFF7DC8A1C4_METHOD_1_BCD7D97189B4240F_OFFSET UNITYSDK_OFFSET(0x97A22A0)
#define CLASS_1_25A07BFF7DC8A1C4_METHOD_1_E7EF6BC52B28648C_1_OFFSET UNITYSDK_OFFSET(0x97A21A0)
#define CLASS_1_25A07BFF7DC8A1C4_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x97A2620)
#define CLASS_1_25A07BFF7DC8A1C4_TICK_OFFSET UNITYSDK_OFFSET(0x97A2A60)
#define CLASS_1_25A07BFF7DC8A1C4__CTOR_OFFSET UNITYSDK_OFFSET(0x97A2140)

inline static constexpr unsigned int Class_1_25A07BFF7DC8A1C4_TypeDefinitionIndex = 51508;

class Class_1_25A07BFF7DC8A1C4 : public ::System::Object
{
public:
	::RPG::GameCore::AdventureCharacterController* Field_1_1; // 0x10
	::RPG::GameCore::GameEntity* Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::Class_1_E7811A222424F15E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::Class_1_E7811A222424F15E*))((::PBYTE)hIl2Cpp + CLASS_1_25A07BFF7DC8A1C4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25A07BFF7DC8A1C4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_BCD7D97189B4240F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_25A07BFF7DC8A1C4_METHOD_1_BCD7D97189B4240F_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureAnimStateType Method_1_365B3CE7026B1EB7()
	{
		return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25A07BFF7DC8A1C4_METHOD_1_365B3CE7026B1EB7_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_25A07BFF7DC8A1C4_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_8990549FFB79855C(::RPG::GameCore::AdventureAnimStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + CLASS_1_25A07BFF7DC8A1C4_METHOD_1_8990549FFB79855C_OFFSET))(this, a1);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25A07BFF7DC8A1C4_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_25A07BFF7DC8A1C4_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25A07BFF7DC8A1C4_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25A07BFF7DC8A1C4_METHOD_1_E7EF6BC52B28648C_1_OFFSET))(this);
	}

	::System::Void Method_1_913E009081E7833B(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_25A07BFF7DC8A1C4_METHOD_1_913E009081E7833B_OFFSET))(this, a1, a2, a3);
	}
};
