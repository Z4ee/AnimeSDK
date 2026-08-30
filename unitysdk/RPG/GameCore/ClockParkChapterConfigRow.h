#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ClockParkChapterType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D997320)
#define RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D997BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkChapterConfigRow_TypeDefinitionIndex = 11149;

	class ClockParkChapterConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChapterRoundIDList; // 0x10
		::Il2CppArray<::System::UInt32>* ChapterGamePlayRoundRandomList; // 0x18
		::Il2CppArray<::System::UInt32>* NextChapterID; // 0x20
		::Il2CppArray<::System::UInt32>* ChapterStoryIDList; // 0x28
		::Il2CppArray<::System::UInt32>* CheckPointList; // 0x30
		::System::UInt32 ChapterID; // 0x38
		::System::UInt32 SuccessToRoundID; // 0x3C
		::System::UInt32 RewardProgress; // 0x40
		::System::UInt32 ChapterAutoUnlock; // 0x44
		::RPG::GameCore::ClockParkChapterType ChapterType; // 0x48
		::System::UInt32 RewardID; // 0x4C
		::RPG::Client::TextID ChapterTitle; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkChapterConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkChapterConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
