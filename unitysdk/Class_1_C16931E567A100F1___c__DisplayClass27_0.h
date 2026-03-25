#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x166AE160)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS27_0___GETDICECONTENTWEIGHTLISTMAP_B__1_OFFSET UNITYSDK_OFFSET(0x166AE760)

inline static constexpr unsigned int Class_1_C16931E567A100F1___c__DisplayClass27_0_TypeDefinitionIndex = 28520;

class Class_1_C16931E567A100F1___c__DisplayClass27_0 : public ::System::Object
{
public:
	::System::Int64 totalWeight; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
	}

	::System::Single __GetDiceContentWeightListMap_b__1(::System::UInt32 w)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS27_0___GETDICECONTENTWEIGHTLISTMAP_B__1_OFFSET))(this, w);
	}
};
