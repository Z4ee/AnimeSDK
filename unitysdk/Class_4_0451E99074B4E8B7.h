#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_0451E99074B4E8B7_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xFFF6220)
#define CLASS_4_0451E99074B4E8B7_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xFFF5F40)
#define CLASS_4_0451E99074B4E8B7_METHOD_4_61537C1E171F0758_OFFSET UNITYSDK_OFFSET(0xFFF6020)
#define CLASS_4_0451E99074B4E8B7__CTOR_OFFSET UNITYSDK_OFFSET(0xFFF6130)

inline static constexpr unsigned int Class_4_0451E99074B4E8B7_TypeDefinitionIndex = 50034;

class Class_4_0451E99074B4E8B7 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_4_1; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0451E99074B4E8B7__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0451E99074B4E8B7_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_61537C1E171F0758(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_0451E99074B4E8B7_METHOD_4_61537C1E171F0758_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0451E99074B4E8B7_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
