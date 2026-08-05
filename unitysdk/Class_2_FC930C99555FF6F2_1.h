#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_FC930C99555FF6F2_1_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x142388B0)
#define CLASS_2_FC930C99555FF6F2_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x142389D0)
#define CLASS_2_FC930C99555FF6F2_1_METHOD_2_E3A452D25792E383_OFFSET UNITYSDK_OFFSET(0x14238940)
#define CLASS_2_FC930C99555FF6F2_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x14238830)
#define CLASS_2_FC930C99555FF6F2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x142388A0)

inline static constexpr unsigned int Class_2_FC930C99555FF6F2_1_TypeDefinitionIndex = 67862;

class Class_2_FC930C99555FF6F2_1 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_0 = 0x124; // 0x0
	::System::Int32 Field_2_1; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FC930C99555FF6F2_1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC930C99555FF6F2_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC930C99555FF6F2_1_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_E3A452D25792E383(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FC930C99555FF6F2_1_METHOD_2_E3A452D25792E383_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC930C99555FF6F2_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
