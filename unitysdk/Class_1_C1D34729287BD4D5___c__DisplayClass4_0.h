#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_C1D34729287BD4D5___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A596700)
#define CLASS_1_C1D34729287BD4D5___C__DISPLAYCLASS4_0__GETDICECONTENTODDOREVENCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x1A5976B0)

inline static constexpr unsigned int Class_1_C1D34729287BD4D5___c__DisplayClass4_0_TypeDefinitionIndex = 35598;

class Class_1_C1D34729287BD4D5___c__DisplayClass4_0 : public ::System::Object
{
public:
	::System::Boolean isOdd; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1D34729287BD4D5___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetDiceContentOddOrEvenCount_b__0(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C1D34729287BD4D5___C__DISPLAYCLASS4_0__GETDICECONTENTODDOREVENCOUNT_B__0_OFFSET))(this, a1);
	}
};
