#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ParkourLevelUnlockType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PARKOURLEVELCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BB0EA40)
#define RPG_GAMECORE_PARKOURLEVELCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0F0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourLevelConfigRow_TypeDefinitionIndex = 11627;

	class ParkourLevelConfigRow : public ::System::Object
	{
	public:
		::System::String* MinimapResPath; // 0x10
		::System::String* GameAssetPathOnClear; // 0x18
		::Il2CppArray<::System::UInt32>* BGMIDList; // 0x20
		::System::String* TriggerCarTaskUnlock; // 0x28
		::System::String* GameAssetPath; // 0x30
		::System::Single MinimapAngle; // 0x38
		::System::Single LevelRegionState; // 0x3C
		::System::UInt32 NextStorySubMissionID; // 0x40
		::System::UInt32 RailBallLimit; // 0x44
		::System::UInt32 UnlockParam; // 0x48
		::System::UInt32 ID; // 0x4C
		::System::UInt32 TargetRank; // 0x50
		::System::UInt32 LapCount; // 0x54
		::RPG::Client::TextID FinishDisplay; // 0x58
		::RPG::Client::TextID Desc; // 0x68
		::System::Boolean StoryLevel; // 0x78
		::RPG::GameCore::ParkourLevelUnlockType UnlockType; // 0x7C
		::RPG::Client::TextID Name; // 0x80

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
