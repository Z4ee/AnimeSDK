#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_26684305CEECE64E.h"

class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionEnableTargetLockCat; }

#define CLASS_2_A5BF3989710C3475_METHOD_2_1ECC01451B2FF4B0_OFFSET UNITYSDK_OFFSET(0x165E8430)
#define CLASS_2_A5BF3989710C3475__CTOR_OFFSET UNITYSDK_OFFSET(0x165AD4B0)

inline static constexpr unsigned int Class_2_A5BF3989710C3475_TypeDefinitionIndex = 29025;

class Class_2_A5BF3989710C3475 : public ::Class_1_26684305CEECE64E
{
public:
	::RPG::GameCore::CakeRaceActionEnableTargetLockCat* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionEnableTargetLockCat* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionEnableTargetLockCat*))((::PBYTE)hIl2Cpp + CLASS_2_A5BF3989710C3475__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_1ECC01451B2FF4B0(::Class_2_3ABA989E5AECB261* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A5BF3989710C3475_METHOD_2_1ECC01451B2FF4B0_OFFSET))(this, a1, a2, a3);
	}
};
