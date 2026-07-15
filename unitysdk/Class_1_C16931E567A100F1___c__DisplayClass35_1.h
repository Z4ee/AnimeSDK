#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class BitArray; }

#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS35_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17BB94B0)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS35_1___CALCAIREROLLINFO_B__5_OFFSET UNITYSDK_OFFSET(0x17BBAFE0)

inline static constexpr unsigned int Class_1_C16931E567A100F1___c__DisplayClass35_1_TypeDefinitionIndex = 34866;

class Class_1_C16931E567A100F1___c__DisplayClass35_1 : public ::System::Object
{
public:
	::System::Collections::BitArray* rerollBits; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS35_1__CTOR_OFFSET))(this);
	}

	::System::Boolean __calcAIRerollInfo_b__5(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS35_1___CALCAIREROLLINFO_B__5_OFFSET))(this, a1);
	}
};
