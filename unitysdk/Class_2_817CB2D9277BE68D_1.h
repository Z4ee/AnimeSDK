#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_29B23DDF98AF43AC.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_817CB2D9277BE68D_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC457E80)
#define CLASS_2_817CB2D9277BE68D_1_DOONENTER_OFFSET UNITYSDK_OFFSET(0xC457ED0)
#define CLASS_2_817CB2D9277BE68D_1_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xC457F60)
#define CLASS_2_817CB2D9277BE68D_1_DOONTICK_OFFSET UNITYSDK_OFFSET(0xC457FF0)
#define CLASS_2_817CB2D9277BE68D_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC457E40)

inline static constexpr unsigned int Class_2_817CB2D9277BE68D_1_TypeDefinitionIndex = 57683;

class Class_2_817CB2D9277BE68D_1 : public ::Class_1_29B23DDF98AF43AC
{
public:
	::System::Boolean FMCHJKDPJDE; // 0x98

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_817CB2D9277BE68D_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_817CB2D9277BE68D_1_DISPOSE_OFFSET))(this);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_817CB2D9277BE68D_1_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_817CB2D9277BE68D_1_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void DoOnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_817CB2D9277BE68D_1_DOONTICK_OFFSET))(this, a1);
	}
};
