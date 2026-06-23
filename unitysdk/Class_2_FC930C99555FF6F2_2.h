#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_FC930C99555FF6F2_2_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x14F4A970)
#define CLASS_2_FC930C99555FF6F2_2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14F4AAE0)
#define CLASS_2_FC930C99555FF6F2_2_METHOD_2_E3A452D25792E383_OFFSET UNITYSDK_OFFSET(0x14F4AA00)
#define CLASS_2_FC930C99555FF6F2_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F4A8E0)
#define CLASS_2_FC930C99555FF6F2_2__CTOR_OFFSET UNITYSDK_OFFSET(0x14F4A950)

inline static constexpr unsigned int Class_2_FC930C99555FF6F2_2_TypeDefinitionIndex = 59975;

class Class_2_FC930C99555FF6F2_2 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x10E; // 0x0
	::System::Int32 Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FC930C99555FF6F2_2__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC930C99555FF6F2_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC930C99555FF6F2_2_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_E3A452D25792E383(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FC930C99555FF6F2_2_METHOD_2_E3A452D25792E383_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC930C99555FF6F2_2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
