#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_534AF681CC2BD5FD_1.h"
#include "unitysdk/Struct_2_52A902145F5BE51A.h"
#include "unitysdk/Struct_2_6E84059A56082F8E.h"

#define CLASS_4_2B073355A9672C8A_METHOD_4_DC18FF8EFDFCAAC1_OFFSET UNITYSDK_OFFSET(0x1C3CF4E0)
#define CLASS_4_2B073355A9672C8A__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3CF530)

inline static constexpr unsigned int Class_4_2B073355A9672C8A_TypeDefinitionIndex = 88093;

class Class_4_2B073355A9672C8A : public ::Class_3_534AF681CC2BD5FD_1<::Struct_2_6E84059A56082F8E>
{
public:
	::System::Single Field_4_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2B073355A9672C8A__CTOR_OFFSET))(this);
	}

	::Struct_2_6E84059A56082F8E Method_4_DC18FF8EFDFCAAC1(::Struct_2_52A902145F5BE51A& a1)
	{
		return ((::Struct_2_6E84059A56082F8E(*)(::PVOID, ::Struct_2_52A902145F5BE51A&))((::PBYTE)hIl2Cpp + CLASS_4_2B073355A9672C8A_METHOD_4_DC18FF8EFDFCAAC1_OFFSET))(this, a1);
	}
};
