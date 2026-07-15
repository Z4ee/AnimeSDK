#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEGAMESCENECONFIG_METHOD_2_2D2DAD87552E8596_OFFSET UNITYSDK_OFFSET(0x1B2D1AB0)
#define RPG_GAMECORE_CAKERACEGAMESCENECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2D20C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceGameSceneConfig_TypeDefinitionIndex = 17666;

	class CakeRaceGameSceneConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 CellUnitHeightMm; // 0x10
		::System::UInt32 CellUnitSizeMm; // 0x14
		::System::UInt32 RegionXSize; // 0x18
		::System::UInt32 StartRegionID; // 0x1C
		::System::UInt32 EndRegionID; // 0x20
		::System::UInt32 CatBornZ; // 0x24
		::System::UInt32 CellDropRange; // 0x28
		::System::UInt32 CellDropTransferAddZ; // 0x2C
		::System::UInt32 CellDropInterval; // 0x30
		::System::UInt32 CellDropMaxDuration; // 0x34
		::System::Int32 GravityAcce; // 0x38
		::System::UInt32 SystemMaxSpeed; // 0x3C
		::System::UInt32 PredicateFrameCount; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEGAMESCENECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2D2DAD87552E8596(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceGameSceneConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceGameSceneConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEGAMESCENECONFIG_METHOD_2_2D2DAD87552E8596_OFFSET))(a1, a2);
		}
	};
}
