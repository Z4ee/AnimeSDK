#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MONSTERAVATARGROWUPBEFOREDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0xD8BA560)
#define RPG_CLIENT_MONSTERAVATARGROWUPBEFOREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD8BA5E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterAvatarGrowUpBeforeData_TypeDefinitionIndex = 62305;

	class MonsterAvatarGrowUpBeforeData : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint HpMaxBefore; // 0x10
		::RPG::GameCore::FixPoint AttackBefore; // 0x18
		::System::UInt32 ExpBefore; // 0x20
		::System::UInt32 PromotionBefore; // 0x24
		::RPG::GameCore::FixPoint DefenseBefore; // 0x28
		::RPG::GameCore::FixPoint SpeedBefore; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERAVATARGROWUPBEFOREDATA__CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::RPG::Client::MonsterAvatarGrowUpBeforeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterAvatarGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERAVATARGROWUPBEFOREDATA_COPYTO_OFFSET))(this, a1);
		}
	};
}
