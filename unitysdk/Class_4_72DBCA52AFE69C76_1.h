#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
namespace System { class String; }
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_72DBCA52AFE69C76_1_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x115C7FB0)
#define CLASS_4_72DBCA52AFE69C76_1_METHOD_4_29CA7C76C5D57032_OFFSET UNITYSDK_OFFSET(0x115C76B0)
#define CLASS_4_72DBCA52AFE69C76_1_METHOD_4_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x115C74A0)
#define CLASS_4_72DBCA52AFE69C76_1__CTOR_OFFSET UNITYSDK_OFFSET(0x115C7DA0)

inline static constexpr unsigned int Class_4_72DBCA52AFE69C76_1_TypeDefinitionIndex = 82642;

class Class_4_72DBCA52AFE69C76_1 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_3_B537A0AA78803363* Field_4_4; // 0x28
	::Class_3_B537A0AA78803363* Field_4_3; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_1; // 0x38
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_0; // 0x40
	::Class_4_B51FB35349ACD175<::System::Int32>* Field_4_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_72DBCA52AFE69C76_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_72DBCA52AFE69C76_1_METHOD_4_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_4_29CA7C76C5D57032(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_72DBCA52AFE69C76_1_METHOD_4_29CA7C76C5D57032_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_72DBCA52AFE69C76_1_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
