#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELINFINITEWAVEONNEWWAVEDATA_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BE00A30)
#define RPG_GAMECORE_LEVELINFINITEWAVEONNEWWAVEDATA_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1BE00A80)
#define RPG_GAMECORE_LEVELINFINITEWAVEONNEWWAVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE00AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelInfiniteWaveOnNewWaveData_TypeDefinitionIndex = 54189;

	class LevelInfiniteWaveOnNewWaveData : public ::Class_1_BF7A075734D15E98
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
