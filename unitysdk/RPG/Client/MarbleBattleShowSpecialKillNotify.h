#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MarbleBattleSpecialKillType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MARBLEBATTLESHOWSPECIALKILLNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x9B18A10)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBattleShowSpecialKillNotify_TypeDefinitionIndex = 53455;

	class MarbleBattleShowSpecialKillNotify : public ::System::Object
	{
	public:
		::RPG::Client::MarbleBattleSpecialKillType SpecialKillType; // 0x10
		::System::Boolean IsEnemy; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLESHOWSPECIALKILLNOTIFY__CTOR_OFFSET))(this);
		}
	};
}
