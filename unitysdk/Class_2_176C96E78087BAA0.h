#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_176C96E78087BAA0_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x120BD040)
#define CLASS_2_176C96E78087BAA0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x120BD0D0)
#define CLASS_2_176C96E78087BAA0__CCTOR_OFFSET UNITYSDK_OFFSET(0x120BCFC0)
#define CLASS_2_176C96E78087BAA0__CTOR_OFFSET UNITYSDK_OFFSET(0x120BD030)

inline static constexpr unsigned int Class_2_176C96E78087BAA0_TypeDefinitionIndex = 38285;

class Class_2_176C96E78087BAA0 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x68; // 0x0
	::System::Boolean Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_176C96E78087BAA0__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_176C96E78087BAA0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_176C96E78087BAA0_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_176C96E78087BAA0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
