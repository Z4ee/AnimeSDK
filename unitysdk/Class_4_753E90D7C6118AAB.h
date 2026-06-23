#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_753E90D7C6118AAB_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xEBBFD90)
#define CLASS_4_753E90D7C6118AAB_METHOD_4_B5FF895C58FE544D_OFFSET UNITYSDK_OFFSET(0xEBBF760)
#define CLASS_4_753E90D7C6118AAB_METHOD_4_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xEBBF550)
#define CLASS_4_753E90D7C6118AAB__CTOR_OFFSET UNITYSDK_OFFSET(0xEBBFBF0)

inline static constexpr unsigned int Class_4_753E90D7C6118AAB_TypeDefinitionIndex = 41789;

class Class_4_753E90D7C6118AAB : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_4_2; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_1; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::Single>* Field_4_3; // 0x38
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_0; // 0x40
	::Class_4_F91115D9A1F02F5F<::System::Single>* Field_4_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_753E90D7C6118AAB__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_753E90D7C6118AAB_METHOD_4_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_4_B5FF895C58FE544D(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_753E90D7C6118AAB_METHOD_4_B5FF895C58FE544D_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_753E90D7C6118AAB_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
