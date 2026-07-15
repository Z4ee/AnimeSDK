#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkBlackMaskColor.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_40F3107951D76B3B__CTOR_OFFSET UNITYSDK_OFFSET(0x174589B0)

inline static constexpr unsigned int Class_1_40F3107951D76B3B_TypeDefinitionIndex = 46520;

class Class_1_40F3107951D76B3B : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x14
	::RPG::GameCore::SimpleTalkBlackMaskColor Field_1_2; // 0x18
	::System::Boolean Field_1_3; // 0x1C
	::System::Boolean Field_1_4; // 0x1D
	::System::Boolean Field_1_5; // 0x1E
	::System::Single Field_1_6; // 0x20
	::System::Single Field_1_7; // 0x24
	::System::Single Field_1_8; // 0x28
	::System::Single Field_1_9; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40F3107951D76B3B__CTOR_OFFSET))(this);
	}
};
