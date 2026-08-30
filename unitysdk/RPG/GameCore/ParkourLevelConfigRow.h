#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ParkourLevelUnlockType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PARKOURLEVELCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D414960)
#define RPG_GAMECORE_PARKOURLEVELCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D414FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourLevelConfigRow_TypeDefinitionIndex = 12016;

	class ParkourLevelConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BGMIDList; // 0x10
		::System::String* TriggerCarTaskUnlock; // 0x18
		::System::String* GameAssetPath; // 0x20
		::System::String* MinimapResPath; // 0x28
		::System::String* GameAssetPathOnClear; // 0x30
		::System::Single MinimapAngle; // 0x38
		::System::Single LevelRegionState; // 0x3C
		::System::UInt32 UnlockParam; // 0x40
		::System::UInt32 LapCount; // 0x44
		::RPG::Client::TextID FinishDisplay; // 0x48
		::System::UInt32 RailBallLimit; // 0x58
		::System::Boolean StoryLevel; // 0x5C
		::System::UInt32 ID; // 0x60
		::System::UInt32 TargetRank; // 0x64
		::RPG::Client::TextID Desc; // 0x68
		::RPG::Client::TextID Name; // 0x78
		::System::UInt32 NextStorySubMissionID; // 0x88
		::RPG::GameCore::ParkourLevelUnlockType UnlockType; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURLEVELCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParkourLevelConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParkourLevelConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURLEVELCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
