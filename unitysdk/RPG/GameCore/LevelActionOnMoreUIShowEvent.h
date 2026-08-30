#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_LEVELACTIONONMOREUISHOWEVENT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE67F6E0)
#define RPG_GAMECORE_LEVELACTIONONMOREUISHOWEVENT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE67F690)
#define RPG_GAMECORE_LEVELACTIONONMOREUISHOWEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xE67F730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelActionOnMoreUIShowEvent_TypeDefinitionIndex = 56983;

	class LevelActionOnMoreUIShowEvent : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELACTIONONMOREUISHOWEVENT__CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELACTIONONMOREUISHOWEVENT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELACTIONONMOREUISHOWEVENT_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
