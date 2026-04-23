#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class DynamicValueRangeCallback; }

#define CLASS_1_8AF99E12A71014CC__CTOR_OFFSET UNITYSDK_OFFSET(0x11D5B570)

inline static constexpr unsigned int Class_1_8AF99E12A71014CC_TypeDefinitionIndex = 51495;

class Class_1_8AF99E12A71014CC : public ::System::Object
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_1_3; // 0x10
	::RPG::GameCore::DynamicValueRangeCallback* Field_1_0; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_1_2; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_1_4; // 0x28
	::System::SByte Field_1_5; // 0x30
	::System::SByte Field_1_7; // 0x31
	::System::Boolean Field_1_1; // 0x32
	::System::SByte Field_1_6; // 0x33

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AF99E12A71014CC__CTOR_OFFSET))(this);
	}
};
