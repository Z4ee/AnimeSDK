#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleAreaReferenceInfo; }
namespace RPG::GameCore { class RtDefenceStageBornPointInfo; }
namespace RPG::GameCore { class RtDefenceStageUnitInfo; }
namespace RPG::GameCore { class RtDefenceWaveMonsterInfo; }
namespace System { class String; }

#define RPG_GAMECORE_RTDEFENCESTAGECONFIG_METHOD_2_C9A1D20756EE6FE1_OFFSET UNITYSDK_OFFSET(0x1D4A8670)
#define RPG_GAMECORE_RTDEFENCESTAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A8AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDefenceStageConfig_TypeDefinitionIndex = 17858;

	class RtDefenceStageConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PlaneID; // 0x10
		::System::UInt32 FloorID; // 0x14
		::RPG::GameCore::BattleAreaReferenceInfo* BattleAreaInfo; // 0x18
		::RPG::GameCore::FixVec2 Offset; // 0x20
		::RPG::GameCore::FixPoint Rotation; // 0x30
		::RPG::GameCore::FixVec3 CameraAnchorOffset; // 0x38
		::System::String* LevelGraphPath; // 0x50
		::Il2CppArray<::RPG::GameCore::RtDefenceStageBornPointInfo*>* BornPointList; // 0x58
		::Il2CppArray<::RPG::GameCore::RtDefenceStageUnitInfo*>* StageUnitList; // 0x60
		::Il2CppArray<::RPG::GameCore::RtDefenceWaveMonsterInfo*>* WaveList; // 0x68
		::Il2CppArray<::System::UInt32>* SummonAvatarPool; // 0x70
		::Il2CppArray<::System::UInt32>* UpgradeGEPool; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCESTAGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C9A1D20756EE6FE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtDefenceStageConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtDefenceStageConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCESTAGECONFIG_METHOD_2_C9A1D20756EE6FE1_OFFSET))(a1, a2);
		}
	};
}
