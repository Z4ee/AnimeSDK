#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BadgeChallengeType.h"
#include "unitysdk/RPG/GameCore/BadgeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHALLENGEBADGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CF81400)
#define RPG_GAMECORE_CHALLENGEBADGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF818A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeBadgeConfigRow_TypeDefinitionIndex = 12850;

	class ChallengeBadgeConfigRow : public ::System::Object
	{
	public:
		::System::String* Prefab; // 0x10
		::System::String* IconFigurePath; // 0x18
		::System::String* IconItemPath; // 0x20
		::System::String* IconMiddlePath; // 0x28
		::System::UInt32 BadgeID; // 0x30
		::RPG::GameCore::BadgeType ChallengePeakLevel; // 0x34
		::System::UInt32 ChallengePeakGroupID; // 0x38
		::RPG::GameCore::BadgeChallengeType Type; // 0x3C
		::RPG::Client::TextID ComeFromText; // 0x40
		::System::UInt32 ComeFromGoto; // 0x50
		::RPG::Client::TextID Name; // 0x58
		::RPG::Client::TextID Desc; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBADGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChallengeBadgeConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengeBadgeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBADGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
