#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2231FD56C070349F.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsRefreshResult.h"

class Class_1_E3E37125DAA7A899;
class Class_3_C71DDDA66421C541;

#define CLASS_2_1F07C349AA14B113_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13AF45E0)
#define CLASS_2_1F07C349AA14B113__CTOR_OFFSET UNITYSDK_OFFSET(0x13AF45C0)

inline static constexpr unsigned int Class_2_1F07C349AA14B113_TypeDefinitionIndex = 56401;

class Class_2_1F07C349AA14B113 : public ::Class_1_2231FD56C070349F
{
public:
	::Class_1_E3E37125DAA7A899* Field_2_0; // 0x18
	::RPG::LittleGameShare::DiceCombatCore::TacticsRefreshResult Field_2_1; // 0x20
	::System::UInt32 Field_2_2; // 0x24

	::System::Void _ctor(::Class_3_C71DDDA66421C541* a1, ::System::UInt32 a2, ::RPG::LittleGameShare::DiceCombatCore::TacticsRefreshResult a3, ::Class_1_E3E37125DAA7A899* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C71DDDA66421C541*, ::System::UInt32, ::RPG::LittleGameShare::DiceCombatCore::TacticsRefreshResult, ::Class_1_E3E37125DAA7A899*))((::PBYTE)hIl2Cpp + CLASS_2_1F07C349AA14B113__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F07C349AA14B113_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
