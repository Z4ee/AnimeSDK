#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_0B4A9CBAA4CAEC69__CTOR_OFFSET UNITYSDK_OFFSET(0x108E3070)

inline static constexpr unsigned int Class_1_0B4A9CBAA4CAEC69_TypeDefinitionIndex = 45888;

class Class_1_0B4A9CBAA4CAEC69 : public ::System::Object
{
public:
	::System::Int32 Field_1_3; // 0x10
	::System::Single Field_1_2; // 0x14
	::System::Boolean Field_1_1; // 0x18
	::System::Single Field_1_4; // 0x1C
	::RPG::GameCore::CharacterMotionFlag Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B4A9CBAA4CAEC69__CTOR_OFFSET))(this);
	}
};
