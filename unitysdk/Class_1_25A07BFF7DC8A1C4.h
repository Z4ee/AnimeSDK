#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_E7811A222424F15E;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_25A07BFF7DC8A1C4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18218660)
#define CLASS_1_25A07BFF7DC8A1C4_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x18218CA0)
#define CLASS_1_25A07BFF7DC8A1C4_METHOD_1_365B3CE7026B1EB7_OFFSET UNITYSDK_OFFSET(0x18218C50)
#define CLASS_1_25A07BFF7DC8A1C4_METHOD_1_3E8209FF824D1D26_OFFSET UNITYSDK_OFFSET(0x182187C0)
#define CLASS_1_25A07BFF7DC8A1C4_METHOD_1_8990549FFB79855C_OFFSET UNITYSDK_OFFSET(0x18218D00)
#define CLASS_1_25A07BFF7DC8A1C4_METHOD_1_913E009081E7833B_OFFSET UNITYSDK_OFFSET(0x18218FF0)
#define CLASS_1_25A07BFF7DC8A1C4_METHOD_1_BADDA70ED68283AE_OFFSET UNITYSDK_OFFSET(0x18218D50)
#define CLASS_1_25A07BFF7DC8A1C4_METHOD_1_E7EF6BC52B28648C_1_OFFSET UNITYSDK_OFFSET(0x182186B0)
#define CLASS_1_25A07BFF7DC8A1C4_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x18218B40)
#define CLASS_1_25A07BFF7DC8A1C4_TICK_OFFSET UNITYSDK_OFFSET(0x18218F90)
#define CLASS_1_25A07BFF7DC8A1C4__CTOR_OFFSET UNITYSDK_OFFSET(0x18218650)

inline static constexpr unsigned int Class_1_25A07BFF7DC8A1C4_TypeDefinitionIndex = 53328;

class Class_1_25A07BFF7DC8A1C4 : public ::System::Object
{
public:
	::RPG::GameCore::AdventureCharacterController* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::Class_1_E7811A222424F15E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::Class_1_E7811A222424F15E*))((::PBYTE)hIl2Cpp + CLASS_1_25A07BFF7DC8A1C4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25A07BFF7DC8A1C4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_3E8209FF824D1D26(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_25A07BFF7DC8A1C4_METHOD_1_3E8209FF824D1D26_OFFSET))(this, a1);
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

	::System::Void Method_1_BADDA70ED68283AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25A07BFF7DC8A1C4_METHOD_1_BADDA70ED68283AE_OFFSET))(this);
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
