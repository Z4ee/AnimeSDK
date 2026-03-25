#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_AVATARGROWUPBEFOREDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0x913FC20)
#define RPG_CLIENT_AVATARGROWUPBEFOREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x913FCA0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarGrowUpBeforeData_TypeDefinitionIndex = 50752;

	class AvatarGrowUpBeforeData : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint HpMaxBefore; // 0x10
		::RPG::GameCore::FixPoint SpeedBefore; // 0x18
		::RPG::GameCore::FixPoint AttackBefore; // 0x20
		::System::UInt32 MaxLevelBefore; // 0x28
		::System::UInt32 LevelBefore; // 0x2C
		::RPG::GameCore::FixPoint DefenseBefore; // 0x30
		::System::UInt32 ExpBefore; // 0x38
		::System::UInt32 PropomtionBefore; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWUPBEFOREDATA__CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::RPG::Client::AvatarGrowUpBeforeData* beforeData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWUPBEFOREDATA_COPYTO_OFFSET))(this, beforeData);
		}
	};
}
