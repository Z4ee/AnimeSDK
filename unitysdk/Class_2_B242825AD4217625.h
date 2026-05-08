#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_ECCA5279390647E2.h"

class Class_1_1CDA382D823F8E80;
namespace System { class String; }

#define CLASS_2_B242825AD4217625_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11E8A210)
#define CLASS_2_B242825AD4217625_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x11E8A320)
#define CLASS_2_B242825AD4217625_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x11E8A5C0)
#define CLASS_2_B242825AD4217625_METHOD_2_963922468327BCF9_OFFSET UNITYSDK_OFFSET(0x11E8A4E0)
#define CLASS_2_B242825AD4217625_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11E8A440)
#define CLASS_2_B242825AD4217625_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11E8A3B0)
#define CLASS_2_B242825AD4217625__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E8A2A0)
#define CLASS_2_B242825AD4217625__CTOR_OFFSET UNITYSDK_OFFSET(0x11E8A310)

inline static constexpr unsigned int Class_2_B242825AD4217625_TypeDefinitionIndex = 82615;

class Class_2_B242825AD4217625 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_6 = 0x86; // 0x0
	::Class_1_1CDA382D823F8E80* Field_2_1; // 0x20
	::System::String* Field_2_2; // 0x28
	::Enum_3_ECCA5279390647E2 Field_2_3; // 0x30
	::System::Int32 Field_2_5; // 0x34
	::System::Boolean Field_2_4; // 0x38
	::System::UInt32 Field_2_0; // 0x3C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B242825AD4217625__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B242825AD4217625__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B242825AD4217625_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B242825AD4217625_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B242825AD4217625_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B242825AD4217625_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_963922468327BCF9(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3, ::Class_1_1CDA382D823F8E80* a4, ::Enum_3_ECCA5279390647E2 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::Class_1_1CDA382D823F8E80*, ::Enum_3_ECCA5279390647E2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B242825AD4217625_METHOD_2_963922468327BCF9_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B242825AD4217625_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}
};
