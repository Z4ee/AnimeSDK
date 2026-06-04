#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCENTRANCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B30DF0)
#define RPG_GAMECORE_ROGUEDLCENTRANCEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19B315A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCEntranceRow_TypeDefinitionIndex = 14070;

	class RogueDLCEntranceRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RewardList; // 0x10
		::System::String* SwitchBannerImgPath; // 0x18
		::System::String* PatternBgPath; // 0x20
		::System::String* ButtonPath; // 0x28
		::RPG::Client::TextID SubTypeTitle; // 0x30
		::System::UInt32 ID; // 0x40
		::RPG::GameCore::RogueSubMode SubType; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCENTRANCEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLCEntranceRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCEntranceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCENTRANCEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
