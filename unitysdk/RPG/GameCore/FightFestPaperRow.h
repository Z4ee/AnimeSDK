#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTPAPERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA7C610)
#define RPG_GAMECORE_FIGHTFESTPAPERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA7CC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestPaperRow_TypeDefinitionIndex = 12791;

	class FightFestPaperRow : public ::System::Object
	{
	public:
		::System::String* CollectionFgPath; // 0x10
		::System::String* InterviewFgPath; // 0x18
		::System::String* GameAdFigurePath; // 0x20
		::Il2CppArray<::System::String*>* MainFgPathList; // 0x28
		::System::String* InterviewBgPath; // 0x30
		::Il2CppArray<::System::String*>* MainBgPathList; // 0x38
		::System::String* CollectionBgPath; // 0x40
		::System::UInt32 PaperID; // 0x48
		::System::UInt32 UnlockSubMissionID; // 0x4C
		::RPG::Client::TextID IssueNumberText; // 0x50
		::RPG::Client::TextID MainPageTitle; // 0x60
		::RPG::Client::TextID MainPageDesc; // 0x70
		::RPG::Client::TextID IssueNumber; // 0x80
		::RPG::Client::TextID GameAdDesc; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTPAPERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FightFestPaperRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FightFestPaperRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTPAPERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
