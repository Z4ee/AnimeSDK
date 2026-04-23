#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkBlackMaskColor.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_40F3107951D76B3B__CTOR_OFFSET UNITYSDK_OFFSET(0x127A6810)

inline static constexpr unsigned int Class_1_40F3107951D76B3B_TypeDefinitionIndex = 45038;

class Class_1_40F3107951D76B3B : public ::System::Object
{
public:
	::System::Boolean Field_1_4; // 0x10
	::System::Boolean Field_1_3; // 0x11
	::System::Boolean Field_1_2; // 0x12
	::System::Single Field_1_1; // 0x14
	::System::Single Field_1_7; // 0x18
	::System::Single Field_1_5; // 0x1C
	::System::Single Field_1_6; // 0x20
	::RPG::GameCore::SimpleTalkBlackMaskColor Field_1_0; // 0x24
	::System::Single Field_1_8; // 0x28
	::System::Single Field_1_9; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40F3107951D76B3B__CTOR_OFFSET))(this);
	}
};
