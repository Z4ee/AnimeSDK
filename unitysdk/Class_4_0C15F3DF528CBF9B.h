#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_534AF681CC2BD5FD_1.h"
#include "unitysdk/Struct_2_52A902145F5BE51A.h"
#include "unitysdk/Struct_2_EADB70559B2B5513_2.h"

#define CLASS_4_0C15F3DF528CBF9B_METHOD_4_DC18FF8EFDFCAAC1_OFFSET UNITYSDK_OFFSET(0x1CE9B150)
#define CLASS_4_0C15F3DF528CBF9B__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE9B130)

inline static constexpr unsigned int Class_4_0C15F3DF528CBF9B_TypeDefinitionIndex = 88078;

class Class_4_0C15F3DF528CBF9B : public ::Class_3_534AF681CC2BD5FD_1<::Struct_2_EADB70559B2B5513_2>
{
public:
	::System::Int32 Field_4_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C15F3DF528CBF9B__CTOR_OFFSET))(this);
	}

	::Struct_2_EADB70559B2B5513_2 Method_4_DC18FF8EFDFCAAC1(::Struct_2_52A902145F5BE51A& a1)
	{
		return ((::Struct_2_EADB70559B2B5513_2(*)(::PVOID, ::Struct_2_52A902145F5BE51A&))((::PBYTE)hIl2Cpp + CLASS_4_0C15F3DF528CBF9B_METHOD_4_DC18FF8EFDFCAAC1_OFFSET))(this, a1);
	}
};
