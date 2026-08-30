#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELAPPLYBATTLECARDBUFFSELECTIONEVENT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE67FE90)
#define RPG_GAMECORE_LEVELAPPLYBATTLECARDBUFFSELECTIONEVENT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE67FE40)
#define RPG_GAMECORE_LEVELAPPLYBATTLECARDBUFFSELECTIONEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xE67FEE0)
#define RPG_GAMECORE_LEVELAPPLYBATTLECARDBUFFSELECTIONEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xE67FF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelApplyBattleCardBuffSelectionEvent_TypeDefinitionIndex = 56989;

	class LevelApplyBattleCardBuffSelectionEvent : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::Int32 SelectIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAPPLYBATTLECARDBUFFSELECTIONEVENT__CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAPPLYBATTLECARDBUFFSELECTIONEVENT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAPPLYBATTLECARDBUFFSELECTIONEVENT_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::LevelApplyBattleCardBuffSelectionEvent* Init(::System::Int32 a1)
		{
			return ((::RPG::GameCore::LevelApplyBattleCardBuffSelectionEvent*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAPPLYBATTLECARDBUFFSELECTIONEVENT_INIT_OFFSET))(this, a1);
		}
	};
}
