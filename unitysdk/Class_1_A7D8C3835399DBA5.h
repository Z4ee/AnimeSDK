#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C52D8E01F122AD4F_2.h"
#include "unitysdk/Struct_2_B136CFD8FB6B8F37_2.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_235;
class Class_3_2B29BFAE5DC7783E;

#define CLASS_1_A7D8C3835399DBA5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18772090)
#define CLASS_1_A7D8C3835399DBA5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x187729C0)
#define CLASS_1_A7D8C3835399DBA5_METHOD_1_342117D80C03DDE7_OFFSET UNITYSDK_OFFSET(0x18772270)
#define CLASS_1_A7D8C3835399DBA5_METHOD_1_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x18772140)
#define CLASS_1_A7D8C3835399DBA5__CTOR_OFFSET UNITYSDK_OFFSET(0x187720E0)

inline static constexpr unsigned int Class_1_A7D8C3835399DBA5_TypeDefinitionIndex = 58118;

class Class_1_A7D8C3835399DBA5 : public ::System::Object
{
public:
	::Class_3_2B29BFAE5DC7783E* Field_1_0; // 0x10
	::Class_2_208CC9941471731A_235* Field_1_1; // 0x18
	::Struct_2_B136CFD8FB6B8F37_2 Field_1_4; // 0x20
	::System::UInt32 Field_1_3; // 0x24
	::Enum_3_C52D8E01F122AD4F_2 Field_1_2; // 0x28

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
