#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_AVATARGROWUPBEFOREDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0x1813E7D0)
#define RPG_CLIENT_AVATARGROWUPBEFOREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1813E860)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarGrowUpBeforeData_TypeDefinitionIndex = 59702;

	class AvatarGrowUpBeforeData : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint AttackBefore; // 0x10
		::RPG::GameCore::FixPoint SpeedBefore; // 0x18
		::System::UInt32 ExpBefore; // 0x20
		::System::UInt32 PromotionBefore; // 0x24
		::RPG::GameCore::FixPoint DefenseBefore; // 0x28
		::System::UInt32 LevelBefore; // 0x30
		::System::UInt32 MaxLevelBefore; // 0x34
		::RPG::GameCore::FixPoint HpMaxBefore; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWUPBEFOREDATA__CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::RPG::Client::AvatarGrowUpBeforeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWUPBEFOREDATA_COPYTO_OFFSET))(this, a1);
		}
	};
}
