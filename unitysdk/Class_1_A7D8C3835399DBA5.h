#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C52D8E01F122AD4F_1.h"
#include "unitysdk/Struct_2_B136CFD8FB6B8F37.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_875;
class Class_3_74A3C4A75899F492;

#define CLASS_1_A7D8C3835399DBA5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16EDD4C0)
#define CLASS_1_A7D8C3835399DBA5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x16EDDC30)
#define CLASS_1_A7D8C3835399DBA5_METHOD_1_342117D80C03DDE7_OFFSET UNITYSDK_OFFSET(0x16EDD6A0)
#define CLASS_1_A7D8C3835399DBA5_METHOD_1_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x16EDD570)
#define CLASS_1_A7D8C3835399DBA5__CTOR_OFFSET UNITYSDK_OFFSET(0x16EDD510)

inline static constexpr unsigned int Class_1_A7D8C3835399DBA5_TypeDefinitionIndex = 70423;

class Class_1_A7D8C3835399DBA5 : public ::System::Object
{
public:
	::Class_3_74A3C4A75899F492* Field_1_0; // 0x10
	::Class_2_208CC9941471731A_875* Field_1_7; // 0x18
	::System::UInt32 Field_1_5; // 0x20
	::Struct_2_B136CFD8FB6B8F37 Field_1_4; // 0x24
	::Enum_3_C52D8E01F122AD4F_1 Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7D8C3835399DBA5__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7D8C3835399DBA5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7D8C3835399DBA5_METHOD_1_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_1_342117D80C03DDE7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A7D8C3835399DBA5_METHOD_1_342117D80C03DDE7_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7D8C3835399DBA5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}
};
