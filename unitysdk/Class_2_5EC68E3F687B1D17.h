#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BCD13CF36787C336.h"

class Class_2_A1F69E2229E56CFE;

#define CLASS_2_5EC68E3F687B1D17_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9909310)
#define CLASS_2_5EC68E3F687B1D17__CTOR_OFFSET UNITYSDK_OFFSET(0x99093B0)
#define CLASS_2_5EC68E3F687B1D17___IFIXBASEPROXY_EXECUTE_OFFSET UNITYSDK_OFFSET(0x99093C0)

inline static constexpr unsigned int Class_2_5EC68E3F687B1D17_TypeDefinitionIndex = 50043;

class Class_2_5EC68E3F687B1D17 : public ::Class_1_BCD13CF36787C336
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EC68E3F687B1D17__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_2_A1F69E2229E56CFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_2_5EC68E3F687B1D17_EXECUTE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Execute(::Class_2_A1F69E2229E56CFE* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_2_5EC68E3F687B1D17___IFIXBASEPROXY_EXECUTE_OFFSET))(this, P0);
	}
};
