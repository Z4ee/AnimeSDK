#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELROUNDLEFTCOUNTCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE4D050)
#define RPG_GAMECORE_LEVELROUNDLEFTCOUNTCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE4D000)
#define RPG_GAMECORE_LEVELROUNDLEFTCOUNTCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xCE4CFA0)
#define RPG_GAMECORE_LEVELROUNDLEFTCOUNTCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xCE4D0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRoundLeftCountChange_TypeDefinitionIndex = 53059;

	class LevelRoundLeftCountChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::UInt32 NewRoundCntLeft; // 0x18
		::System::UInt32 OldRoundCntLeft; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROUNDLEFTCOUNTCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelRoundLeftCountChange* Init(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::LevelRoundLeftCountChange*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROUNDLEFTCOUNTCHANGE_INIT_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROUNDLEFTCOUNTCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROUNDLEFTCOUNTCHANGE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
