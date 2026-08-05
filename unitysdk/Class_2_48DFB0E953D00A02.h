#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7807B2B04302CD7B_8.h"

namespace System { class Action; }

#define CLASS_2_48DFB0E953D00A02__CTOR_OFFSET UNITYSDK_OFFSET(0x11BE5390)

inline static constexpr unsigned int Class_2_48DFB0E953D00A02_TypeDefinitionIndex = 43676;

class Class_2_48DFB0E953D00A02 : public ::Class_1_7807B2B04302CD7B_8
{
public:
	::System::Action* Field_2_6; // 0x18
	::System::Int32 Field_2_0; // 0x20
	::System::Int32 Field_2_1; // 0x24
	::System::Int32 Field_2_2; // 0x28
	::System::Int32 Field_2_7; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48DFB0E953D00A02__CTOR_OFFSET))(this);
	}
};
