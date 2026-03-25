#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17642310)
#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17642990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousEndGameRewardRow_TypeDefinitionIndex = 13659;

	class RogueNousEndGameRewardRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::UInt32 QuestID; // 0x18
		::System::UInt32 EndGameRewardID; // 0x1C
		::RPG::Client::TextID TabTitle; // 0x20
		::System::UInt32 UnlockID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueNousEndGameRewardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNousEndGameRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
