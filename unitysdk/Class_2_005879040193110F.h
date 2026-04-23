#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2231FD56C070349F.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsDiscardResult.h"

class Class_1_E3E37125DAA7A899;
class Class_3_3BDFAF4A2AB65026;

#define CLASS_2_005879040193110F_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x117A99E0)
#define CLASS_2_005879040193110F__CTOR_OFFSET UNITYSDK_OFFSET(0x117A99C0)

inline static constexpr unsigned int Class_2_005879040193110F_TypeDefinitionIndex = 55648;

class Class_2_005879040193110F : public ::Class_1_2231FD56C070349F
{
public:
	::Class_1_E3E37125DAA7A899* Field_2_3; // 0x18
	::RPG::LittleGameShare::DiceCombatCore::TacticsDiscardResult Field_2_2; // 0x20
	::System::UInt32 Field_2_0; // 0x24
	::System::Int32 Field_2_1; // 0x28

	::System::Void _ctor(::Class_3_3BDFAF4A2AB65026* a1, ::System::UInt32 a2, ::System::Int32 a3, ::RPG::LittleGameShare::DiceCombatCore::TacticsDiscardResult a4, ::Class_1_E3E37125DAA7A899* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3BDFAF4A2AB65026*, ::System::UInt32, ::System::Int32, ::RPG::LittleGameShare::DiceCombatCore::TacticsDiscardResult, ::Class_1_E3E37125DAA7A899*))((::PBYTE)hIl2Cpp + CLASS_2_005879040193110F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_005879040193110F_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
