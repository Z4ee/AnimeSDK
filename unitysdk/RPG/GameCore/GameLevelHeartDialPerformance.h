#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GAMELEVELHEARTDIALPERFORMANCE_METHOD_2_B71925988E489AC3_OFFSET UNITYSDK_OFFSET(0x18953890)
#define RPG_GAMECORE_GAMELEVELHEARTDIALPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x18953AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameLevelHeartDialPerformance_TypeDefinitionIndex = 16527;

	class GameLevelHeartDialPerformance : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x10
		::System::UInt32 PerformanceID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELHEARTDIALPERFORMANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B71925988E489AC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameLevelHeartDialPerformance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameLevelHeartDialPerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELHEARTDIALPERFORMANCE_METHOD_2_B71925988E489AC3_OFFSET))(a1, a2);
		}
	};
}
