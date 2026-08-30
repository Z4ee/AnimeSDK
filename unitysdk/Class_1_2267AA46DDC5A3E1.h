#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_460;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }

#define CLASS_1_2267AA46DDC5A3E1_METHOD_1_7B3711015280C5D2_OFFSET UNITYSDK_OFFSET(0xB4B4010)
#define CLASS_1_2267AA46DDC5A3E1_METHOD_1_838B057A9AD69AAC_OFFSET UNITYSDK_OFFSET(0xB4B4110)
#define CLASS_1_2267AA46DDC5A3E1_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0xB4B3D30)
#define CLASS_1_2267AA46DDC5A3E1_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0xB4B3EA0)
#define CLASS_1_2267AA46DDC5A3E1__CTOR_OFFSET UNITYSDK_OFFSET(0xB4B42A0)

inline static constexpr unsigned int Class_1_2267AA46DDC5A3E1_TypeDefinitionIndex = 54186;

class Class_1_2267AA46DDC5A3E1 : public ::System::Object
{
public:
	::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2267AA46DDC5A3E1__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_2267AA46DDC5A3E1_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2267AA46DDC5A3E1_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Void Method_1_7B3711015280C5D2(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_2267AA46DDC5A3E1_METHOD_1_7B3711015280C5D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_838B057A9AD69AAC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AliveState a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CLASS_1_2267AA46DDC5A3E1_METHOD_1_838B057A9AD69AAC_OFFSET))(this, a1, a2, a3);
	}
};
