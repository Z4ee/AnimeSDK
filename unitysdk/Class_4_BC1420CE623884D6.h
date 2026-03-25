#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_47171E2F81FEA33B.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"

class Class_0_16E4307DCC419505_315;
class Class_1_EAF7984A8FAD6BE4;
namespace UnityEngine::Rendering { class VolumeProfile; }

#define CLASS_4_BC1420CE623884D6_METHOD_4_4B325E2272A25B4C_OFFSET UNITYSDK_OFFSET(0x1180AD90)
#define CLASS_4_BC1420CE623884D6_METHOD_4_568FEF6BC049006C_OFFSET UNITYSDK_OFFSET(0x1180ACD0)
#define CLASS_4_BC1420CE623884D6_METHOD_4_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1180AE90)
#define CLASS_4_BC1420CE623884D6_METHOD_4_688E0A06F0C40FCD_OFFSET UNITYSDK_OFFSET(0x1180AF80)
#define CLASS_4_BC1420CE623884D6_METHOD_4_7475458557C381BC_OFFSET UNITYSDK_OFFSET(0x1180AF10)
#define CLASS_4_BC1420CE623884D6_METHOD_4_766355730A908CE9_OFFSET UNITYSDK_OFFSET(0x1180AB20)
#define CLASS_4_BC1420CE623884D6_METHOD_4_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1180A9B0)
#define CLASS_4_BC1420CE623884D6_METHOD_4_9A271693E4F170A8_OFFSET UNITYSDK_OFFSET(0x1180AAE0)
#define CLASS_4_BC1420CE623884D6__CTOR_OFFSET UNITYSDK_OFFSET(0x1180AE10)
#define CLASS_4_BC1420CE623884D6__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1180AE30)
#define CLASS_4_BC1420CE623884D6__INIT_B__1_1_OFFSET UNITYSDK_OFFSET(0x1180AE60)

inline static constexpr unsigned int Class_4_BC1420CE623884D6_TypeDefinitionIndex = 40024;

class Class_4_BC1420CE623884D6 : public ::Class_3_47171E2F81FEA33B
{
public:
	::UnityEngine::Rendering::VolumeProfile* Field_4_1; // 0x70
	::System::Single Field_4_0; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BC1420CE623884D6__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BC1420CE623884D6_METHOD_4_89D1F247B9D324EE_OFFSET))(this);
	}

	::UnityEngine::Rendering::VolumeProfile* Method_4_9A271693E4F170A8()
	{
		return ((::UnityEngine::Rendering::VolumeProfile*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BC1420CE623884D6_METHOD_4_9A271693E4F170A8_OFFSET))(this);
	}

	::System::Void Method_4_766355730A908CE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BC1420CE623884D6_METHOD_4_766355730A908CE9_OFFSET))(this);
	}

	::System::Void Method_4_568FEF6BC049006C(::EnviromentSystemV2Space::OutputType a1, ::Class_0_16E4307DCC419505_315* a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::Class_0_16E4307DCC419505_315*))((::PBYTE)hIl2Cpp + CLASS_4_BC1420CE623884D6_METHOD_4_568FEF6BC049006C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_4B325E2272A25B4C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_BC1420CE623884D6_METHOD_4_4B325E2272A25B4C_OFFSET))(this, a1);
	}

	::System::Void _Init_b__1_0(::Class_1_EAF7984A8FAD6BE4* node)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_4_BC1420CE623884D6__INIT_B__1_0_OFFSET))(this, node);
	}

	::System::Void _Init_b__1_1(::Class_1_EAF7984A8FAD6BE4* node)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_4_BC1420CE623884D6__INIT_B__1_1_OFFSET))(this, node);
	}

	::System::Void Method_4_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BC1420CE623884D6_METHOD_4_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_4_7475458557C381BC(::EnviromentSystemV2Space::OutputType P0, ::Class_0_16E4307DCC419505_315* P1)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::Class_0_16E4307DCC419505_315*))((::PBYTE)hIl2Cpp + CLASS_4_BC1420CE623884D6_METHOD_4_7475458557C381BC_OFFSET))(this, P0, P1);
	}

	::System::Void Method_4_688E0A06F0C40FCD(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_BC1420CE623884D6_METHOD_4_688E0A06F0C40FCD_OFFSET))(this, P0);
	}
};
