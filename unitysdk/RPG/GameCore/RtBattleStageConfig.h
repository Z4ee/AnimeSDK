#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleAreaReferenceInfo; }
namespace RPG::GameCore { class RtBattleBackgroundUnitInfo; }
namespace RPG::GameCore { class RtBattleStageBornPointInfo; }
namespace RPG::GameCore { class RtBattleStageCellConfig; }
namespace RPG::GameCore { class RtBattleStageUnitInfo; }
namespace RPG::GameCore { class RtBattleWaveMonsterInfo; }
namespace System { class String; }

#define RPG_GAMECORE_RTBATTLESTAGECONFIG_METHOD_2_537475945B486346_OFFSET UNITYSDK_OFFSET(0x18DC5E80)
#define RPG_GAMECORE_RTBATTLESTAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC63B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleStageConfig_TypeDefinitionIndex = 17155;

	class RtBattleStageConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PlaneID; // 0x10
		::System::UInt32 FloorID; // 0x14
		::RPG::GameCore::BattleAreaReferenceInfo* BattleAreaInfo; // 0x18
		::RPG::GameCore::IVec2 StageSize; // 0x20
		::RPG::GameCore::FixPoint GridRadius; // 0x28
		::RPG::GameCore::FixVec2 Offset; // 0x30
		::RPG::GameCore::FixPoint Rotation; // 0x40
		::Il2CppArray<::RPG::GameCore::RtBattleStageCellConfig*>* CellConfigList; // 0x48
		::System::String* LevelGraphPath; // 0x50
		::Il2CppArray<::RPG::GameCore::RtBattleStageBornPointInfo*>* BornPointList; // 0x58
		::Il2CppArray<::RPG::GameCore::RtBattleStageUnitInfo*>* StageUnitList; // 0x60
		::Il2CppArray<::RPG::GameCore::RtBattleBackgroundUnitInfo*>* BackgroundUnitList; // 0x68
		::Il2CppArray<::RPG::GameCore::RtBattleWaveMonsterInfo*>* WaveList; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESTAGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_537475945B486346(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleStageConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleStageConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESTAGECONFIG_METHOD_2_537475945B486346_OFFSET))(a1, a2);
		}
	};
}
