#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C109460)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS41_0___GETDICECONTENTWEIGHTLISTMAP_B__1_OFFSET UNITYSDK_OFFSET(0x1C10A510)

inline static constexpr unsigned int Class_1_C16931E567A100F1___c__DisplayClass41_0_TypeDefinitionIndex = 35730;

class Class_1_C16931E567A100F1___c__DisplayClass41_0 : public ::System::Object
{
public:
	::System::Int64 totalWeight; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
	}

	::System::Single __GetDiceContentWeightListMap_b__1(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS41_0___GETDICECONTENTWEIGHTLISTMAP_B__1_OFFSET))(this, a1);
	}
};
