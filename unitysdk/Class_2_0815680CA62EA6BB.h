#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_0815680CA62EA6BB_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x117D7B40)
#define CLASS_2_0815680CA62EA6BB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x117D7BD0)
#define CLASS_2_0815680CA62EA6BB_METHOD_2_F6EB917C5A67C7BA_OFFSET UNITYSDK_OFFSET(0x117D7C60)
#define CLASS_2_0815680CA62EA6BB__CCTOR_OFFSET UNITYSDK_OFFSET(0x117D7AC0)
#define CLASS_2_0815680CA62EA6BB__CTOR_OFFSET UNITYSDK_OFFSET(0x117D7B30)

inline static constexpr unsigned int Class_2_0815680CA62EA6BB_TypeDefinitionIndex = 81161;

class Class_2_0815680CA62EA6BB : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_0 = 0x14E; // 0x0
	::System::Boolean Field_2_2; // 0x20
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

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0815680CA62EA6BB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_F6EB917C5A67C7BA(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0815680CA62EA6BB_METHOD_2_F6EB917C5A67C7BA_OFFSET))(this, a1, a2);
	}
};
