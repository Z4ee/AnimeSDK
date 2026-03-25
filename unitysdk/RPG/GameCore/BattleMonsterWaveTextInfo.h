#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedGameMode; }

#define RPG_GAMECORE_BATTLEMONSTERWAVETEXTINFO_GET_CURRENTWAVECOUNT_OFFSET UNITYSDK_OFFSET(0xA88CBE0)
#define RPG_GAMECORE_BATTLEMONSTERWAVETEXTINFO_GET_MAXWAVECOUNT_OFFSET UNITYSDK_OFFSET(0xA88CC40)
#define RPG_GAMECORE_BATTLEMONSTERWAVETEXTINFO_HASOVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0xA88CD60)
#define RPG_GAMECORE_BATTLEMONSTERWAVETEXTINFO_RESET_OFFSET UNITYSDK_OFFSET(0xA88CD10)
#define RPG_GAMECORE_BATTLEMONSTERWAVETEXTINFO_SETOVERRIDEWAVETEXTINFO_OFFSET UNITYSDK_OFFSET(0xA88CCA0)
#define RPG_GAMECORE_BATTLEMONSTERWAVETEXTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA88CBD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleMonsterWaveTextInfo_TypeDefinitionIndex = 45067;

	class BattleMonsterWaveTextInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedGameMode* _Mode; // 0x10
		::System::Nullable_1<::System::Int32> OverrideMaxWave; // 0x18
		::System::Nullable_1<::System::Int32> OverrideCurrentWave; // 0x20

		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* pMode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEMONSTERWAVETEXTINFO__CTOR_OFFSET))(this, pMode);
		}

		::System::Int32 get_CurrentWaveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEMONSTERWAVETEXTINFO_GET_CURRENTWAVECOUNT_OFFSET))(this);
		}

		::System::Int32 get_MaxWaveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEMONSTERWAVETEXTINFO_GET_MAXWAVECOUNT_OFFSET))(this);
		}

		::System::Void SetOverrideWaveTextInfo(::System::Int32 currentWave, ::System::Int32 maxWave)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEMONSTERWAVETEXTINFO_SETOVERRIDEWAVETEXTINFO_OFFSET))(this, currentWave, maxWave);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEMONSTERWAVETEXTINFO_RESET_OFFSET))(this);
		}

		::System::Boolean HasOverrideInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEMONSTERWAVETEXTINFO_HASOVERRIDEINFO_OFFSET))(this);
		}
	};
}
