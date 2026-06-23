#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_976C32A5F32B58FC.h"

class Class_2_A3533EA2DA4533F9;

#define CLASS_2_C7066A0D9954E2D0_METHOD_2_39FD7185C859CEAD_OFFSET UNITYSDK_OFFSET(0x170155F0)
#define CLASS_2_C7066A0D9954E2D0_METHOD_2_3CAB3F134E5CEF52_OFFSET UNITYSDK_OFFSET(0x170150D0)
#define CLASS_2_C7066A0D9954E2D0__CTOR_OFFSET UNITYSDK_OFFSET(0x170150B0)

inline static constexpr unsigned int Class_2_C7066A0D9954E2D0_TypeDefinitionIndex = 44476;

class Class_2_C7066A0D9954E2D0 : public ::Class_1_976C32A5F32B58FC
{
public:
	::System::Int32 Field_2_1; // 0x28
	::System::Boolean Field_2_2; // 0x2C
	::System::Int32 Field_2_0; // 0x30

	::System::Void _ctor(::Class_2_A3533EA2DA4533F9* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A3533EA2DA4533F9*, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C7066A0D9954E2D0__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_3CAB3F134E5CEF52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7066A0D9954E2D0_METHOD_2_3CAB3F134E5CEF52_OFFSET))(this);
	}

	::System::Void Method_2_39FD7185C859CEAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7066A0D9954E2D0_METHOD_2_39FD7185C859CEAD_OFFSET))(this);
	}
};
