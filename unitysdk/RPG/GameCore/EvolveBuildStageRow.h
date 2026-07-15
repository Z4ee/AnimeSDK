#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_942D40AEEDD1812F;
class Class_1_A88C3AAF0DD46F4C_2;
namespace System { class String; }

#define RPG_GAMECORE_EVOLVEBUILDSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C063810)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0658D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildStageRow_TypeDefinitionIndex = 11019;

	class EvolveBuildStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* GearRecommendList; // 0x10
		::Il2CppArray<::System::UInt32>* TrialAvatar; // 0x18
		::Il2CppArray<::System::UInt32>* StagePeriod4; // 0x20
		::Il2CppArray<::System::UInt32>* StagePeriod1; // 0x28
		::Il2CppArray<::System::UInt32>* StagePeriod3; // 0x30
		::System::String* TeamBonusIconPath; // 0x38
		::Il2CppArray<::Class_1_942D40AEEDD1812F*>* RankList; // 0x40
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_2*>* RecommendList; // 0x48
		::Il2CppArray<::System::UInt32>* InitialWeapon; // 0x50
		::Il2CppArray<::System::UInt32>* StagePeriod2; // 0x58
		::Il2CppArray<::System::UInt32>* FirstWinQuest; // 0x60
		::RPG::GameCore::EvolveBuildSeason Season; // 0x68
		::RPG::Client::TextID PreName; // 0x70
		::RPG::Client::TextID Name; // 0x80
		::System::UInt32 TeamBonusMazeBuffID; // 0x90
		::System::Int32 Difficulty; // 0x94
		::System::Boolean WeaponSelectable; // 0x98
		::System::UInt32 StageMergedID; // 0x9C
		::RPG::Client::TextID Desc; // 0xA0
		::RPG::Client::TextID BuffTextFormat; // 0xB0
		::RPG::Client::TextID DevilDesc; // 0xC0
		::RPG::Client::TextID TeamBonusShortDesc; // 0xD0
		::System::UInt32 UnlockQuest; // 0xE0
		::System::UInt32 IntroID; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EvolveBuildStageRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EvolveBuildStageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
