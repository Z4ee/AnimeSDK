#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD893FD36F6A3A6D_1.h"

#define CLASS_2_23A03E77486DF40D_3_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x158D3100)
#define CLASS_2_23A03E77486DF40D_3_METHOD_2_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x158D3110)
#define CLASS_2_23A03E77486DF40D_3__CTOR_OFFSET UNITYSDK_OFFSET(0x158D30F0)

inline static constexpr unsigned int Class_2_23A03E77486DF40D_3_TypeDefinitionIndex = 72964;

class Class_2_23A03E77486DF40D_3 : public ::Class_1_FD893FD36F6A3A6D_1
{
public:
	::System::UInt32 Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D_3__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D_3_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_2_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D_3_METHOD_2_7786DC814C2FC3BE_OFFSET))(this, a1);
	}
};
