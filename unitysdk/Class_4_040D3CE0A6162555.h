#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_534AF681CC2BD5FD_1.h"
#include "unitysdk/Struct_2_52A902145F5BE51A.h"
#include "unitysdk/Struct_2_543941C333C5A7A7.h"

#define CLASS_4_040D3CE0A6162555_METHOD_4_DC18FF8EFDFCAAC1_OFFSET UNITYSDK_OFFSET(0x1CCE2910)
#define CLASS_4_040D3CE0A6162555__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCE2900)

inline static constexpr unsigned int Class_4_040D3CE0A6162555_TypeDefinitionIndex = 88312;

class Class_4_040D3CE0A6162555 : public ::Class_3_534AF681CC2BD5FD_1<::Struct_2_543941C333C5A7A7>
{
public:
	::System::Boolean Field_4_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_040D3CE0A6162555__CTOR_OFFSET))(this);
	}

	::Struct_2_543941C333C5A7A7 Method_4_DC18FF8EFDFCAAC1(::Struct_2_52A902145F5BE51A& a1)
	{
		return ((::Struct_2_543941C333C5A7A7(*)(::PVOID, ::Struct_2_52A902145F5BE51A&))((::PBYTE)hIl2Cpp + CLASS_4_040D3CE0A6162555_METHOD_4_DC18FF8EFDFCAAC1_OFFSET))(this, a1);
	}
};
