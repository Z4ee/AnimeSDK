#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D235A7D760E7915C.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_4096CBE8D6E0A5EE_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x120CF170)
#define CLASS_1_4096CBE8D6E0A5EE_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x120CF1D0)
#define CLASS_1_4096CBE8D6E0A5EE__CTOR_OFFSET UNITYSDK_OFFSET(0x120CF240)

inline static constexpr unsigned int Class_1_4096CBE8D6E0A5EE_TypeDefinitionIndex = 70408;

class Class_1_4096CBE8D6E0A5EE : public ::System::Object
{
public:
	::Struct_2_D235A7D760E7915C Field_1_1; // 0x10
	::Struct_2_D235A7D760E7915C Field_1_0; // 0x30
	::System::Boolean Field_1_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4096CBE8D6E0A5EE__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4096CBE8D6E0A5EE_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4096CBE8D6E0A5EE_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
