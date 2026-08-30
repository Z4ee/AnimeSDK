#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C974D9B5A2874893.h"
#include "unitysdk/RPG/MVector2.h"

class Class_0_16E4307DCC419505_259;

#define CLASS_2_B01516C0099A0334_METHOD_2_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x1C40EB10)
#define CLASS_2_B01516C0099A0334__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3FA8F0)

inline static constexpr unsigned int Class_2_B01516C0099A0334_TypeDefinitionIndex = 41448;

class Class_2_B01516C0099A0334 : public ::Class_1_C974D9B5A2874893
{
public:
	::Class_0_16E4307DCC419505_259* PIAAAIKAGFA; // 0x20
	::System::UInt32 AHINLNKPBNC; // 0x28
	::RPG::MVector2 EMEKEFJEHOB; // 0x2C
	::System::UInt32 AGDOLIPGNND; // 0x34

	::System::Void _ctor(::Class_0_16E4307DCC419505_259* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::MVector2 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_259*, ::System::UInt32, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_2_B01516C0099A0334__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B01516C0099A0334_METHOD_2_DDA8A2337932DF10_OFFSET))(this);
	}
};
