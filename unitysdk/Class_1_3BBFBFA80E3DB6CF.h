#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_3BBFBFA80E3DB6CF__CTOR_OFFSET UNITYSDK_OFFSET(0x13D63810)

inline static constexpr unsigned int Class_1_3BBFBFA80E3DB6CF_TypeDefinitionIndex = 46326;

class Class_1_3BBFBFA80E3DB6CF : public ::System::Object
{
public:
	::System::Action* Field_1_9; // 0x10
	::System::UInt32 Field_1_0; // 0x18
	::System::Int32 Field_1_7; // 0x1C
	::System::Boolean Field_1_5; // 0x20
	::System::Boolean Field_1_11; // 0x21
	::System::Boolean Field_1_10; // 0x22
	::System::Boolean Field_1_6; // 0x23
	::System::Boolean Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BBFBFA80E3DB6CF__CTOR_OFFSET))(this);
	}
};
