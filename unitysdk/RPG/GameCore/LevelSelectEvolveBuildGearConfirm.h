#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARCONFIRM_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE69A0E0)
#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARCONFIRM_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE69A090)
#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARCONFIRM_INIT_OFFSET UNITYSDK_OFFSET(0xE69A040)
#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARCONFIRM__CTOR_OFFSET UNITYSDK_OFFSET(0xE69A130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelSelectEvolveBuildGearConfirm_TypeDefinitionIndex = 57001;

	class LevelSelectEvolveBuildGearConfirm : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::UInt32 SelectIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARCONFIRM__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelSelectEvolveBuildGearConfirm* Init(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelSelectEvolveBuildGearConfirm*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARCONFIRM_INIT_OFFSET))(this, a1);
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
