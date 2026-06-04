#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

class Class_1_B3122B2B681EA91E;

#define RPG_GAMECORE_LEVELAIDREADYFINISH_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE32920)
#define RPG_GAMECORE_LEVELAIDREADYFINISH_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE328D0)
#define RPG_GAMECORE_LEVELAIDREADYFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0xCE32970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAidReadyFinish_TypeDefinitionIndex = 53051;

	class LevelAidReadyFinish : public ::System::Object
	{
	public:
		::Class_1_B3122B2B681EA91E* Detail; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAIDREADYFINISH__CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAIDREADYFINISH_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAIDREADYFINISH_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
