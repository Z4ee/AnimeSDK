#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0935784B6BF435B4_METHOD_2_6B5A6AD44185433D_OFFSET UNITYSDK_OFFSET(0x1C8B16E0)
#define CLASS_2_0935784B6BF435B4_METHOD_2_D9DDB7A58F4BCA1A_OFFSET UNITYSDK_OFFSET(0x1C8B0F10)
#define CLASS_2_0935784B6BF435B4_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1C8B0D60)
#define CLASS_2_0935784B6BF435B4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8B1A80)

inline static constexpr unsigned int Class_2_0935784B6BF435B4_TypeDefinitionIndex = 42198;

class Class_2_0935784B6BF435B4 : public ::Class_1_5BE136E515AF9A61
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* GBOFILONLMO; // 0x18
	::System::Single CPMLBDPGJAK; // 0x20
	::System::Single PGMIOKKLHIE; // 0x24
	::System::Int32 BJPJNEHNIML; // 0x28
	::System::Int32 INAKMLFKHAM; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0935784B6BF435B4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0935784B6BF435B4_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_D9DDB7A58F4BCA1A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0935784B6BF435B4_METHOD_2_D9DDB7A58F4BCA1A_OFFSET))(this, a1);
	}

	::System::Void Method_2_6B5A6AD44185433D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0935784B6BF435B4_METHOD_2_6B5A6AD44185433D_OFFSET))(this, a1);
	}
};
