#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1497;
class Class_1_43BD383C98B4C0C5_230;
class Class_1_D501FC103C8A2714;

#define CLASS_1_D397F2B90E4E5296_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1334F7C0)
#define CLASS_1_D397F2B90E4E5296_METHOD_1_1576E1CE6A5A6899_OFFSET UNITYSDK_OFFSET(0x1334F820)
#define CLASS_1_D397F2B90E4E5296__CTOR_OFFSET UNITYSDK_OFFSET(0x1334F730)

inline static constexpr unsigned int Class_1_D397F2B90E4E5296_TypeDefinitionIndex = 79649;

class Class_1_D397F2B90E4E5296 : public ::System::Object
{
public:
	::Class_1_D501FC103C8A2714* GJALMBBNNOF; // 0x10
	::Class_0_16E4307DCC419505_1497* INDNOJDKNJM; // 0x18

	::System::Void _ctor(::Class_1_D501FC103C8A2714* a1, ::Class_0_16E4307DCC419505_1497* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D501FC103C8A2714*, ::Class_0_16E4307DCC419505_1497*))((::PBYTE)hIl2Cpp + CLASS_1_D397F2B90E4E5296__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D397F2B90E4E5296_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1576E1CE6A5A6899(::Class_1_43BD383C98B4C0C5_230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_230*))((::PBYTE)hIl2Cpp + CLASS_1_D397F2B90E4E5296_METHOD_1_1576E1CE6A5A6899_OFFSET))(this, a1);
	}
};
