#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_9C8EBBB20E47F2DA_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x126B90A0)
#define CLASS_4_9C8EBBB20E47F2DA_METHOD_4_736362F4F36A44A7_OFFSET UNITYSDK_OFFSET(0x126B8DD0)
#define CLASS_4_9C8EBBB20E47F2DA_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x126B8D40)
#define CLASS_4_9C8EBBB20E47F2DA__CTOR_OFFSET UNITYSDK_OFFSET(0x126B9000)

inline static constexpr unsigned int Class_4_9C8EBBB20E47F2DA_TypeDefinitionIndex = 52986;

class Class_4_9C8EBBB20E47F2DA : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9C8EBBB20E47F2DA__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9C8EBBB20E47F2DA_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_736362F4F36A44A7(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_9C8EBBB20E47F2DA_METHOD_4_736362F4F36A44A7_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9C8EBBB20E47F2DA_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
