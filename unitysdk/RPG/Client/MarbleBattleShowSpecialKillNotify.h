#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MarbleBattleSpecialKillType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MARBLEBATTLESHOWSPECIALKILLNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0xBEFA9C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBattleShowSpecialKillNotify_TypeDefinitionIndex = 61533;

	class MarbleBattleShowSpecialKillNotify : public ::System::Object
	{
	public:
		::System::Boolean IsEnemy; // 0x10
		::RPG::Client::MarbleBattleSpecialKillType SpecialKillType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLESHOWSPECIALKILLNOTIFY__CTOR_OFFSET))(this);
		}
	};
}
