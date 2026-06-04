#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_A85D9AF772ADFA09_CLASS_1_8C2C52864F506F61_CLEAR_OFFSET UNITYSDK_OFFSET(0xA47C970)
#define CLASS_2_A85D9AF772ADFA09_CLASS_1_8C2C52864F506F61__CTOR_OFFSET UNITYSDK_OFFSET(0xA47C9D0)

inline static constexpr unsigned int Class_2_A85D9AF772ADFA09_Class_1_8C2C52864F506F61_TypeDefinitionIndex = 68492;

class Class_2_A85D9AF772ADFA09_Class_1_8C2C52864F506F61 : public ::System::Object
{
public:
	::RPG::Client::BaseShaderPropertyTransition* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::System::Single Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A85D9AF772ADFA09_CLASS_1_8C2C52864F506F61__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A85D9AF772ADFA09_CLASS_1_8C2C52864F506F61_CLEAR_OFFSET))(this);
	}
};
