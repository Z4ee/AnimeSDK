#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2231FD56C070349F.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsBuyFinishResult.h"

class Class_3_C71DDDA66421C541;

#define CLASS_2_29DBC3A1D8791EB5_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA8F6D80)
#define CLASS_2_29DBC3A1D8791EB5__CTOR_OFFSET UNITYSDK_OFFSET(0xA8F6D70)

inline static constexpr unsigned int Class_2_29DBC3A1D8791EB5_TypeDefinitionIndex = 56403;

class Class_2_29DBC3A1D8791EB5 : public ::Class_1_2231FD56C070349F
{
public:
	::RPG::LittleGameShare::DiceCombatCore::TacticsBuyFinishResult Field_2_0; // 0x18

	::System::Void _ctor(::Class_3_C71DDDA66421C541* a1, ::RPG::LittleGameShare::DiceCombatCore::TacticsBuyFinishResult a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C71DDDA66421C541*, ::RPG::LittleGameShare::DiceCombatCore::TacticsBuyFinishResult))((::PBYTE)hIl2Cpp + CLASS_2_29DBC3A1D8791EB5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29DBC3A1D8791EB5_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
