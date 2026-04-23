#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2231FD56C070349F.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsBuyResult.h"

class Class_1_E3E37125DAA7A899;
class Class_3_3BDFAF4A2AB65026;

#define CLASS_2_DB56BB40EF1C39CE_METHOD_2_277F8930086803D1_OFFSET UNITYSDK_OFFSET(0x91E7880)
#define CLASS_2_DB56BB40EF1C39CE__CTOR_OFFSET UNITYSDK_OFFSET(0x91E7860)

inline static constexpr unsigned int Class_2_DB56BB40EF1C39CE_TypeDefinitionIndex = 55646;

class Class_2_DB56BB40EF1C39CE : public ::Class_1_2231FD56C070349F
{
public:
	::Class_1_E3E37125DAA7A899* Field_2_3; // 0x18
	::System::Int32 Field_2_1; // 0x20
	::RPG::LittleGameShare::DiceCombatCore::TacticsBuyResult Field_2_2; // 0x24
	::System::UInt32 Field_2_0; // 0x28

	::System::Void _ctor(::Class_3_3BDFAF4A2AB65026* a1, ::System::UInt32 a2, ::System::Int32 a3, ::RPG::LittleGameShare::DiceCombatCore::TacticsBuyResult a4, ::Class_1_E3E37125DAA7A899* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3BDFAF4A2AB65026*, ::System::UInt32, ::System::Int32, ::RPG::LittleGameShare::DiceCombatCore::TacticsBuyResult, ::Class_1_E3E37125DAA7A899*))((::PBYTE)hIl2Cpp + CLASS_2_DB56BB40EF1C39CE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_277F8930086803D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB56BB40EF1C39CE_METHOD_2_277F8930086803D1_OFFSET))(this);
	}
};
