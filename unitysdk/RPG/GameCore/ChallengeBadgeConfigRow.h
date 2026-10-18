#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BadgeChallengeType.h"
#include "unitysdk/RPG/GameCore/BadgeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHALLENGEBADGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D55B280)
#define RPG_GAMECORE_CHALLENGEBADGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D55B750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeBadgeConfigRow_TypeDefinitionIndex = 12956;

	class ChallengeBadgeConfigRow : public ::System::Object
	{
	public:
		::System::String* IconItemPath; // 0x10
		::System::String* IconFigurePath; // 0x18
		::System::String* Prefab; // 0x20
		::System::String* IconMiddlePath; // 0x28
		::RPG::GameCore::BadgeChallengeType Type; // 0x30
		::System::UInt32 BadgeID; // 0x34
		::RPG::Client::TextID Desc; // 0x38
		::RPG::Client::TextID Name; // 0x48
		::System::UInt32 ChallengePeakGroupID; // 0x58
		::System::UInt32 ComeFromGoto; // 0x5C
		::RPG::GameCore::BadgeType ChallengePeakLevel; // 0x60
		::RPG::Client::TextID ComeFromText; // 0x68

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
