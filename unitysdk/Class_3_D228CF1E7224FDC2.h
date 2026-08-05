#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_9232271EC184E3E9.h"

#define CLASS_3_D228CF1E7224FDC2_METHOD_3_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x12E9D140)
#define CLASS_3_D228CF1E7224FDC2_METHOD_3_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x12E9D130)
#define CLASS_3_D228CF1E7224FDC2__CTOR_OFFSET UNITYSDK_OFFSET(0x12E9D080)

inline static constexpr unsigned int Class_3_D228CF1E7224FDC2_TypeDefinitionIndex = 44041;

class Class_3_D228CF1E7224FDC2 : public ::Class_2_9232271EC184E3E9
{
public:
	::System::UInt32 Field_3_0; // 0x48

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_D228CF1E7224FDC2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_D228CF1E7224FDC2_METHOD_3_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_3_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D228CF1E7224FDC2_METHOD_3_02A3D10A9D535169_OFFSET))(this);
	}
};
