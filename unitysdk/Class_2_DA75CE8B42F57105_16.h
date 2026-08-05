#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_DA75CE8B42F57105_16_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x109AF080)
#define CLASS_2_DA75CE8B42F57105_16_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x109AEFF0)
#define CLASS_2_DA75CE8B42F57105_16_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x109AF0D0)
#define CLASS_2_DA75CE8B42F57105_16__CCTOR_OFFSET UNITYSDK_OFFSET(0x109AEF70)
#define CLASS_2_DA75CE8B42F57105_16__CTOR_OFFSET UNITYSDK_OFFSET(0x109AEFE0)

inline static constexpr unsigned int Class_2_DA75CE8B42F57105_16_TypeDefinitionIndex = 90854;

class Class_2_DA75CE8B42F57105_16 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_7 = 0x118; // 0x0
	::System::Boolean Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_DA75CE8B42F57105_16__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA75CE8B42F57105_16__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA75CE8B42F57105_16_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DA75CE8B42F57105_16_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA75CE8B42F57105_16_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
