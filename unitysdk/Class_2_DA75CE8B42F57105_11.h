#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_DA75CE8B42F57105_11_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x12458EC0)
#define CLASS_2_DA75CE8B42F57105_11_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x12458DA0)
#define CLASS_2_DA75CE8B42F57105_11_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12458E30)
#define CLASS_2_DA75CE8B42F57105_11__CCTOR_OFFSET UNITYSDK_OFFSET(0x12458D10)
#define CLASS_2_DA75CE8B42F57105_11__CTOR_OFFSET UNITYSDK_OFFSET(0x12458D80)

inline static constexpr unsigned int Class_2_DA75CE8B42F57105_11_TypeDefinitionIndex = 77570;

class Class_2_DA75CE8B42F57105_11 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x118; // 0x0
	::System::Boolean Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_DA75CE8B42F57105_11__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA75CE8B42F57105_11__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA75CE8B42F57105_11_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA75CE8B42F57105_11_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DA75CE8B42F57105_11_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
