#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_ADVENTUREABILITYMOVESPEEDATTENUATIONRATIOCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xE4B9910)
#define RPG_GAMECORE_ADVENTUREABILITYMOVESPEEDATTENUATIONRATIOCHANGE_GETCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0xE4B9950)
#define RPG_GAMECORE_ADVENTUREABILITYMOVESPEEDATTENUATIONRATIOCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE4B9880)
#define RPG_GAMECORE_ADVENTUREABILITYMOVESPEEDATTENUATIONRATIOCHANGE_GETORIGINMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0xE4B98D0)
#define RPG_GAMECORE_ADVENTUREABILITYMOVESPEEDATTENUATIONRATIOCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4B9840)
#define RPG_GAMECORE_ADVENTUREABILITYMOVESPEEDATTENUATIONRATIOCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xE4B6E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAbilityMoveSpeedAttenuationRatioChange_TypeDefinitionIndex = 56794;

	class AdventureAbilityMoveSpeedAttenuationRatioChange : public ::System::Object
	{
	public:
		::System::UInt32 _EntityRuntimeID; // 0x10
		::RPG::GameCore::FixPoint _OriginModifyValue; // 0x18
		::RPG::GameCore::FixPoint _ChangeValue; // 0x20
		::RPG::GameCore::FixPoint _CurrentValue; // 0x28

		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYMOVESPEEDATTENUATIONRATIOCHANGE__CTOR_OFFSET))(this, a1, a2, a3, a4);
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
