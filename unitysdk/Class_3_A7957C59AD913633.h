#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8CF02C3C8507EA90.h"

#define CLASS_3_A7957C59AD913633_ONINIT_OFFSET UNITYSDK_OFFSET(0xECA9CE0)
#define CLASS_3_A7957C59AD913633__CTOR_OFFSET UNITYSDK_OFFSET(0xECAA110)
#define CLASS_3_A7957C59AD913633___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0xECAA120)

inline static constexpr unsigned int Class_3_A7957C59AD913633_TypeDefinitionIndex = 56354;

class Class_3_A7957C59AD913633 : public ::Class_2_8CF02C3C8507EA90
{
public:
	::System::Single Field_3_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A7957C59AD913633__CTOR_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A7957C59AD913633_ONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A7957C59AD913633___IFIXBASEPROXY_ONINIT_OFFSET))(this);
	}
};
