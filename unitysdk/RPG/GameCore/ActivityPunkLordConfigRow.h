#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PunkLordGroupType.h"
#include "unitysdk/RPG/GameCore/PunkLordMonsterRare.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYPUNKLORDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CA11860)
#define RPG_GAMECORE_ACTIVITYPUNKLORDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA11DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPunkLordConfigRow_TypeDefinitionIndex = 12208;

	class ActivityPunkLordConfigRow : public ::System::Object
	{
	public:
		::System::String* MonsterPic; // 0x10
		::System::String* ShowMonster; // 0x18
		::System::String* ManikinConfig; // 0x20
		::System::UInt32 MonsterLevel; // 0x28
		::System::UInt32 TurnLimit; // 0x2C
		::System::UInt32 WorldLevel; // 0x30
		::System::UInt32 ExistTime; // 0x34
		::System::UInt32 KillPoint; // 0x38
		::RPG::GameCore::PunkLordGroupType GroupType; // 0x3C
		::RPG::GameCore::PunkLordMonsterRare MonsterRare; // 0x40
		::System::UInt32 RaidID; // 0x44
		::RPG::Client::TextID MonsterBuff; // 0x48
		::System::UInt32 AssistPoint; // 0x58
		::System::UInt32 PluralHP; // 0x5C
		::System::UInt32 MonsterHP; // 0x60
		::System::UInt32 ID; // 0x64
		::System::UInt32 SummonPoint; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityPunkLordConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityPunkLordConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
