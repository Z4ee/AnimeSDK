#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLECOLLEGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A3E4BB0)
#define RPG_GAMECORE_BATTLECOLLEGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3E50C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleCollegeConfigRow_TypeDefinitionIndex = 12353;

	class BattleCollegeConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TrialAvatarList; // 0x10
		::System::String* VideoCoverPath; // 0x18
		::Il2CppArray<::System::UInt32>* AimList; // 0x20
		::System::UInt32 TutorialTypeGroupID; // 0x28
		::System::UInt32 SortID; // 0x2C
		::System::UInt32 BattleAreaID; // 0x30
		::System::UInt32 VideoAssetID; // 0x34
		::RPG::Client::TextID StageIntroTitle; // 0x38
		::System::UInt32 RewardID; // 0x48
		::System::UInt32 TutorialID; // 0x4C
		::System::UInt32 PlaneID; // 0x50
		::System::UInt32 ID; // 0x54
		::System::UInt32 StageIntroDescIDList; // 0x58
		::System::UInt32 StageID; // 0x5C
		::System::UInt32 FloorID; // 0x60
		::System::UInt32 BattleAreaGroupID; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOLLEGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleCollegeConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleCollegeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOLLEGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
