#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HARDLEVELGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189EA040)
#define RPG_GAMECORE_HARDLEVELGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189EA9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HardLevelGroupRow_TypeDefinitionIndex = 13439;

	class HardLevelGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* CombatPowerList; // 0x10
		::RPG::GameCore::FixPoint StatusProbability; // 0x18
		::RPG::GameCore::FixPoint DefenceRatio; // 0x20
		::RPG::GameCore::FixPoint AttackRatio; // 0x28
		::RPG::GameCore::FixPoint HPRatio; // 0x30
		::RPG::GameCore::FixPoint StanceRatio; // 0x38
		::System::UInt32 Level; // 0x40
		::System::UInt32 HardLevelGroup; // 0x44
		::RPG::GameCore::FixPoint StatusResistance; // 0x48
		::RPG::GameCore::FixPoint SpeedRatio; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::HardLevelGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HardLevelGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
