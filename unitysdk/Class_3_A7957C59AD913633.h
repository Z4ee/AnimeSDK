#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B7D28807473A6079.h"

#define CLASS_3_A7957C59AD913633_ONINIT_OFFSET UNITYSDK_OFFSET(0xC2371D0)
#define CLASS_3_A7957C59AD913633__CTOR_OFFSET UNITYSDK_OFFSET(0xC237540)

inline static constexpr unsigned int Class_3_A7957C59AD913633_TypeDefinitionIndex = 61106;

class Class_3_A7957C59AD913633 : public ::Class_2_B7D28807473A6079
{
public:
	::System::Single KDBGMBINNAP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A7957C59AD913633__CTOR_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A7957C59AD913633_ONINIT_OFFSET))(this);
	}
};
