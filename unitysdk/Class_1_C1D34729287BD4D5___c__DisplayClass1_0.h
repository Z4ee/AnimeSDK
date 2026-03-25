#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_C1D34729287BD4D5___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x165A90B0)
#define CLASS_1_C1D34729287BD4D5___C__DISPLAYCLASS1_0__ISDICECONTENTALLODDOREVEN_B__0_OFFSET UNITYSDK_OFFSET(0x165AA1C0)

inline static constexpr unsigned int Class_1_C1D34729287BD4D5___c__DisplayClass1_0_TypeDefinitionIndex = 28408;

class Class_1_C1D34729287BD4D5___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Boolean isOdd; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1D34729287BD4D5___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _IsDiceContentAllOddOrEven_b__0(::System::UInt32 point)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C1D34729287BD4D5___C__DISPLAYCLASS1_0__ISDICECONTENTALLODDOREVEN_B__0_OFFSET))(this, point);
	}
};
