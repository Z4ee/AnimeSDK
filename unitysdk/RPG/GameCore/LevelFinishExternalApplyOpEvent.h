#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/Struct_2_B87448D5E720C3DE.h"

#define RPG_GAMECORE_LEVELFINISHEXTERNALAPPLYOPEVENT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DD24780)
#define RPG_GAMECORE_LEVELFINISHEXTERNALAPPLYOPEVENT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD24820)
#define RPG_GAMECORE_LEVELFINISHEXTERNALAPPLYOPEVENT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DD247D0)
#define RPG_GAMECORE_LEVELFINISHEXTERNALAPPLYOPEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1DD24700)
#define RPG_GAMECORE_LEVELFINISHEXTERNALAPPLYOPEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD24870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelFinishExternalApplyOpEvent_TypeDefinitionIndex = 56990;

	class LevelFinishExternalApplyOpEvent : public ::Class_1_BF7A075734D15E98
	{
	public:
		::Struct_2_B87448D5E720C3DE Operation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFINISHEXTERNALAPPLYOPEVENT__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelFinishExternalApplyOpEvent* Init(::Struct_2_B87448D5E720C3DE a1)
		{
			return ((::RPG::GameCore::LevelFinishExternalApplyOpEvent*(*)(::PVOID, ::Struct_2_B87448D5E720C3DE))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFINISHEXTERNALAPPLYOPEVENT_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFINISHEXTERNALAPPLYOPEVENT_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFINISHEXTERNALAPPLYOPEVENT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFINISHEXTERNALAPPLYOPEVENT_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
