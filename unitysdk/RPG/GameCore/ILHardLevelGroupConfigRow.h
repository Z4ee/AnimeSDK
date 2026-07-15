#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ILHARDLEVELGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B691A10)
#define RPG_GAMECORE_ILHARDLEVELGROUPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B691CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILHardLevelGroupConfigRow_TypeDefinitionIndex = 13301;

	class ILHardLevelGroupConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint AttackRatio; // 0x10
		::RPG::GameCore::FixPoint DefenceRatio; // 0x18
		::System::UInt32 HardLevelGroup; // 0x20
		::System::UInt32 Level; // 0x24
		::RPG::GameCore::FixPoint HPRatio; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILHARDLEVELGROUPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ILHardLevelGroupConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ILHardLevelGroupConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILHARDLEVELGROUPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
