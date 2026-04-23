#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_ABILITYSKILLPERFORMFINISH_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB5165D0)
#define RPG_GAMECORE_ABILITYSKILLPERFORMFINISH_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB516590)
#define RPG_GAMECORE_ABILITYSKILLPERFORMFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0xB516580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilitySkillPerformFinish_TypeDefinitionIndex = 52133;

	class AbilitySkillPerformFinish : public ::System::Object
	{
	public:
		::System::UInt32 _SourceEntityRuntimeID; // 0x10

		::System::Void _ctor(::System::UInt32 nSourceRuntimeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSKILLPERFORMFINISH__CTOR_OFFSET))(this, nSourceRuntimeID);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSKILLPERFORMFINISH_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSKILLPERFORMFINISH_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
