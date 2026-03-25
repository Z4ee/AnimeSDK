#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTSTAGEINFOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17284C10)
#define RPG_GAMECORE_GRIDFIGHTSTAGEINFOCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172852B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightStageInfoConfigRow_TypeDefinitionIndex = 10806;

	class GridFightStageInfoConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CardStolenList; // 0x10
		::Il2CppArray<::System::UInt32>* ThresholdBonusList; // 0x18
		::Il2CppArray<::System::UInt32>* VictoryBonusList; // 0x20
		::RPG::GameCore::FixPoint AvatarReviveDelayLose; // 0x28
		::RPG::Client::TextID StageDescription; // 0x30
		::System::UInt32 EliteProgressValue; // 0x40
		::System::UInt32 EliteGlobalHPLose; // 0x44
		::System::UInt32 BossProgressValue; // 0x48
		::System::UInt32 StageRuleID; // 0x4C
		::System::UInt32 ThresholdPassBasicGlobalHPLose; // 0x50
		::System::UInt32 WaveIndex; // 0x54
		::System::UInt32 StageID; // 0x58
		::RPG::GameCore::FixPoint TotalTurn; // 0x60
		::System::UInt32 ThresholdFailGlobalHPLose; // 0x68
		::System::UInt32 MinionProgressValue; // 0x6C
		::RPG::GameCore::FixPoint ThresholdPosition; // 0x70
		::System::UInt32 BossGlobalHPLose; // 0x78
		::System::UInt32 MinionGlobalHPLose; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGEINFOCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightStageInfoConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightStageInfoConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGEINFOCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
