#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_23EA457C3391B54A_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xB7DCEA0)
#define CLASS_4_23EA457C3391B54A_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xB7DD3E0)
#define CLASS_4_23EA457C3391B54A_METHOD_4_47125C76AFDB961E_OFFSET UNITYSDK_OFFSET(0xB7DCFF0)
#define CLASS_4_23EA457C3391B54A__CTOR_OFFSET UNITYSDK_OFFSET(0xB7DD250)

inline static constexpr unsigned int Class_4_23EA457C3391B54A_TypeDefinitionIndex = 52363;

class Class_4_23EA457C3391B54A : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_3_B537A0AA78803363* Field_4_1; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_0; // 0x30
	::Class_3_B537A0AA78803363* Field_4_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_23EA457C3391B54A__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_23EA457C3391B54A_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_47125C76AFDB961E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_23EA457C3391B54A_METHOD_4_47125C76AFDB961E_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_23EA457C3391B54A_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
