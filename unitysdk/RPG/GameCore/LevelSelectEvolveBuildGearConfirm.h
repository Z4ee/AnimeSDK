#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARCONFIRM_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6DF360)
#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARCONFIRM_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6DF310)
#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARCONFIRM_INIT_OFFSET UNITYSDK_OFFSET(0xB6DF2C0)
#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARCONFIRM__CTOR_OFFSET UNITYSDK_OFFSET(0xB6DF3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelSelectEvolveBuildGearConfirm_TypeDefinitionIndex = 52369;

	class LevelSelectEvolveBuildGearConfirm : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::UInt32 SelectIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARCONFIRM__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelSelectEvolveBuildGearConfirm* Init(::System::UInt32 nIndex)
		{
			return ((::RPG::GameCore::LevelSelectEvolveBuildGearConfirm*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARCONFIRM_INIT_OFFSET))(this, nIndex);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARCONFIRM_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARCONFIRM_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
