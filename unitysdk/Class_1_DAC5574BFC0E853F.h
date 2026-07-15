#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfCustomerState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_DAC5574BFC0E853F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9000E0)

inline static constexpr unsigned int Class_1_DAC5574BFC0E853F_TypeDefinitionIndex = 39624;

class Class_1_DAC5574BFC0E853F : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::RPG::GameCore::ElfCustomerState Field_1_2; // 0x18
	::System::Single Field_1_3; // 0x1C
	::System::UInt32 Field_1_4; // 0x20
	::System::UInt32 Field_1_5; // 0x24
	::System::UInt32 Field_1_6; // 0x28
	::System::Boolean Field_1_7; // 0x2C
	::System::Boolean Field_1_8; // 0x2D
	::System::UInt32 Field_1_9; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAC5574BFC0E853F__CTOR_OFFSET))(this);
	}
};
