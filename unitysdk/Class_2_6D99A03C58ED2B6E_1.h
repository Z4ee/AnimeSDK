#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_872037CA3D9BDC34_1.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_386.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_2_6D99A03C58ED2B6E_1_METHOD_2_6954C9CCE491070A_OFFSET UNITYSDK_OFFSET(0x1A1711C0)
#define CLASS_2_6D99A03C58ED2B6E_1_METHOD_2_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x1A1712A0)
#define CLASS_2_6D99A03C58ED2B6E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1711B0)

inline static constexpr unsigned int Class_2_6D99A03C58ED2B6E_1_TypeDefinitionIndex = 11824;

class Class_2_6D99A03C58ED2B6E_1 : public ::Class_1_872037CA3D9BDC34_1
{
public:
	::System::Int32 Field_2_0; // 0x58

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_386 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_386, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_6D99A03C58ED2B6E_1__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Int32 Method_2_6954C9CCE491070A(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6D99A03C58ED2B6E_1_METHOD_2_6954C9CCE491070A_OFFSET))(a1);
	}

	::System::Void Method_2_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D99A03C58ED2B6E_1_METHOD_2_F79D5EC57FBF426E_OFFSET))(this);
	}
};
