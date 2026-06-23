#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_18645A8644AF89EB_METHOD_4_00C582D95B60B963_OFFSET UNITYSDK_OFFSET(0x1453B5D0)
#define CLASS_4_18645A8644AF89EB_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1453B850)
#define CLASS_4_18645A8644AF89EB_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1453B540)
#define CLASS_4_18645A8644AF89EB__CTOR_OFFSET UNITYSDK_OFFSET(0x1453B7B0)

inline static constexpr unsigned int Class_4_18645A8644AF89EB_TypeDefinitionIndex = 72128;

class Class_4_18645A8644AF89EB : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_18645A8644AF89EB__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_18645A8644AF89EB_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_00C582D95B60B963(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_18645A8644AF89EB_METHOD_4_00C582D95B60B963_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_18645A8644AF89EB_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
