#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_872037CA3D9BDC34_4.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_853.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_2_6D99A03C58ED2B6E_6_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x136A9780)
#define CLASS_2_6D99A03C58ED2B6E_6_METHOD_2_6954C9CCE491070A_OFFSET UNITYSDK_OFFSET(0x136A9BD0)
#define CLASS_2_6D99A03C58ED2B6E_6__CTOR_OFFSET UNITYSDK_OFFSET(0x136A9770)

inline static constexpr unsigned int Class_2_6D99A03C58ED2B6E_6_TypeDefinitionIndex = 12770;

class Class_2_6D99A03C58ED2B6E_6 : public ::Class_1_872037CA3D9BDC34_4
{
public:
	::System::Int32 Field_2_0; // 0x58

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_853 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_853, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_6D99A03C58ED2B6E_6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D99A03C58ED2B6E_6_METHOD_2_289F28027FF47717_OFFSET))(this);
	}

	static ::System::Int32 Method_2_6954C9CCE491070A(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6D99A03C58ED2B6E_6_METHOD_2_6954C9CCE491070A_OFFSET))(a1);
	}
};
