#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CBE3940117D4417A.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_817CB2D9277BE68D_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC359E00)
#define CLASS_2_817CB2D9277BE68D_1_DOONENTER_OFFSET UNITYSDK_OFFSET(0xC359EA0)
#define CLASS_2_817CB2D9277BE68D_1_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xC359F30)
#define CLASS_2_817CB2D9277BE68D_1_DOONTICK_OFFSET UNITYSDK_OFFSET(0xC359FC0)
#define CLASS_2_817CB2D9277BE68D_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC359DC0)

inline static constexpr unsigned int Class_2_817CB2D9277BE68D_1_TypeDefinitionIndex = 57529;

class Class_2_817CB2D9277BE68D_1 : public ::Class_1_CBE3940117D4417A
{
public:
	::System::Boolean FMCHJKDPJDE; // 0xA0

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
