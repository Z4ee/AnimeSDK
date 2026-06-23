#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_CF43FA1E89397A1C;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_B3721BE3E3808F11_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x13B94840)
#define CLASS_4_B3721BE3E3808F11_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x13B94330)
#define CLASS_4_B3721BE3E3808F11_METHOD_4_43B953D68150E82F_OFFSET UNITYSDK_OFFSET(0x13B94410)
#define CLASS_4_B3721BE3E3808F11__CTOR_OFFSET UNITYSDK_OFFSET(0x13B94730)

inline static constexpr unsigned int Class_4_B3721BE3E3808F11_TypeDefinitionIndex = 68726;

class Class_4_B3721BE3E3808F11 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x28
	::Class_3_CF43FA1E89397A1C* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B3721BE3E3808F11__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B3721BE3E3808F11_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_43B953D68150E82F(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_B3721BE3E3808F11_METHOD_4_43B953D68150E82F_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B3721BE3E3808F11_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
