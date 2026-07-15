#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_29B23DDF98AF43AC.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_817CB2D9277BE68D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17D73D30)
#define CLASS_2_817CB2D9277BE68D_DOONENTER_OFFSET UNITYSDK_OFFSET(0x17D73D80)
#define CLASS_2_817CB2D9277BE68D_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x17D73E10)
#define CLASS_2_817CB2D9277BE68D__CTOR_OFFSET UNITYSDK_OFFSET(0x17D73CF0)

inline static constexpr unsigned int Class_2_817CB2D9277BE68D_TypeDefinitionIndex = 54938;

class Class_2_817CB2D9277BE68D : public ::Class_1_29B23DDF98AF43AC
{
public:
	::System::Boolean Field_2_0; // 0x98

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
