#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_8F7CC2B09B10F816_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x10218110)
#define CLASS_4_8F7CC2B09B10F816_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x102185F0)
#define CLASS_4_8F7CC2B09B10F816_METHOD_4_CF54D80BCA46F03F_OFFSET UNITYSDK_OFFSET(0x10218260)
#define CLASS_4_8F7CC2B09B10F816__CTOR_OFFSET UNITYSDK_OFFSET(0x102184C0)

inline static constexpr unsigned int Class_4_8F7CC2B09B10F816_TypeDefinitionIndex = 48733;

class Class_4_8F7CC2B09B10F816 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_4_1; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_0; // 0x30
	::Class_4_B51FB35349ACD175<::System::Boolean>* Field_4_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8F7CC2B09B10F816__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8F7CC2B09B10F816_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_CF54D80BCA46F03F(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_8F7CC2B09B10F816_METHOD_4_CF54D80BCA46F03F_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8F7CC2B09B10F816_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
