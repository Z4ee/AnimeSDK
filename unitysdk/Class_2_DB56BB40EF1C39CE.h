#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2231FD56C070349F.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsBuyResult.h"

class Class_1_E3E37125DAA7A899;
class Class_3_C71DDDA66421C541;

#define CLASS_2_DB56BB40EF1C39CE_METHOD_2_57D5ED2C4C06D908_OFFSET UNITYSDK_OFFSET(0xB4892D0)
#define CLASS_2_DB56BB40EF1C39CE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4892B0)

inline static constexpr unsigned int Class_2_DB56BB40EF1C39CE_TypeDefinitionIndex = 60456;

class Class_2_DB56BB40EF1C39CE : public ::Class_1_2231FD56C070349F
{
public:
	::Class_1_E3E37125DAA7A899* DBMHCIDGGLF; // 0x18
	::System::Int32 FFNBLDFFMCN; // 0x20
	::RPG::LittleGameShare::DiceCombatCore::TacticsBuyResult GNOEGILFEMD; // 0x24
	::System::UInt32 CMGPDNDPJOC; // 0x28

	::System::Void _ctor(::Class_3_C71DDDA66421C541* a1, ::System::UInt32 a2, ::System::Int32 a3, ::RPG::LittleGameShare::DiceCombatCore::TacticsBuyResult a4, ::Class_1_E3E37125DAA7A899* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C71DDDA66421C541*, ::System::UInt32, ::System::Int32, ::RPG::LittleGameShare::DiceCombatCore::TacticsBuyResult, ::Class_1_E3E37125DAA7A899*))((::PBYTE)hIl2Cpp + CLASS_2_DB56BB40EF1C39CE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_57D5ED2C4C06D908()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB56BB40EF1C39CE_METHOD_2_57D5ED2C4C06D908_OFFSET))(this);
	}
};
