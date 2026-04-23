#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_ADVENTUREABILITYMOVESPEEDATTENUATIONRATIOCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xB560040)
#define RPG_GAMECORE_ADVENTUREABILITYMOVESPEEDATTENUATIONRATIOCHANGE_GETCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0xB560080)
#define RPG_GAMECORE_ADVENTUREABILITYMOVESPEEDATTENUATIONRATIOCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB55FFB0)
#define RPG_GAMECORE_ADVENTUREABILITYMOVESPEEDATTENUATIONRATIOCHANGE_GETORIGINMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0xB560000)
#define RPG_GAMECORE_ADVENTUREABILITYMOVESPEEDATTENUATIONRATIOCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB55FF70)
#define RPG_GAMECORE_ADVENTUREABILITYMOVESPEEDATTENUATIONRATIOCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB55DAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAbilityMoveSpeedAttenuationRatioChange_TypeDefinitionIndex = 52164;

	class AdventureAbilityMoveSpeedAttenuationRatioChange : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint _OriginModifyValue; // 0x10
		::RPG::GameCore::FixPoint _CurrentValue; // 0x18
		::System::UInt32 _EntityRuntimeID; // 0x20
		::RPG::GameCore::FixPoint _ChangeValue; // 0x28

		::System::Void _ctor(::System::UInt32 EntityRuntimeID, ::RPG::GameCore::FixPoint OriginModifyValue, ::RPG::GameCore::FixPoint ChangeValue, ::RPG::GameCore::FixPoint CurrentValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYMOVESPEEDATTENUATIONRATIOCHANGE__CTOR_OFFSET))(this, EntityRuntimeID, OriginModifyValue, ChangeValue, CurrentValue);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYMOVESPEEDATTENUATIONRATIOCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYMOVESPEEDATTENUATIONRATIOCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetOriginModifyValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYMOVESPEEDATTENUATIONRATIOCHANGE_GETORIGINMODIFYVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYMOVESPEEDATTENUATIONRATIOCHANGE_GETCHANGEVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetCurrentValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYMOVESPEEDATTENUATIONRATIOCHANGE_GETCURRENTVALUE_OFFSET))(this);
		}
	};
}
