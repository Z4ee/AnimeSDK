#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_425;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }

#define CLASS_1_2267AA46DDC5A3E1_METHOD_1_7B3711015280C5D2_OFFSET UNITYSDK_OFFSET(0x181B4F20)
#define CLASS_1_2267AA46DDC5A3E1_METHOD_1_838B057A9AD69AAC_OFFSET UNITYSDK_OFFSET(0x181B5020)
#define CLASS_1_2267AA46DDC5A3E1_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x181B4C40)
#define CLASS_1_2267AA46DDC5A3E1_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x181B4DB0)
#define CLASS_1_2267AA46DDC5A3E1__CTOR_OFFSET UNITYSDK_OFFSET(0x181B51B0)

inline static constexpr unsigned int Class_1_2267AA46DDC5A3E1_TypeDefinitionIndex = 51502;

class Class_1_2267AA46DDC5A3E1 : public ::System::Object
{
public:
	::RPG::GameCore::GameWorld* Field_1_0; // 0x10

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

	::System::Void Method_1_7B3711015280C5D2(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_2267AA46DDC5A3E1_METHOD_1_7B3711015280C5D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_838B057A9AD69AAC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AliveState a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CLASS_1_2267AA46DDC5A3E1_METHOD_1_838B057A9AD69AAC_OFFSET))(this, a1, a2, a3);
	}
};
