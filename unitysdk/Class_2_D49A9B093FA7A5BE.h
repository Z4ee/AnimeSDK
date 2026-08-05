#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_D49A9B093FA7A5BE_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1591B200)
#define CLASS_2_D49A9B093FA7A5BE_METHOD_2_C3A221BD93074219_OFFSET UNITYSDK_OFFSET(0x1591B320)
#define CLASS_2_D49A9B093FA7A5BE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1591B290)
#define CLASS_2_D49A9B093FA7A5BE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1591B180)
#define CLASS_2_D49A9B093FA7A5BE__CTOR_OFFSET UNITYSDK_OFFSET(0x1591B1F0)

inline static constexpr unsigned int Class_2_D49A9B093FA7A5BE_TypeDefinitionIndex = 80742;

class Class_2_D49A9B093FA7A5BE : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_0 = 0x10; // 0x0
	::System::Boolean Field_2_1; // 0x20
	::System::Int32 Field_2_3; // 0x24
	::System::Int32 Field_2_2; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D49A9B093FA7A5BE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D49A9B093FA7A5BE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D49A9B093FA7A5BE_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D49A9B093FA7A5BE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_C3A221BD93074219(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D49A9B093FA7A5BE_METHOD_2_C3A221BD93074219_OFFSET))(this, a1, a2, a3);
	}
};
