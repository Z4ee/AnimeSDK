#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

class Class_1_B3122B2B681EA91E;

#define RPG_GAMECORE_LEVELAIDREADYSTART_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BDE8C30)
#define RPG_GAMECORE_LEVELAIDREADYSTART_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1BDE8BE0)
#define RPG_GAMECORE_LEVELAIDREADYSTART__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDE8BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAidReadyStart_TypeDefinitionIndex = 54263;

	class LevelAidReadyStart : public ::System::Object
	{
	public:
		::Class_1_B3122B2B681EA91E* Detail; // 0x10

		::System::Void _ctor(::Class_1_B3122B2B681EA91E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B3122B2B681EA91E*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAIDREADYSTART__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAIDREADYSTART_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAIDREADYSTART_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
