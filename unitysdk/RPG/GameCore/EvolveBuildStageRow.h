#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_942D40AEEDD1812F;
class Class_1_A88C3AAF0DD46F4C_2;
namespace System { class String; }

#define RPG_GAMECORE_EVOLVEBUILDSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D078C80)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D07AD00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildStageRow_TypeDefinitionIndex = 11394;

	class EvolveBuildStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* StagePeriod4; // 0x10
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_2*>* RecommendList; // 0x18
		::Il2CppArray<::System::UInt32>* FirstWinQuest; // 0x20
		::Il2CppArray<::System::UInt32>* TrialAvatar; // 0x28
		::Il2CppArray<::System::UInt32>* StagePeriod2; // 0x30
		::Il2CppArray<::System::UInt32>* GearRecommendList; // 0x38
		::System::String* TeamBonusIconPath; // 0x40
		::Il2CppArray<::System::UInt32>* StagePeriod3; // 0x48
		::Il2CppArray<::System::UInt32>* InitialWeapon; // 0x50
		::Il2CppArray<::System::UInt32>* StagePeriod1; // 0x58
		::Il2CppArray<::Class_1_942D40AEEDD1812F*>* RankList; // 0x60
		::System::UInt32 IntroID; // 0x68
		::RPG::Client::TextID TeamBonusShortDesc; // 0x70
		::RPG::Client::TextID PreName; // 0x80
		::System::UInt32 StageMergedID; // 0x90
		::System::UInt32 TeamBonusMazeBuffID; // 0x94
		::RPG::GameCore::EvolveBuildSeason Season; // 0x98
		::System::Int32 Difficulty; // 0x9C
		::RPG::Client::TextID Name; // 0xA0
		::RPG::Client::TextID BuffTextFormat; // 0xB0
		::RPG::Client::TextID Desc; // 0xC0
		::System::Boolean WeaponSelectable; // 0xD0
		::System::UInt32 UnlockQuest; // 0xD4
		::RPG::Client::TextID DevilDesc; // 0xD8

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
