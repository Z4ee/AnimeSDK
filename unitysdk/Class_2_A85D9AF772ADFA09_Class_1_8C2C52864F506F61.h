#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_A85D9AF772ADFA09_CLASS_1_8C2C52864F506F61_CLEAR_OFFSET UNITYSDK_OFFSET(0xB725020)
#define CLASS_2_A85D9AF772ADFA09_CLASS_1_8C2C52864F506F61__CTOR_OFFSET UNITYSDK_OFFSET(0xB725080)

inline static constexpr unsigned int Class_2_A85D9AF772ADFA09_Class_1_8C2C52864F506F61_TypeDefinitionIndex = 73244;

class Class_2_A85D9AF772ADFA09_Class_1_8C2C52864F506F61 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
	::RPG::Client::BaseShaderPropertyTransition* LGNNAOLPNIP; // 0x18
	::System::Int32 OJIPAAEFANF; // 0x20
	::System::Int32 DOPGIAJMFFO; // 0x24
	::System::Single IEHPFADHJFD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A85D9AF772ADFA09_CLASS_1_8C2C52864F506F61__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A85D9AF772ADFA09_CLASS_1_8C2C52864F506F61_CLEAR_OFFSET))(this);
	}
};
