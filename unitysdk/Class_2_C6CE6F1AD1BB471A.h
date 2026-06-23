#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Class_2_C6CE6F1AD1BB471A_Enum_3_8A5FBF352B3A373F.h"

#define CLASS_2_C6CE6F1AD1BB471A_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x19206700)
#define CLASS_2_C6CE6F1AD1BB471A_METHOD_2_AF90364441CEC02B_OFFSET UNITYSDK_OFFSET(0x19206790)
#define CLASS_2_C6CE6F1AD1BB471A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19206820)
#define CLASS_2_C6CE6F1AD1BB471A__CCTOR_OFFSET UNITYSDK_OFFSET(0x19206680)
#define CLASS_2_C6CE6F1AD1BB471A__CTOR_OFFSET UNITYSDK_OFFSET(0x192066F0)

inline static constexpr unsigned int Class_2_C6CE6F1AD1BB471A_TypeDefinitionIndex = 79455;

class Class_2_C6CE6F1AD1BB471A : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x8C; // 0x0
	::System::Int32 Field_2_0; // 0x20
	::Class_2_C6CE6F1AD1BB471A_Enum_3_8A5FBF352B3A373F Field_2_1; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C6CE6F1AD1BB471A__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6CE6F1AD1BB471A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6CE6F1AD1BB471A_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_AF90364441CEC02B(::System::UInt32 a1, ::System::Int32 a2, ::Class_2_C6CE6F1AD1BB471A_Enum_3_8A5FBF352B3A373F a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::Class_2_C6CE6F1AD1BB471A_Enum_3_8A5FBF352B3A373F))((::PBYTE)hIl2Cpp + CLASS_2_C6CE6F1AD1BB471A_METHOD_2_AF90364441CEC02B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6CE6F1AD1BB471A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
