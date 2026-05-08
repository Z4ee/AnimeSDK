#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_737A00C611EBD9A0_METHOD_4_00C582D95B60B963_OFFSET UNITYSDK_OFFSET(0x105CF840)
#define CLASS_4_737A00C611EBD9A0_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x105CFA40)
#define CLASS_4_737A00C611EBD9A0_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x105CF7B0)
#define CLASS_4_737A00C611EBD9A0__CTOR_OFFSET UNITYSDK_OFFSET(0x105CF9A0)

inline static constexpr unsigned int Class_4_737A00C611EBD9A0_TypeDefinitionIndex = 70410;

class Class_4_737A00C611EBD9A0 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_737A00C611EBD9A0__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_737A00C611EBD9A0_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_00C582D95B60B963(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_737A00C611EBD9A0_METHOD_4_00C582D95B60B963_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_737A00C611EBD9A0_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
