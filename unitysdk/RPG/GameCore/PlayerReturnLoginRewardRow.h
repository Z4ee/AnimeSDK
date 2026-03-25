#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLAYERRETURNLOGINREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174E8FD0)
#define RPG_GAMECORE_PLAYERRETURNLOGINREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x174E9180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerReturnLoginRewardRow_TypeDefinitionIndex = 13272;

	class PlayerReturnLoginRewardRow : public ::System::Object
	{
	public:
		::System::String* FirstWordText; // 0x10
		::System::UInt32 OptionalGiftItem; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::UInt32 LoginReward; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNLOGINREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlayerReturnLoginRewardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerReturnLoginRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNLOGINREWARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
