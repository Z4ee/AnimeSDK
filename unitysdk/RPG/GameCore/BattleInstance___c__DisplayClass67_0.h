#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LineUpCharacter; }

#define RPG_GAMECORE_BATTLEINSTANCE___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE5339D0)
#define RPG_GAMECORE_BATTLEINSTANCE___C__DISPLAYCLASS67_0___REMOVEBANNEDAVATARFROMSTAGE_B__0_OFFSET UNITYSDK_OFFSET(0xE534000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleInstance___c__DisplayClass67_0_TypeDefinitionIndex = 56227;

	class BattleInstance___c__DisplayClass67_0 : public ::System::Object
	{
	public:
		::System::UInt32 bannedAvatarId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __RemoveBannedAvatarFromStage_b__0(::RPG::GameCore::LineUpCharacter* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LineUpCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE___C__DISPLAYCLASS67_0___REMOVEBANNEDAVATARFROMSTAGE_B__0_OFFSET))(this, a1);
		}
	};
}
