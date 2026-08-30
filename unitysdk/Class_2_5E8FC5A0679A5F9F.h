#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_29B23DDF98AF43AC.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_5E8FC5A0679A5F9F_DOONENTER_OFFSET UNITYSDK_OFFSET(0x18E14C70)
#define CLASS_2_5E8FC5A0679A5F9F_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x18E14E10)
#define CLASS_2_5E8FC5A0679A5F9F__CTOR_OFFSET UNITYSDK_OFFSET(0x18E14C30)

inline static constexpr unsigned int Class_2_5E8FC5A0679A5F9F_TypeDefinitionIndex = 57669;

class Class_2_5E8FC5A0679A5F9F : public ::Class_1_29B23DDF98AF43AC
{
public:
	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5E8FC5A0679A5F9F__CTOR_OFFSET))(this, a1);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5E8FC5A0679A5F9F_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_5E8FC5A0679A5F9F_DOONEXIT_OFFSET))(this, a1, a2);
	}
};
