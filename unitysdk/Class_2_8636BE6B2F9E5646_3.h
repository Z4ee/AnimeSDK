#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_8636BE6B2F9E5646_3_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1689A950)
#define CLASS_2_8636BE6B2F9E5646_3_METHOD_2_BE18C04CD91E0748_OFFSET UNITYSDK_OFFSET(0x1689AA70)
#define CLASS_2_8636BE6B2F9E5646_3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1689A9E0)
#define CLASS_2_8636BE6B2F9E5646_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1689A8D0)
#define CLASS_2_8636BE6B2F9E5646_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1689A940)

inline static constexpr unsigned int Class_2_8636BE6B2F9E5646_3_TypeDefinitionIndex = 65491;

class Class_2_8636BE6B2F9E5646_3 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x12; // 0x0
	::System::UInt32 Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8636BE6B2F9E5646_3__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8636BE6B2F9E5646_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8636BE6B2F9E5646_3_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8636BE6B2F9E5646_3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_BE18C04CD91E0748(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8636BE6B2F9E5646_3_METHOD_2_BE18C04CD91E0748_OFFSET))(this, a1, a2);
	}
};
