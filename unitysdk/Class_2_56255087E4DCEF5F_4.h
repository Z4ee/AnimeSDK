#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_17.h"

class Class_2_3616FDE8A71D0590_1;
class Class_4_38B51614211CBC7D;

#define CLASS_2_56255087E4DCEF5F_4_METHOD_2_6133764619ACBC4F_OFFSET UNITYSDK_OFFSET(0x18B6B2E0)
#define CLASS_2_56255087E4DCEF5F_4_METHOD_2_747FD4D2EE10D57A_OFFSET UNITYSDK_OFFSET(0x18B6AF80)
#define CLASS_2_56255087E4DCEF5F_4__CTOR_OFFSET UNITYSDK_OFFSET(0x18B6AF70)

inline static constexpr unsigned int Class_2_56255087E4DCEF5F_4_TypeDefinitionIndex = 34541;

class Class_2_56255087E4DCEF5F_4 : public ::Class_1_43BD383C98B4C0C5_17
{
public:
	::Class_2_3616FDE8A71D0590_1* Field_2_0; // 0x10
	::Class_4_38B51614211CBC7D* Field_2_1; // 0x18

	::System::Void _ctor(::Class_4_38B51614211CBC7D* a1, ::Class_2_3616FDE8A71D0590_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_38B51614211CBC7D*, ::Class_2_3616FDE8A71D0590_1*))((::PBYTE)hIl2Cpp + CLASS_2_56255087E4DCEF5F_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_747FD4D2EE10D57A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_56255087E4DCEF5F_4_METHOD_2_747FD4D2EE10D57A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6133764619ACBC4F(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_56255087E4DCEF5F_4_METHOD_2_6133764619ACBC4F_OFFSET))(this, a1);
	}
};
