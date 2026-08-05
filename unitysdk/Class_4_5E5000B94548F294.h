#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_534AF681CC2BD5FD_1.h"
#include "unitysdk/Struct_2_52A902145F5BE51A.h"
#include "unitysdk/Struct_2_6E84059A56082F8E.h"

#define CLASS_4_5E5000B94548F294_METHOD_4_DC18FF8EFDFCAAC1_OFFSET UNITYSDK_OFFSET(0x1E066980)
#define CLASS_4_5E5000B94548F294__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E066960)
#define CLASS_4_5E5000B94548F294__CTOR_OFFSET UNITYSDK_OFFSET(0x1E066940)

inline static constexpr unsigned int Class_4_5E5000B94548F294_TypeDefinitionIndex = 92227;

class Class_4_5E5000B94548F294 : public ::Class_3_534AF681CC2BD5FD_1<::Struct_2_6E84059A56082F8E>
{
public:
	::System::Single Field_4_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5E5000B94548F294__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_5E5000B94548F294__CTOR_1_OFFSET))(this, a1);
	}

	::Struct_2_6E84059A56082F8E Method_4_DC18FF8EFDFCAAC1(::Struct_2_52A902145F5BE51A& a1)
	{
		return ((::Struct_2_6E84059A56082F8E(*)(::PVOID, ::Struct_2_52A902145F5BE51A&))((::PBYTE)hIl2Cpp + CLASS_4_5E5000B94548F294_METHOD_4_DC18FF8EFDFCAAC1_OFFSET))(this, a1);
	}
};
