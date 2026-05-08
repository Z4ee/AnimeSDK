#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_B157801017D6B2A4_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x143BBE00)
#define CLASS_2_B157801017D6B2A4_METHOD_2_AE7ACA9431B8342C_OFFSET UNITYSDK_OFFSET(0x143BBF20)
#define CLASS_2_B157801017D6B2A4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x143BBE90)
#define CLASS_2_B157801017D6B2A4__CCTOR_OFFSET UNITYSDK_OFFSET(0x143BBD80)
#define CLASS_2_B157801017D6B2A4__CTOR_OFFSET UNITYSDK_OFFSET(0x143BBDF0)

inline static constexpr unsigned int Class_2_B157801017D6B2A4_TypeDefinitionIndex = 39689;

class Class_2_B157801017D6B2A4 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x3A; // 0x0
	::System::Int32 Field_2_0; // 0x20
	::System::Boolean Field_2_1; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B157801017D6B2A4__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B157801017D6B2A4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B157801017D6B2A4_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B157801017D6B2A4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_AE7ACA9431B8342C(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B157801017D6B2A4_METHOD_2_AE7ACA9431B8342C_OFFSET))(this, a1, a2);
	}
};
