#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_382;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }

#define CLASS_1_A271553247503CFC_METHOD_1_0762847F97165F6D_OFFSET UNITYSDK_OFFSET(0x123C4500)
#define CLASS_1_A271553247503CFC_METHOD_1_83E60CD9199752E7_OFFSET UNITYSDK_OFFSET(0x123C4600)
#define CLASS_1_A271553247503CFC_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x123C4280)
#define CLASS_1_A271553247503CFC_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x123C43C0)
#define CLASS_1_A271553247503CFC__CTOR_OFFSET UNITYSDK_OFFSET(0x123C4790)

inline static constexpr unsigned int Class_1_A271553247503CFC_TypeDefinitionIndex = 49753;

class Class_1_A271553247503CFC : public ::System::Object
{
public:
	::RPG::GameCore::GameWorld* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A271553247503CFC__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_A271553247503CFC_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A271553247503CFC_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Void Method_1_0762847F97165F6D(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_A271553247503CFC_METHOD_1_0762847F97165F6D_OFFSET))(this, a1);
	}

	::System::Void Method_1_83E60CD9199752E7(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AliveState a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CLASS_1_A271553247503CFC_METHOD_1_83E60CD9199752E7_OFFSET))(this, a1, a2, a3);
	}
};
