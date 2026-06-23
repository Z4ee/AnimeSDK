#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonsterSpecialIdleEntry; }

#define CLASS_1_DFA575E46FDF2DFF_METHOD_1_C3E5A52CAB795310_OFFSET UNITYSDK_OFFSET(0x1BB1DF60)
#define CLASS_1_DFA575E46FDF2DFF_METHOD_1_CF2915206D64F090_OFFSET UNITYSDK_OFFSET(0x1BB1DDA0)

inline static constexpr unsigned int Class_1_DFA575E46FDF2DFF_TypeDefinitionIndex = 53768;

class Class_1_DFA575E46FDF2DFF : public ::System::Object
{
public:
	static ::System::Void Method_1_CF2915206D64F090(::MoleMole::EntityHandle a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DFA575E46FDF2DFF_METHOD_1_CF2915206D64F090_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C3E5A52CAB795310(::MoleMole::EntityHandle a1, ::MoleMole::MonsterSpecialIdleEntry* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::MoleMole::MonsterSpecialIdleEntry*))((::PBYTE)hIl2Cpp + CLASS_1_DFA575E46FDF2DFF_METHOD_1_C3E5A52CAB795310_OFFSET))(a1, a2);
	}
};
