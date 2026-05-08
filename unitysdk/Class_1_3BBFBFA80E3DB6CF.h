#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_3BBFBFA80E3DB6CF__CTOR_OFFSET UNITYSDK_OFFSET(0x1193C6B0)

inline static constexpr unsigned int Class_1_3BBFBFA80E3DB6CF_TypeDefinitionIndex = 58969;

class Class_1_3BBFBFA80E3DB6CF : public ::System::Object
{
public:
	::System::Action* Field_1_7; // 0x10
	::System::Boolean Field_1_3; // 0x18
	::System::Boolean Field_1_2; // 0x19
	::System::Int32 Field_1_1; // 0x1C
	::System::UInt32 Field_1_0; // 0x20
	::System::Boolean Field_1_6; // 0x24
	::System::Boolean Field_1_4; // 0x25
	::System::Boolean Field_1_5; // 0x26

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BBFBFA80E3DB6CF__CTOR_OFFSET))(this);
	}
};
