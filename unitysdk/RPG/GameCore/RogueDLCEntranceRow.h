#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCENTRANCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175FEC00)
#define RPG_GAMECORE_ROGUEDLCENTRANCEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x175FF390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCEntranceRow_TypeDefinitionIndex = 13533;

	class RogueDLCEntranceRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RewardList; // 0x10
		::System::String* PatternBgPath; // 0x18
		::System::String* ButtonPath; // 0x20
		::System::String* SwitchBannerImgPath; // 0x28
		::RPG::Client::TextID SubTypeTitle; // 0x30
		::RPG::GameCore::RogueSubMode SubType; // 0x40
		::System::UInt32 ID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCENTRANCEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueDLCEntranceRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCEntranceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCENTRANCEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
