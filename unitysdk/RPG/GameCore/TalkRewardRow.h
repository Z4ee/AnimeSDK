#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TALKREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x177A8C00)
#define RPG_GAMECORE_TALKREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x177A8F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkRewardRow_TypeDefinitionIndex = 13937;

	class TalkRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 RewardID; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 VerificationID; // 0x1C
		::System::UInt32 PropConfigID; // 0x20
		::System::UInt32 FloorID; // 0x24
		::System::UInt32 NPCConfigID; // 0x28
		::System::UInt32 PlaneID; // 0x2C
		::System::Boolean IsMove; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TalkRewardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TalkRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKREWARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
