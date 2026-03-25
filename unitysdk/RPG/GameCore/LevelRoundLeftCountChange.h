#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELROUNDLEFTCOUNTCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA990B60)
#define RPG_GAMECORE_LEVELROUNDLEFTCOUNTCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA990B10)
#define RPG_GAMECORE_LEVELROUNDLEFTCOUNTCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xA990AB0)
#define RPG_GAMECORE_LEVELROUNDLEFTCOUNTCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA990BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRoundLeftCountChange_TypeDefinitionIndex = 45710;

	class LevelRoundLeftCountChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::UInt32 OldRoundCntLeft; // 0x18
		::System::UInt32 NewRoundCntLeft; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROUNDLEFTCOUNTCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelRoundLeftCountChange* Init(::System::UInt32 oldCnt, ::System::UInt32 newCnt)
		{
			return ((::RPG::GameCore::LevelRoundLeftCountChange*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROUNDLEFTCOUNTCHANGE_INIT_OFFSET))(this, oldCnt, newCnt);
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
