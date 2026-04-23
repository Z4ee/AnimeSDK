#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/LevelGraphOperationType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_LEVELBATTLEOPERATIONFROMLG_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6CB060)
#define RPG_GAMECORE_LEVELBATTLEOPERATIONFROMLG_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6CB010)
#define RPG_GAMECORE_LEVELBATTLEOPERATIONFROMLG__CTOR_OFFSET UNITYSDK_OFFSET(0xB6CB000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelBattleOperationFromLG_TypeDefinitionIndex = 52294;

	class LevelBattleOperationFromLG : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelGraphOperationType OperationType; // 0x10
		::System::UInt32 Param; // 0x14

		::System::Void _ctor(::RPG::GameCore::LevelGraphOperationType operationType, ::System::UInt32 paramValue)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraphOperationType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBATTLEOPERATIONFROMLG__CTOR_OFFSET))(this, operationType, paramValue);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBATTLEOPERATIONFROMLG_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBATTLEOPERATIONFROMLG_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
