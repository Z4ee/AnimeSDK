#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MarbleBattleAffiliationType.h"
#include "unitysdk/RPG/Client/PetMarbleBattleSpecialKillType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PETMARBLEBATTLESHOWSPECIALKILLNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0xDAEBEC0)

namespace RPG::Client
{
	inline static constexpr unsigned int PetMarbleBattleShowSpecialKillNotify_TypeDefinitionIndex = 65828;

	class PetMarbleBattleShowSpecialKillNotify : public ::System::Object
	{
	public:
		::RPG::Client::PetMarbleBattleSpecialKillType SpecialKillType; // 0x10
		::RPG::Client::MarbleBattleAffiliationType AffiliationType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLESHOWSPECIALKILLNOTIFY__CTOR_OFFSET))(this);
		}
	};
}
