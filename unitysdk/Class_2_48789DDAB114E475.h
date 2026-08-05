#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_299B9A89FD285FC5.h"

#define CLASS_2_48789DDAB114E475_METHOD_2_075B0C2C227F4CD4_OFFSET UNITYSDK_OFFSET(0x11BE5540)
#define CLASS_2_48789DDAB114E475_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x11BE5420)
#define CLASS_2_48789DDAB114E475_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11BE54B0)
#define CLASS_2_48789DDAB114E475__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BE53A0)
#define CLASS_2_48789DDAB114E475__CTOR_OFFSET UNITYSDK_OFFSET(0x11BE5410)

inline static constexpr unsigned int Class_2_48789DDAB114E475_TypeDefinitionIndex = 74045;

class Class_2_48789DDAB114E475 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_0 = 0x12F; // 0x0
	::Enum_3_299B9A89FD285FC5 Field_2_3; // 0x20
	::System::Boolean Field_2_1; // 0x24
	::System::Single Field_2_2; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_48789DDAB114E475__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48789DDAB114E475__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48789DDAB114E475_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48789DDAB114E475_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_075B0C2C227F4CD4(::Enum_3_299B9A89FD285FC5 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_299B9A89FD285FC5, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_48789DDAB114E475_METHOD_2_075B0C2C227F4CD4_OFFSET))(this, a1, a2, a3);
	}
};
