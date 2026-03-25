#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeTurnLimitType.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_LEVELTURNLIMITCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA992AC0)
#define RPG_GAMECORE_LEVELTURNLIMITCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA992A70)
#define RPG_GAMECORE_LEVELTURNLIMITCHANGE_GET_FROMLIMIT_OFFSET UNITYSDK_OFFSET(0xA992B30)
#define RPG_GAMECORE_LEVELTURNLIMITCHANGE_GET_LIMITTYPE_OFFSET UNITYSDK_OFFSET(0xA992B10)
#define RPG_GAMECORE_LEVELTURNLIMITCHANGE_GET_TOLIMIT_OFFSET UNITYSDK_OFFSET(0xA992B50)
#define RPG_GAMECORE_LEVELTURNLIMITCHANGE_SET_FROMLIMIT_OFFSET UNITYSDK_OFFSET(0xA992B40)
#define RPG_GAMECORE_LEVELTURNLIMITCHANGE_SET_LIMITTYPE_OFFSET UNITYSDK_OFFSET(0xA992B20)
#define RPG_GAMECORE_LEVELTURNLIMITCHANGE_SET_TOLIMIT_OFFSET UNITYSDK_OFFSET(0xA992B60)
#define RPG_GAMECORE_LEVELTURNLIMITCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA992A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnLimitChange_TypeDefinitionIndex = 45709;

	class LevelTurnLimitChange : public ::System::Object
	{
	public:
		::System::UInt32 _FromLimit_k__BackingField; // 0x10
		::System::UInt32 _ToLimit_k__BackingField; // 0x14
		::RPG::GameCore::ChallengeTurnLimitType _LimitType_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::GameCore::ChallengeTurnLimitType limitType, ::System::UInt32 fromLimit, ::System::UInt32 toLimit)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeTurnLimitType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNLIMITCHANGE__CTOR_OFFSET))(this, limitType, fromLimit, toLimit);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNLIMITCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNLIMITCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::ChallengeTurnLimitType get_LimitType()
		{
			return ((::RPG::GameCore::ChallengeTurnLimitType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNLIMITCHANGE_GET_LIMITTYPE_OFFSET))(this);
		}

		::System::Void set_LimitType(::RPG::GameCore::ChallengeTurnLimitType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeTurnLimitType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNLIMITCHANGE_SET_LIMITTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_FromLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNLIMITCHANGE_GET_FROMLIMIT_OFFSET))(this);
		}

		::System::Void set_FromLimit(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNLIMITCHANGE_SET_FROMLIMIT_OFFSET))(this, value);
		}

		::System::UInt32 get_ToLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNLIMITCHANGE_GET_TOLIMIT_OFFSET))(this);
		}

		::System::Void set_ToLimit(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNLIMITCHANGE_SET_TOLIMIT_OFFSET))(this, value);
		}
	};
}
