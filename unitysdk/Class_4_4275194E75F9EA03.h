#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_534AF681CC2BD5FD.h"
#include "unitysdk/Struct_2_20524E1B140AC181.h"
#include "unitysdk/Struct_2_52A902145F5BE51A.h"

#define CLASS_4_4275194E75F9EA03_METHOD_4_DC18FF8EFDFCAAC1_OFFSET UNITYSDK_OFFSET(0x1DB6C8F0)
#define CLASS_4_4275194E75F9EA03__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB6C8E0)

inline static constexpr unsigned int Class_4_4275194E75F9EA03_TypeDefinitionIndex = 92318;

class Class_4_4275194E75F9EA03 : public ::Class_3_534AF681CC2BD5FD<::Struct_2_20524E1B140AC181>
{
public:
	::System::Boolean Field_4_0; // 0x10
	::System::Single Field_4_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4275194E75F9EA03__CTOR_OFFSET))(this);
	}

	::Struct_2_20524E1B140AC181 Method_4_DC18FF8EFDFCAAC1(::Struct_2_52A902145F5BE51A& a1)
	{
		return ((::Struct_2_20524E1B140AC181(*)(::PVOID, ::Struct_2_52A902145F5BE51A&))((::PBYTE)hIl2Cpp + CLASS_4_4275194E75F9EA03_METHOD_4_DC18FF8EFDFCAAC1_OFFSET))(this, a1);
	}
};
