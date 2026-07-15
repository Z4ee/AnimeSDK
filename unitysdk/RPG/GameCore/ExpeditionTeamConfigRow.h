#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXPEDITIONTEAMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C06E060)
#define RPG_GAMECORE_EXPEDITIONTEAMCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C06E180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionTeamConfigRow_TypeDefinitionIndex = 12758;

	class ExpeditionTeamConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 TeamID; // 0x10
		::System::UInt32 UnlockMission; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONTEAMCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionTeamConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionTeamConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONTEAMCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
