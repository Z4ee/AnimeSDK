#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TEAMTOWERSAICONFIG_METHOD_2_009BFE7AE2857411_OFFSET UNITYSDK_OFFSET(0x1C146F20)
#define RPG_GAMECORE_TEAMTOWERSAICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1474F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersAIConfig_TypeDefinitionIndex = 18214;

	class TeamTowersAIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 RobotID; // 0x10
		::System::Int32 WeightHangOver; // 0x14
		::System::Int32 WeightCentroid; // 0x18
		::System::Int32 WeightHeight; // 0x1C
		::System::Int32 WeightLocalStable; // 0x20
		::System::Int32 WeightIvy; // 0x24
		::System::Int32 WeightStoneWidth; // 0x28
		::System::Int32 ScanIntervalMs; // 0x2C
		::System::Int32 ScanCount; // 0x30
		::System::Boolean IsSpeedUp; // 0x34
		::System::Int32 OpIntervalMs; // 0x38
		::System::Single BrickDownMaxSpeed; // 0x3C
		::System::String* PerformanceJsonPath; // 0x40
		::System::String* BehaviorJsonPath; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSAICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_009BFE7AE2857411(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamTowersAIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamTowersAIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSAICONFIG_METHOD_2_009BFE7AE2857411_OFFSET))(a1, a2);
		}
	};
}
