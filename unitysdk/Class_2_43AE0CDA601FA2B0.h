#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_5C42E41CD341E6B8.h"

namespace System { class String; }

#define CLASS_2_43AE0CDA601FA2B0_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x134DBCC0)
#define CLASS_2_43AE0CDA601FA2B0_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x134DBC30)
#define CLASS_2_43AE0CDA601FA2B0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x134DBD00)
#define CLASS_2_43AE0CDA601FA2B0_METHOD_2_FF8C7C6A0B1E1AF1_OFFSET UNITYSDK_OFFSET(0x134DBD90)
#define CLASS_2_43AE0CDA601FA2B0_TOSTRING_OFFSET UNITYSDK_OFFSET(0x134DBAA0)
#define CLASS_2_43AE0CDA601FA2B0__CCTOR_OFFSET UNITYSDK_OFFSET(0x134DBBB0)
#define CLASS_2_43AE0CDA601FA2B0__CTOR_OFFSET UNITYSDK_OFFSET(0x134DBC20)

inline static constexpr unsigned int Class_2_43AE0CDA601FA2B0_TypeDefinitionIndex = 49146;

class Class_2_43AE0CDA601FA2B0 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0x6B; // 0x0
	::Enum_3_5C42E41CD341E6B8 Field_2_2; // 0x20
	::System::UInt32 Field_2_1; // 0x24
	::System::UInt32 Field_2_0; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_43AE0CDA601FA2B0__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43AE0CDA601FA2B0__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43AE0CDA601FA2B0_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43AE0CDA601FA2B0_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43AE0CDA601FA2B0_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43AE0CDA601FA2B0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_FF8C7C6A0B1E1AF1(::System::UInt32 a1, ::Enum_3_5C42E41CD341E6B8 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_5C42E41CD341E6B8, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_43AE0CDA601FA2B0_METHOD_2_FF8C7C6A0B1E1AF1_OFFSET))(this, a1, a2, a3);
	}
};
