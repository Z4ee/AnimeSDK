#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_DF2291907E1A26A0_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x16675B10)
#define CLASS_2_DF2291907E1A26A0_METHOD_2_5247A650FFC174F2_OFFSET UNITYSDK_OFFSET(0x16675C30)
#define CLASS_2_DF2291907E1A26A0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16675BA0)
#define CLASS_2_DF2291907E1A26A0__CCTOR_OFFSET UNITYSDK_OFFSET(0x16675A90)
#define CLASS_2_DF2291907E1A26A0__CTOR_OFFSET UNITYSDK_OFFSET(0x16675B00)

inline static constexpr unsigned int Class_2_DF2291907E1A26A0_TypeDefinitionIndex = 41124;

class Class_2_DF2291907E1A26A0 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_8 = 0x2E; // 0x0
	::System::String* Field_2_6; // 0x20
	::System::String* Field_2_5; // 0x28
	::System::UInt32 Field_2_0; // 0x30
	::System::Int32 Field_2_2; // 0x34
	::System::Boolean Field_2_3; // 0x38
	::System::Boolean Field_2_7; // 0x39
	::System::Boolean Field_2_1; // 0x3A
	::System::Boolean Field_2_4; // 0x3B

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_DF2291907E1A26A0__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF2291907E1A26A0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF2291907E1A26A0_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF2291907E1A26A0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_5247A650FFC174F2(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Boolean a6, ::System::String* a7, ::System::String* a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DF2291907E1A26A0_METHOD_2_5247A650FFC174F2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}
};
