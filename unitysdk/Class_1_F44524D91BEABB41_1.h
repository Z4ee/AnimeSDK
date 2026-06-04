#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9D4DD2F4235F8658;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_F44524D91BEABB41_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13BF3A10)

inline static constexpr unsigned int Class_1_F44524D91BEABB41_1_TypeDefinitionIndex = 53307;

class Class_1_F44524D91BEABB41_1 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::Class_2_9D4DD2F4235F8658* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44524D91BEABB41_1__CTOR_OFFSET))(this);
	}
};
