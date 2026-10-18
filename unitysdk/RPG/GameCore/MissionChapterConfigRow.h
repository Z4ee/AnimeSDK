#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MissionChapterType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MISSIONCHAPTERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D856120)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D856AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionChapterConfigRow_TypeDefinitionIndex = 14154;

	class MissionChapterConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* LinkChapterList; // 0x10
		::System::String* ChapterFigureIconPath; // 0x18
		::System::String* ChapterIconPath; // 0x20
		::RPG::Client::TextID ChapterDesc; // 0x28
		::System::UInt32 FinalMainMission; // 0x38
		::RPG::Client::TextID StageName; // 0x40
		::RPG::Client::TextID ChapterSequence; // 0x50
		::RPG::Client::TextID ChapterName; // 0x60
		::System::UInt32 ChapterDisplayPriority; // 0x70
		::RPG::GameCore::MissionChapterType ChapterType; // 0x74
		::System::UInt32 OriginMainMission; // 0x78
		::System::UInt32 ID; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionChapterConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionChapterConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
