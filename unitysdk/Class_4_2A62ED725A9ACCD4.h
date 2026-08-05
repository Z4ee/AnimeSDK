#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_2A62ED725A9ACCD4_METHOD_4_22EB5E1405A8445C_OFFSET UNITYSDK_OFFSET(0x161E03D0)
#define CLASS_4_2A62ED725A9ACCD4_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x161E07E0)
#define CLASS_4_2A62ED725A9ACCD4_METHOD_4_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x161E01C0)
#define CLASS_4_2A62ED725A9ACCD4__CTOR_OFFSET UNITYSDK_OFFSET(0x161E0640)

inline static constexpr unsigned int Class_4_2A62ED725A9ACCD4_TypeDefinitionIndex = 79689;

class Class_4_2A62ED725A9ACCD4 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_4_1; // 0x28
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_4_7; // 0x30
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_4_0; // 0x38
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_4_5; // 0x40
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_4_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2A62ED725A9ACCD4__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2A62ED725A9ACCD4_METHOD_4_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_4_22EB5E1405A8445C(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_2A62ED725A9ACCD4_METHOD_4_22EB5E1405A8445C_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2A62ED725A9ACCD4_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
