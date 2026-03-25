#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PunkLordGroupType.h"
#include "unitysdk/RPG/GameCore/PunkLordMonsterRare.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYPUNKLORDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F062E0)
#define RPG_GAMECORE_ACTIVITYPUNKLORDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F06850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPunkLordConfigRow_TypeDefinitionIndex = 11217;

	class ActivityPunkLordConfigRow : public ::System::Object
	{
	public:
		::System::String* ManikinConfig; // 0x10
		::System::String* MonsterPic; // 0x18
		::System::String* ShowMonster; // 0x20
		::RPG::GameCore::PunkLordGroupType GroupType; // 0x28
		::System::UInt32 WorldLevel; // 0x2C
		::RPG::Client::TextID MonsterBuff; // 0x30
		::System::UInt32 MonsterHP; // 0x40
		::System::UInt32 RaidID; // 0x44
		::System::UInt32 TurnLimit; // 0x48
		::System::UInt32 KillPoint; // 0x4C
		::System::UInt32 MonsterLevel; // 0x50
		::System::UInt32 PluralHP; // 0x54
		::System::UInt32 ExistTime; // 0x58
		::System::UInt32 SummonPoint; // 0x5C
		::System::UInt32 ID; // 0x60
		::RPG::GameCore::PunkLordMonsterRare MonsterRare; // 0x64
		::System::UInt32 AssistPoint; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityPunkLordConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityPunkLordConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
