#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/IdleLiveGiftEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class GiftSenderUiData; }
namespace RPG::GameCore { class IdleLiveGiftRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C0F3E30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0F4670)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA__INITGIFTCONTENT_OFFSET UNITYSDK_OFFSET(0x1C0F4680)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA__INITSENDERICON_OFFSET UNITYSDK_OFFSET(0x1C0F4850)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGiftUiData_TypeDefinitionIndex = 75125;

	class IdleLiveGiftUiData : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::System::String* SenderIcon; // 0x18
		::System::String* AbilityName; // 0x20
		::RPG::Client::ActivityIdleLive::GiftSenderUiData* SenderUiData; // 0x28
		::RPG::GameCore::IdleLiveGiftEffectType EffectType; // 0x30
		::System::Single ProtectTime; // 0x34
		::System::UInt32 ItemId; // 0x38
		::System::UInt32 GiftId; // 0x3C
		::RPG::Client::TextID Content; // 0x40
		::System::Boolean HasAbility; // 0x50
		::System::UInt32 Count; // 0x54
		::System::Single FlySpeed; // 0x58
		::System::UInt32 Rarity; // 0x5C

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
