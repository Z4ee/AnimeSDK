#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELMANUALLYCHECKLOSE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA98F9E0)
#define RPG_GAMECORE_LEVELMANUALLYCHECKLOSE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA98F990)
#define RPG_GAMECORE_LEVELMANUALLYCHECKLOSE_INIT_OFFSET UNITYSDK_OFFSET(0xA98F950)
#define RPG_GAMECORE_LEVELMANUALLYCHECKLOSE__CTOR_OFFSET UNITYSDK_OFFSET(0xA98FA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelManuallyCheckLose_TypeDefinitionIndex = 45728;

	class LevelManuallyCheckLose : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMANUALLYCHECKLOSE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelManuallyCheckLose* Init()
		{
			return ((::RPG::GameCore::LevelManuallyCheckLose*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMANUALLYCHECKLOSE_INIT_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMANUALLYCHECKLOSE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMANUALLYCHECKLOSE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
