#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTPAPERINTERVIEWROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E0D5FF0)
#define RPG_GAMECORE_FIGHTFESTPAPERINTERVIEWROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D63C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestPaperInterviewRow_TypeDefinitionIndex = 13184;

	class FightFestPaperInterviewRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::UInt32 TextJoinItemID; // 0x28
		::System::UInt32 SortWeight; // 0x2C
		::System::UInt32 PaperID; // 0x30
		::RPG::Client::TextID Detail; // 0x38
		::RPG::Client::TextID Comment; // 0x48
		::RPG::Client::TextID Info; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTPAPERINTERVIEWROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FightFestPaperInterviewRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FightFestPaperInterviewRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTPAPERINTERVIEWROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
