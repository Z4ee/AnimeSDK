#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_FIVEDIMPLAYERENTERLEAVEINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0xD095E30)
#define RPG_CLIENT_FIVEDIMPLAYERENTERLEAVEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD082420)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimPlayerEnterLeaveInfo_TypeDefinitionIndex = 60506;

	class FiveDimPlayerEnterLeaveInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Container; // 0x10
		::System::UInt32 ExitSourceEntityID; // 0x18
		::System::UInt32 EnterSourceEntityID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMPLAYERENTERLEAVEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMPLAYERENTERLEAVEINFO_CLEAR_OFFSET))(this);
		}
	};
}
