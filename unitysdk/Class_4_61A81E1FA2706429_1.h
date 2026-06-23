#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_61A81E1FA2706429_1_METHOD_4_03F4ED7B776AB124_OFFSET UNITYSDK_OFFSET(0x150617E0)
#define CLASS_4_61A81E1FA2706429_1_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x15061AB0)
#define CLASS_4_61A81E1FA2706429_1_METHOD_4_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x15061770)
#define CLASS_4_61A81E1FA2706429_1_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x150616E0)
#define CLASS_4_61A81E1FA2706429_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15061A10)

inline static constexpr unsigned int Class_4_61A81E1FA2706429_1_TypeDefinitionIndex = 55732;

class Class_4_61A81E1FA2706429_1 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_61A81E1FA2706429_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_61A81E1FA2706429_1_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_61A81E1FA2706429_1_METHOD_4_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_61A81E1FA2706429_1_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Boolean Method_4_03F4ED7B776AB124(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_61A81E1FA2706429_1_METHOD_4_03F4ED7B776AB124_OFFSET))(this, a1);
	}
};
