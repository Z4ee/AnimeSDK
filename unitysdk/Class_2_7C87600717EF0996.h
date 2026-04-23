#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BCD13CF36787C336.h"

class Class_2_A1F69E2229E56CFE;

#define CLASS_2_7C87600717EF0996_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1212D890)
#define CLASS_2_7C87600717EF0996__CTOR_OFFSET UNITYSDK_OFFSET(0x1212DA90)
#define CLASS_2_7C87600717EF0996___IFIXBASEPROXY_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1212DAA0)

inline static constexpr unsigned int Class_2_7C87600717EF0996_TypeDefinitionIndex = 50048;

class Class_2_7C87600717EF0996 : public ::Class_1_BCD13CF36787C336
{
public:
	::System::UInt64 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C87600717EF0996__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_2_A1F69E2229E56CFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_2_7C87600717EF0996_EXECUTE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Execute(::Class_2_A1F69E2229E56CFE* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_2_7C87600717EF0996___IFIXBASEPROXY_EXECUTE_OFFSET))(this, P0);
	}
};
