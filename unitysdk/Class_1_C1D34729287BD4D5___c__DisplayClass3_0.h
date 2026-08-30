#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_C1D34729287BD4D5___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5963B0)
#define CLASS_1_C1D34729287BD4D5___C__DISPLAYCLASS3_0__ISDICECONTENTALLODDOREVEN_B__0_OFFSET UNITYSDK_OFFSET(0x1A5976A0)

inline static constexpr unsigned int Class_1_C1D34729287BD4D5___c__DisplayClass3_0_TypeDefinitionIndex = 35597;

class Class_1_C1D34729287BD4D5___c__DisplayClass3_0 : public ::System::Object
{
public:
	::System::Boolean isOdd; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1D34729287BD4D5___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _IsDiceContentAllOddOrEven_b__0(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C1D34729287BD4D5___C__DISPLAYCLASS3_0__ISDICECONTENTALLODDOREVEN_B__0_OFFSET))(this, a1);
	}
};
