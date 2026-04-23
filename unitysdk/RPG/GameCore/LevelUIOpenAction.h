#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_LEVELUIOPENACTION_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6E8690)
#define RPG_GAMECORE_LEVELUIOPENACTION_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6E86E0)
#define RPG_GAMECORE_LEVELUIOPENACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB6E8730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelUIOpenAction_TypeDefinitionIndex = 52261;

	class LevelUIOpenAction : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUIOPENACTION__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUIOPENACTION_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUIOPENACTION_GETSOURCERUNTIMEID_OFFSET))(this);
		}
	};
}
