#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYAVATARDELIVERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18603990)
#define RPG_GAMECORE_ACTIVITYAVATARDELIVERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18603C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityAvatarDeliverRow_TypeDefinitionIndex = 10495;

	class ActivityAvatarDeliverRow : public ::System::Object
	{
	public:
		::System::UInt32 AvatarID; // 0x10
		::System::Single Sort; // 0x14
		::RPG::Client::TextID MailDesc; // 0x18
		::RPG::Client::TextID Name; // 0x28
		::RPG::Client::TextID Sign; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYAVATARDELIVERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityAvatarDeliverRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityAvatarDeliverRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYAVATARDELIVERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
