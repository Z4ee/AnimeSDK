#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_8636BE6B2F9E5646_5_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x145F3710)
#define CLASS_2_8636BE6B2F9E5646_5_METHOD_2_BE18C04CD91E0748_OFFSET UNITYSDK_OFFSET(0x145F37A0)
#define CLASS_2_8636BE6B2F9E5646_5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x145F3800)
#define CLASS_2_8636BE6B2F9E5646_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x145F3690)
#define CLASS_2_8636BE6B2F9E5646_5__CTOR_OFFSET UNITYSDK_OFFSET(0x145F3700)

inline static constexpr unsigned int Class_2_8636BE6B2F9E5646_5_TypeDefinitionIndex = 58459;

class Class_2_8636BE6B2F9E5646_5 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_6 = 0x3A; // 0x0
	::System::UInt32 Field_2_7; // 0x20
	::System::UInt32 Field_2_0; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8636BE6B2F9E5646_5__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8636BE6B2F9E5646_5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8636BE6B2F9E5646_5_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_BE18C04CD91E0748(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8636BE6B2F9E5646_5_METHOD_2_BE18C04CD91E0748_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8636BE6B2F9E5646_5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
