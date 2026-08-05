#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_53.h"

#define CLASS_2_03C2069326D05EFB_METHOD_2_07374B8FCDCB7B70_OFFSET UNITYSDK_OFFSET(0x10B20010)
#define CLASS_2_03C2069326D05EFB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10B1FF80)
#define CLASS_2_03C2069326D05EFB_METHOD_2_EBBC49A9109F0F2F_OFFSET UNITYSDK_OFFSET(0x10B1FE90)
#define CLASS_2_03C2069326D05EFB__CTOR_OFFSET UNITYSDK_OFFSET(0x10B1FF70)

inline static constexpr unsigned int Class_2_03C2069326D05EFB_TypeDefinitionIndex = 68636;

class Class_2_03C2069326D05EFB : public ::Class_1_43BD383C98B4C0C5_53
{
public:
	::System::UInt64 Field_2_4; // 0x10
	::System::UInt32 Field_2_5; // 0x18
	::System::UInt64 Field_2_6; // 0x20
	::System::UInt64 Field_2_0; // 0x28
	::System::UInt32 Field_2_10; // 0x30
	::System::UInt32 Field_2_11; // 0x34
	::System::UInt64 Field_2_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03C2069326D05EFB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBBC49A9109F0F2F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03C2069326D05EFB_METHOD_2_EBBC49A9109F0F2F_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03C2069326D05EFB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_2_03C2069326D05EFB* Method_2_07374B8FCDCB7B70()
	{
		return ((::Class_2_03C2069326D05EFB*(*)())((::PBYTE)hIl2Cpp + CLASS_2_03C2069326D05EFB_METHOD_2_07374B8FCDCB7B70_OFFSET))();
	}
};
