#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/IdleLiveGiftSourceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEGIFTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1A0550)
#define RPG_GAMECORE_IDLELIVEGIFTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A0A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveGiftRow_TypeDefinitionIndex = 11778;

	class IdleLiveGiftRow : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::RPG::Client::TextID MainText; // 0x18
		::System::UInt32 DonateValue; // 0x28
		::System::UInt32 UnlockID; // 0x2C
		::System::UInt32 RewardID; // 0x30
		::System::UInt32 SourceID; // 0x34
		::System::UInt32 TriggerID; // 0x38
		::System::UInt32 ID; // 0x3C
		::System::Single ProtectTime; // 0x40
		::System::Single FlySpeed; // 0x44
		::System::UInt32 Count; // 0x48
		::System::UInt32 RarityType; // 0x4C
		::RPG::GameCore::IdleLiveGiftSourceType SourceType; // 0x50
		::System::UInt32 FinalActChapterIndex; // 0x54
		::System::UInt32 SenderID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEGIFTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveGiftRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveGiftRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEGIFTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
