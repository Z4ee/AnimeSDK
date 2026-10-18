#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BadgeLevel.h"
#include "unitysdk/RPG/GameCore/BadgePlayType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BADGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4387F0)
#define RPG_GAMECORE_BADGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D438B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BadgeConfigRow_TypeDefinitionIndex = 12828;

	class BadgeConfigRow : public ::System::Object
	{
	public:
		::System::String* IconMiddlePath; // 0x10
		::System::String* Prefab; // 0x18
		::System::UInt32 ItemID; // 0x20
		::System::UInt32 ComeFromGoto; // 0x24
		::RPG::Client::TextID ComeFromText; // 0x28
		::RPG::GameCore::BadgeLevel BadgeLevel; // 0x38
		::RPG::GameCore::BadgePlayType Type; // 0x3C
		::System::UInt32 Param; // 0x40
		::System::UInt32 BadgeID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BADGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BadgeConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BadgeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BADGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
