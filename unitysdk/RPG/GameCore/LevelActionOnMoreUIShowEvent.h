#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_LEVELACTIONONMOREUISHOWEVENT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE32210)
#define RPG_GAMECORE_LEVELACTIONONMOREUISHOWEVENT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE321C0)
#define RPG_GAMECORE_LEVELACTIONONMOREUISHOWEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCE32260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelActionOnMoreUIShowEvent_TypeDefinitionIndex = 53049;

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
