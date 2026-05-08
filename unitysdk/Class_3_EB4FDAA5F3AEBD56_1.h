#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_EB4FDAA5F3AEBD56_1_METHOD_3_7A00E552FBB51A60_OFFSET UNITYSDK_OFFSET(0x16A705F0)
#define CLASS_3_EB4FDAA5F3AEBD56_1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16A70A70)
#define CLASS_3_EB4FDAA5F3AEBD56_1_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x16A703F0)
#define CLASS_3_EB4FDAA5F3AEBD56_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16A708F0)

inline static constexpr unsigned int Class_3_EB4FDAA5F3AEBD56_1_TypeDefinitionIndex = 76545;

class Class_3_EB4FDAA5F3AEBD56_1 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::Int32>*>* Field_3_1; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_3_2; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::Single>*>* Field_3_3; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30
	::Class_3_B537A0AA78803363* Field_3_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB4FDAA5F3AEBD56_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB4FDAA5F3AEBD56_1_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_7A00E552FBB51A60(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_EB4FDAA5F3AEBD56_1_METHOD_3_7A00E552FBB51A60_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB4FDAA5F3AEBD56_1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
