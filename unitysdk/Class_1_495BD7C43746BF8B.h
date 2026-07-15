#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class NPCTriggerSound; }

#define CLASS_1_495BD7C43746BF8B__CTOR_OFFSET UNITYSDK_OFFSET(0x152CBC30)

inline static constexpr unsigned int Class_1_495BD7C43746BF8B_TypeDefinitionIndex = 54513;

class Class_1_495BD7C43746BF8B : public ::System::Object
{
public:
	::RPG::GameCore::NPCTriggerSound* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x1C
	::System::Single Field_1_3; // 0x20
	::System::Single Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_495BD7C43746BF8B__CTOR_OFFSET))(this);
	}
};
