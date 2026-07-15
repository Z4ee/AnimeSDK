#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedGameMode; }

#define RPG_GAMECORE_BATTLEMONSTERWAVETEXTINFO_GET_CURRENTWAVECOUNT_OFFSET UNITYSDK_OFFSET(0x12172620)
#define RPG_GAMECORE_BATTLEMONSTERWAVETEXTINFO_GET_MAXWAVECOUNT_OFFSET UNITYSDK_OFFSET(0x121726D0)
#define RPG_GAMECORE_BATTLEMONSTERWAVETEXTINFO_HASOVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0x12172840)
#define RPG_GAMECORE_BATTLEMONSTERWAVETEXTINFO_RESET_OFFSET UNITYSDK_OFFSET(0x121727F0)
#define RPG_GAMECORE_BATTLEMONSTERWAVETEXTINFO_SETOVERRIDEWAVETEXTINFO_OFFSET UNITYSDK_OFFSET(0x12172780)
#define RPG_GAMECORE_BATTLEMONSTERWAVETEXTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x12172610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleMonsterWaveTextInfo_TypeDefinitionIndex = 53694;

	class BattleMonsterWaveTextInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedGameMode* _Mode; // 0x10
		::System::Nullable_1<::System::Int32> OverrideMaxWave; // 0x18
		::System::Nullable_1<::System::Int32> OverrideCurrentWave; // 0x20

		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEMONSTERWAVETEXTINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentWaveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEMONSTERWAVETEXTINFO_GET_CURRENTWAVECOUNT_OFFSET))(this);
		}

		::System::Int32 get_MaxWaveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEMONSTERWAVETEXTINFO_GET_MAXWAVECOUNT_OFFSET))(this);
		}

		::System::Void SetOverrideWaveTextInfo(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEMONSTERWAVETEXTINFO_SETOVERRIDEWAVETEXTINFO_OFFSET))(this, a1, a2);
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
