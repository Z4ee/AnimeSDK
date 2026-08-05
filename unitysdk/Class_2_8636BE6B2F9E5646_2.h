#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_8636BE6B2F9E5646_2_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1566CBE0)
#define CLASS_2_8636BE6B2F9E5646_2_METHOD_2_BE18C04CD91E0748_OFFSET UNITYSDK_OFFSET(0x1566CC70)
#define CLASS_2_8636BE6B2F9E5646_2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1566CCD0)
#define CLASS_2_8636BE6B2F9E5646_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1566CB60)
#define CLASS_2_8636BE6B2F9E5646_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1566CBD0)

inline static constexpr unsigned int Class_2_8636BE6B2F9E5646_2_TypeDefinitionIndex = 45450;

class Class_2_8636BE6B2F9E5646_2 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_7 = 0xF8; // 0x0
	::System::UInt32 Field_2_1; // 0x20
	::System::UInt32 Field_2_0; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8636BE6B2F9E5646_2__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8636BE6B2F9E5646_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8636BE6B2F9E5646_2_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_BE18C04CD91E0748(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8636BE6B2F9E5646_2_METHOD_2_BE18C04CD91E0748_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8636BE6B2F9E5646_2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
