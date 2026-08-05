#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_3747DD9970A4756B_2_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x13C33760)
#define CLASS_2_3747DD9970A4756B_2_METHOD_2_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x13C337F0)
#define CLASS_2_3747DD9970A4756B_2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13C33840)
#define CLASS_2_3747DD9970A4756B_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C336E0)
#define CLASS_2_3747DD9970A4756B_2__CTOR_OFFSET UNITYSDK_OFFSET(0x13C33750)

inline static constexpr unsigned int Class_2_3747DD9970A4756B_2_TypeDefinitionIndex = 64477;

class Class_2_3747DD9970A4756B_2 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_0 = 0x116; // 0x0
	::System::UInt32 Field_2_1; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3747DD9970A4756B_2__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3747DD9970A4756B_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3747DD9970A4756B_2_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3747DD9970A4756B_2_METHOD_2_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3747DD9970A4756B_2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
