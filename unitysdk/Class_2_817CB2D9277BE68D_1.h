#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_29B23DDF98AF43AC.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_817CB2D9277BE68D_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16180F90)
#define CLASS_2_817CB2D9277BE68D_1_DOONENTER_OFFSET UNITYSDK_OFFSET(0x16180FE0)
#define CLASS_2_817CB2D9277BE68D_1_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x16181070)
#define CLASS_2_817CB2D9277BE68D_1_DOONTICK_OFFSET UNITYSDK_OFFSET(0x16181100)
#define CLASS_2_817CB2D9277BE68D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16180F50)

inline static constexpr unsigned int Class_2_817CB2D9277BE68D_1_TypeDefinitionIndex = 54959;

class Class_2_817CB2D9277BE68D_1 : public ::Class_1_29B23DDF98AF43AC
{
public:
	::System::Boolean Field_2_0; // 0x98

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
