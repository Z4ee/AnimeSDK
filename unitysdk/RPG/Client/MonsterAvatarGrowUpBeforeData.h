#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MONSTERAVATARGROWUPBEFOREDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0xAAC8BF0)
#define RPG_CLIENT_MONSTERAVATARGROWUPBEFOREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAAC8C70)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterAvatarGrowUpBeforeData_TypeDefinitionIndex = 57392;

	class MonsterAvatarGrowUpBeforeData : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint HpMaxBefore; // 0x10
		::RPG::GameCore::FixPoint SpeedBefore; // 0x18
		::RPG::GameCore::FixPoint AttackBefore; // 0x20
		::RPG::GameCore::FixPoint DefenseBefore; // 0x28
		::System::UInt32 ExpBefore; // 0x30
		::System::UInt32 PromotionBefore; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERAVATARGROWUPBEFOREDATA__CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::RPG::Client::MonsterAvatarGrowUpBeforeData* beforeData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterAvatarGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERAVATARGROWUPBEFOREDATA_COPYTO_OFFSET))(this, beforeData);
		}
	};
}
