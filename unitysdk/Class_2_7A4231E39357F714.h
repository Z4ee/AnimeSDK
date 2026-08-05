#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_7A4231E39357F714_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x14EE8C20)
#define CLASS_2_7A4231E39357F714_METHOD_2_946C86AFF9AAA632_OFFSET UNITYSDK_OFFSET(0x14EE8CB0)
#define CLASS_2_7A4231E39357F714_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14EE8D10)
#define CLASS_2_7A4231E39357F714__CCTOR_OFFSET UNITYSDK_OFFSET(0x14EE8BA0)
#define CLASS_2_7A4231E39357F714__CTOR_OFFSET UNITYSDK_OFFSET(0x14EE8C10)

inline static constexpr unsigned int Class_2_7A4231E39357F714_TypeDefinitionIndex = 54884;

class Class_2_7A4231E39357F714 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_7 = 0x146; // 0x0
	::System::Boolean Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7A4231E39357F714__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A4231E39357F714__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A4231E39357F714_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_946C86AFF9AAA632(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7A4231E39357F714_METHOD_2_946C86AFF9AAA632_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A4231E39357F714_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
