#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3B7CFC169AD8410C.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_0B8A00E6770FCC03.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_2_99A6B66ACB90C91B;
class Class_3_CF43FA1E89397A1C;
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_447DD4001EA47AEB_METHOD_4_191D2C9311B065E6_OFFSET UNITYSDK_OFFSET(0x17172B30)
#define CLASS_4_447DD4001EA47AEB_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17173160)
#define CLASS_4_447DD4001EA47AEB_METHOD_4_DB960C82F37FE1E2_OFFSET UNITYSDK_OFFSET(0x17172DC0)
#define CLASS_4_447DD4001EA47AEB_METHOD_4_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x17172930)
#define CLASS_4_447DD4001EA47AEB__CTOR_OFFSET UNITYSDK_OFFSET(0x17172FA0)

inline static constexpr unsigned int Class_4_447DD4001EA47AEB_TypeDefinitionIndex = 45163;

class Class_4_447DD4001EA47AEB : public ::Class_3_3B7CFC169AD8410C
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_1; // 0x18
	::Class_3_CF43FA1E89397A1C* Field_4_6; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_7; // 0x28
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_2; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_447DD4001EA47AEB__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_447DD4001EA47AEB_METHOD_4_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_4_191D2C9311B065E6(::Class_2_99A6B66ACB90C91B* a1, ::Struct_2_29439DBE2B63DCF3& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_99A6B66ACB90C91B*, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_447DD4001EA47AEB_METHOD_4_191D2C9311B065E6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_DB960C82F37FE1E2(::Struct_2_29439DBE2B63DCF3& a1, ::Struct_2_0B8A00E6770FCC03 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Struct_2_0B8A00E6770FCC03))((::PBYTE)hIl2Cpp + CLASS_4_447DD4001EA47AEB_METHOD_4_DB960C82F37FE1E2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_447DD4001EA47AEB_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}
};
