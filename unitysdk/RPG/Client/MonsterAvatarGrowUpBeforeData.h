#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MONSTERAVATARGROWUPBEFOREDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0x9D83A20)
#define RPG_CLIENT_MONSTERAVATARGROWUPBEFOREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D83AA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterAvatarGrowUpBeforeData_TypeDefinitionIndex = 50529;

	class MonsterAvatarGrowUpBeforeData : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint HpMaxBefore; // 0x10
		::System::UInt32 ExpBefore; // 0x18
		::System::UInt32 PromotionBefore; // 0x1C
		::RPG::GameCore::FixPoint DefenseBefore; // 0x20
		::RPG::GameCore::FixPoint SpeedBefore; // 0x28
		::RPG::GameCore::FixPoint AttackBefore; // 0x30

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
