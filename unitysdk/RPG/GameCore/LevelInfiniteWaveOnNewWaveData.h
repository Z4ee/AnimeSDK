#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELINFINITEWAVEONNEWWAVEDATA_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6DC850)
#define RPG_GAMECORE_LEVELINFINITEWAVEONNEWWAVEDATA_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6DC8A0)
#define RPG_GAMECORE_LEVELINFINITEWAVEONNEWWAVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB6DC8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelInfiniteWaveOnNewWaveData_TypeDefinitionIndex = 52279;

	class LevelInfiniteWaveOnNewWaveData : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEWAVEONNEWWAVEDATA__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEWAVEONNEWWAVEDATA_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEWAVEONNEWWAVEDATA_GETSOURCERUNTIMEID_OFFSET))(this);
		}
	};
}
