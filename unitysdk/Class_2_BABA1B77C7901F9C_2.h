#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_BABA1B77C7901F9C_2_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x10244440)
#define CLASS_2_BABA1B77C7901F9C_2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10244560)
#define CLASS_2_BABA1B77C7901F9C_2_METHOD_2_DFB3E3DF5DAF95EF_OFFSET UNITYSDK_OFFSET(0x102444D0)
#define CLASS_2_BABA1B77C7901F9C_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x102443C0)
#define CLASS_2_BABA1B77C7901F9C_2__CTOR_OFFSET UNITYSDK_OFFSET(0x10244430)

inline static constexpr unsigned int Class_2_BABA1B77C7901F9C_2_TypeDefinitionIndex = 54714;

class Class_2_BABA1B77C7901F9C_2 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x8B; // 0x0
	::System::UInt32 Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BABA1B77C7901F9C_2__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BABA1B77C7901F9C_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BABA1B77C7901F9C_2_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_DFB3E3DF5DAF95EF(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_BABA1B77C7901F9C_2_METHOD_2_DFB3E3DF5DAF95EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BABA1B77C7901F9C_2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
