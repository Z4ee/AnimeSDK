#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7807B2B04302CD7B_1.h"

namespace System { class Action; }

#define CLASS_2_48DFB0E953D00A02__CTOR_OFFSET UNITYSDK_OFFSET(0x14947BC0)

inline static constexpr unsigned int Class_2_48DFB0E953D00A02_TypeDefinitionIndex = 59822;

class Class_2_48DFB0E953D00A02 : public ::Class_1_7807B2B04302CD7B_1
{
public:
	::System::Action* Field_2_4; // 0x18
	::System::Int32 Field_2_0; // 0x20
	::System::Int32 Field_2_2; // 0x24
	::System::Int32 Field_2_1; // 0x28
	::System::Int32 Field_2_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48DFB0E953D00A02__CTOR_OFFSET))(this);
	}
};
