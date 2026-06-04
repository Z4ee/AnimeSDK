#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/IdleLiveGiftEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class GiftSenderUiData; }
namespace RPG::GameCore { class IdleLiveGiftRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB14DAC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB14E270)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA__INITGIFTCONTENT_OFFSET UNITYSDK_OFFSET(0xB14E280)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA__INITSENDERICON_OFFSET UNITYSDK_OFFSET(0xB14E3E0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGiftUiData_TypeDefinitionIndex = 70296;

	class IdleLiveGiftUiData : public ::System::Object
	{
	public:
		::System::String* SenderIcon; // 0x10
		::RPG::Client::ActivityIdleLive::GiftSenderUiData* SenderUiData; // 0x18
		::System::String* AbilityName; // 0x20
		::System::String* Icon; // 0x28
		::System::UInt32 Rarity; // 0x30
		::RPG::GameCore::IdleLiveGiftEffectType EffectType; // 0x34
		::System::UInt32 Count; // 0x38
		::System::Single ProtectTime; // 0x3C
		::System::Single FlySpeed; // 0x40
		::System::UInt32 ItemId; // 0x44
		::System::UInt32 GiftId; // 0x48
		::System::Boolean HasAbility; // 0x4C
		::RPG::Client::TextID Content; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveGiftUiData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGiftUiData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA_CREATE_OFFSET))(a1);
		}

		::System::Void _InitGiftContent(::RPG::GameCore::IdleLiveGiftRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveGiftRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA__INITGIFTCONTENT_OFFSET))(this, a1);
		}

		::System::Void _InitSenderIcon(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA__INITSENDERICON_OFFSET))(this, a1);
		}
	};
}
