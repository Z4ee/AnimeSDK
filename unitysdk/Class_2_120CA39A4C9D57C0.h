#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_39155512A8777971.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"

class Class_0_16E4307DCC419505_355;
class Class_0_16E4307DCC419505_360;
class Class_1_9B39BF4ECCAD98D9;
class Class_1_EAF7984A8FAD6BE4;

#define CLASS_2_120CA39A4C9D57C0_METHOD_2_7D9FB684EF17D12D_OFFSET UNITYSDK_OFFSET(0x164F93D0)
#define CLASS_2_120CA39A4C9D57C0_METHOD_2_E8DE25142B711E54_OFFSET UNITYSDK_OFFSET(0x164F94B0)
#define CLASS_2_120CA39A4C9D57C0__CTOR_OFFSET UNITYSDK_OFFSET(0x164F9340)

inline static constexpr unsigned int Class_2_120CA39A4C9D57C0_TypeDefinitionIndex = 47599;

class Class_2_120CA39A4C9D57C0 : public ::Class_1_39155512A8777971
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_120CA39A4C9D57C0__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_7D9FB684EF17D12D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_120CA39A4C9D57C0_METHOD_2_7D9FB684EF17D12D_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_355* Method_2_E8DE25142B711E54(::Class_1_EAF7984A8FAD6BE4* a1, ::EnviromentSystemV2Space::OutputType a2, ::Class_0_16E4307DCC419505_360* a3)
	{
		return ((::Class_0_16E4307DCC419505_355*(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::EnviromentSystemV2Space::OutputType, ::Class_0_16E4307DCC419505_360*))((::PBYTE)hIl2Cpp + CLASS_2_120CA39A4C9D57C0_METHOD_2_E8DE25142B711E54_OFFSET))(this, a1, a2, a3);
	}
};
