#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_LEVELCOMBOCHANGEEVENT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BDF1980)
#define RPG_GAMECORE_LEVELCOMBOCHANGEEVENT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1BDF1930)
#define RPG_GAMECORE_LEVELCOMBOCHANGEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDF19D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelComboChangeEvent_TypeDefinitionIndex = 54270;

	class LevelComboChangeEvent : public ::System::Object
	{
	public:
		::System::Single DamageAddedRatio; // 0x10
		::System::Single ComboBarRatio; // 0x14
		::System::Int32 ComboGear; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCOMBOCHANGEEVENT__CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCOMBOCHANGEEVENT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCOMBOCHANGEEVENT_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
