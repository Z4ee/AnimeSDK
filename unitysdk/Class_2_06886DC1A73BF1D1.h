#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_06886DC1A73BF1D1_METHOD_2_D9DDB7A58F4BCA1A_OFFSET UNITYSDK_OFFSET(0x1BE041C0)
#define CLASS_2_06886DC1A73BF1D1_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1BE04010)
#define CLASS_2_06886DC1A73BF1D1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE04D80)

inline static constexpr unsigned int Class_2_06886DC1A73BF1D1_TypeDefinitionIndex = 40917;

class Class_2_06886DC1A73BF1D1 : public ::Class_1_5BE136E515AF9A61
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* GBOFILONLMO; // 0x18
	::System::Single CPMLBDPGJAK; // 0x20
	::System::Int32 INAKMLFKHAM; // 0x24
	::System::Int32 BJPJNEHNIML; // 0x28
	::System::Single PGMIOKKLHIE; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06886DC1A73BF1D1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06886DC1A73BF1D1_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_D9DDB7A58F4BCA1A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_06886DC1A73BF1D1_METHOD_2_D9DDB7A58F4BCA1A_OFFSET))(this, a1);
	}
};
