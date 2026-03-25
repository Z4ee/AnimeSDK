#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfCustomerState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_DAC5574BFC0E853F__CTOR_OFFSET UNITYSDK_OFFSET(0x1678B460)

inline static constexpr unsigned int Class_1_DAC5574BFC0E853F_TypeDefinitionIndex = 32354;

class Class_1_DAC5574BFC0E853F : public ::System::Object
{
public:
	::System::UInt32 Field_1_1; // 0x10
	::RPG::GameCore::ElfCustomerState Field_1_0; // 0x14
	::System::UInt32 Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x1C
	::System::Int32 Field_1_7; // 0x20
	::System::UInt32 Field_1_3; // 0x24
	::System::Single Field_1_8; // 0x28
	::System::Boolean Field_1_9; // 0x2C
	::System::Boolean Field_1_6; // 0x2D
	::System::UInt32 Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAC5574BFC0E853F__CTOR_OFFSET))(this);
	}
};
