#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E54B0BAFCA2425BD.h"

#define CLASS_3_D228CF1E7224FDC2_METHOD_3_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1234A510)
#define CLASS_3_D228CF1E7224FDC2_METHOD_3_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1234A500)
#define CLASS_3_D228CF1E7224FDC2__CTOR_OFFSET UNITYSDK_OFFSET(0x1234A450)

inline static constexpr unsigned int Class_3_D228CF1E7224FDC2_TypeDefinitionIndex = 60822;

class Class_3_D228CF1E7224FDC2 : public ::Class_2_E54B0BAFCA2425BD
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
