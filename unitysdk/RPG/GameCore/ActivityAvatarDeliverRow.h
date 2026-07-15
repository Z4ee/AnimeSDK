#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYAVATARDELIVERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AADD050)
#define RPG_GAMECORE_ACTIVITYAVATARDELIVERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AADD340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityAvatarDeliverRow_TypeDefinitionIndex = 10585;

	class ActivityAvatarDeliverRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Sign; // 0x10
		::RPG::Client::TextID Name; // 0x20
		::RPG::Client::TextID MailDesc; // 0x30
		::System::UInt32 AvatarID; // 0x40
		::System::Single Sort; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYAVATARDELIVERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityAvatarDeliverRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityAvatarDeliverRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYAVATARDELIVERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
