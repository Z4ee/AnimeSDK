#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlagEventType.h"
#include "unitysdk/System/Object.h"

class Class_3_E21F6DE9B7FA4D05;

#define CLASS_1_28C624430B9D2D98__CTOR_OFFSET UNITYSDK_OFFSET(0xB7D6410)

inline static constexpr unsigned int Class_1_28C624430B9D2D98_TypeDefinitionIndex = 51496;

class Class_1_28C624430B9D2D98 : public ::System::Object
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_1_2; // 0x10
	::RPG::GameCore::ModifierBehaviorFlag Field_1_1; // 0x18
	::RPG::GameCore::ModifierBehaviorFlagEventType Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28C624430B9D2D98__CTOR_OFFSET))(this);
	}
};
