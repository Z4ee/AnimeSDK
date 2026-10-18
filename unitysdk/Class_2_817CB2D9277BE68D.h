#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CBE3940117D4417A.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_817CB2D9277BE68D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D92080)
#define CLASS_2_817CB2D9277BE68D_DOONENTER_OFFSET UNITYSDK_OFFSET(0x15D92130)
#define CLASS_2_817CB2D9277BE68D_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x15D921C0)
#define CLASS_2_817CB2D9277BE68D__CTOR_OFFSET UNITYSDK_OFFSET(0x15D92040)

inline static constexpr unsigned int Class_2_817CB2D9277BE68D_TypeDefinitionIndex = 57508;

class Class_2_817CB2D9277BE68D : public ::Class_1_CBE3940117D4417A
{
public:
	::System::Boolean FMCHJKDPJDE; // 0xA0

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_817CB2D9277BE68D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_817CB2D9277BE68D_DISPOSE_OFFSET))(this);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_817CB2D9277BE68D_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_817CB2D9277BE68D_DOONEXIT_OFFSET))(this, a1, a2);
	}
};
