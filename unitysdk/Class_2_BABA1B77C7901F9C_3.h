#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_BABA1B77C7901F9C_3_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x13A2B110)
#define CLASS_2_BABA1B77C7901F9C_3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13A2B230)
#define CLASS_2_BABA1B77C7901F9C_3_METHOD_2_DFB3E3DF5DAF95EF_OFFSET UNITYSDK_OFFSET(0x13A2B1A0)
#define CLASS_2_BABA1B77C7901F9C_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A2B090)
#define CLASS_2_BABA1B77C7901F9C_3__CTOR_OFFSET UNITYSDK_OFFSET(0x13A2B100)

inline static constexpr unsigned int Class_2_BABA1B77C7901F9C_3_TypeDefinitionIndex = 50999;

class Class_2_BABA1B77C7901F9C_3 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x4B; // 0x0
	::System::UInt32 Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BABA1B77C7901F9C_3__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BABA1B77C7901F9C_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BABA1B77C7901F9C_3_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_DFB3E3DF5DAF95EF(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_BABA1B77C7901F9C_3_METHOD_2_DFB3E3DF5DAF95EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BABA1B77C7901F9C_3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
