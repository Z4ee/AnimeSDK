#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_29B23DDF98AF43AC.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define CLASS_2_775953B773EF713C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7A9350)
#define CLASS_2_775953B773EF713C_DOONENTER_OFFSET UNITYSDK_OFFSET(0xC7A93A0)
#define CLASS_2_775953B773EF713C_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xC7A9410)
#define CLASS_2_775953B773EF713C__CTOR_OFFSET UNITYSDK_OFFSET(0xC7A92C0)

inline static constexpr unsigned int Class_2_775953B773EF713C_TypeDefinitionIndex = 57642;

class Class_2_775953B773EF713C : public ::Class_1_29B23DDF98AF43AC
{
public:
	::System::Action* CKAEKHBNBHN; // 0x98
	::System::Action* DPNPDPDPMCL; // 0xA0

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_775953B773EF713C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_775953B773EF713C_DISPOSE_OFFSET))(this);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_775953B773EF713C_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_775953B773EF713C_DOONEXIT_OFFSET))(this, a1, a2);
	}
};
