#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_A85D9AF772ADFA09_CLASS_1_8C2C52864F506F61_CLEAR_OFFSET UNITYSDK_OFFSET(0x18487F80)
#define CLASS_2_A85D9AF772ADFA09_CLASS_1_8C2C52864F506F61__CTOR_OFFSET UNITYSDK_OFFSET(0x18487FE0)

inline static constexpr unsigned int Class_2_A85D9AF772ADFA09_Class_1_8C2C52864F506F61_TypeDefinitionIndex = 73243;

class Class_2_A85D9AF772ADFA09_Class_1_8C2C52864F506F61 : public ::System::Object
{
public:
	::RPG::Client::BaseShaderPropertyTransition* LGNNAOLPNIP; // 0x10
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
	::System::Int32 OJIPAAEFANF; // 0x20
	::System::Single IEHPFADHJFD; // 0x24
	::System::Int32 DOPGIAJMFFO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A85D9AF772ADFA09_CLASS_1_8C2C52864F506F61__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A85D9AF772ADFA09_CLASS_1_8C2C52864F506F61_CLEAR_OFFSET))(this);
	}
};
