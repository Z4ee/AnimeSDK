#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVESUPERCHATROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B0088A0)
#define RPG_GAMECORE_IDLELIVESUPERCHATROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B008B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveSuperChatRow_TypeDefinitionIndex = 11386;

	class IdleLiveSuperChatRow : public ::System::Object
	{
	public:
		::System::UInt32 UnlockID; // 0x10
		::System::UInt32 RewardID; // 0x14
		::System::UInt32 ScSenderID; // 0x18
		::System::UInt32 TriggerID; // 0x1C
		::System::Single Duration; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::Client::TextID MainText; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESUPERCHATROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveSuperChatRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveSuperChatRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESUPERCHATROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
