#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_0815680CA62EA6BB_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1622E990)
#define CLASS_2_0815680CA62EA6BB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1622EA80)
#define CLASS_2_0815680CA62EA6BB_METHOD_2_F6EB917C5A67C7BA_OFFSET UNITYSDK_OFFSET(0x1622EA20)
#define CLASS_2_0815680CA62EA6BB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1622E910)
#define CLASS_2_0815680CA62EA6BB__CTOR_OFFSET UNITYSDK_OFFSET(0x1622E980)

inline static constexpr unsigned int Class_2_0815680CA62EA6BB_TypeDefinitionIndex = 76950;

class Class_2_0815680CA62EA6BB : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x138; // 0x0
	::System::Boolean Field_2_0; // 0x20
	::System::Boolean Field_2_1; // 0x21

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0815680CA62EA6BB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0815680CA62EA6BB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0815680CA62EA6BB_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_F6EB917C5A67C7BA(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0815680CA62EA6BB_METHOD_2_F6EB917C5A67C7BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0815680CA62EA6BB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
