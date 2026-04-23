#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_671780733A8844ED;

#define CLASS_1_3AA6AAB5C26A78A8___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB79B050)
#define CLASS_1_3AA6AAB5C26A78A8___C__DISPLAYCLASS5_0___GETAFFIXCOMPARERESULTS_B__0_OFFSET UNITYSDK_OFFSET(0xB79B3D0)

inline static constexpr unsigned int Class_1_3AA6AAB5C26A78A8___c__DisplayClass5_0_TypeDefinitionIndex = 69292;

class Class_1_3AA6AAB5C26A78A8___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_1_671780733A8844ED* affix; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AA6AAB5C26A78A8___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetAffixCompareResults_b__0(::Class_1_671780733A8844ED* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_671780733A8844ED*))((::PBYTE)hIl2Cpp + CLASS_1_3AA6AAB5C26A78A8___C__DISPLAYCLASS5_0___GETAFFIXCOMPARERESULTS_B__0_OFFSET))(this, x);
	}
};
