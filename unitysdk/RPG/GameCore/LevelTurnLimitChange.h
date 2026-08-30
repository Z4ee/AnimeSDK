#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeTurnLimitType.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_LEVELTURNLIMITCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD2CAA0)
#define RPG_GAMECORE_LEVELTURNLIMITCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DD2CA50)
#define RPG_GAMECORE_LEVELTURNLIMITCHANGE_GET_FROMLIMIT_OFFSET UNITYSDK_OFFSET(0x1DD2CB10)
#define RPG_GAMECORE_LEVELTURNLIMITCHANGE_GET_LIMITTYPE_OFFSET UNITYSDK_OFFSET(0x1DD2CAF0)
#define RPG_GAMECORE_LEVELTURNLIMITCHANGE_GET_TOLIMIT_OFFSET UNITYSDK_OFFSET(0x1DD2CB30)
#define RPG_GAMECORE_LEVELTURNLIMITCHANGE_SET_FROMLIMIT_OFFSET UNITYSDK_OFFSET(0x1DD2CB20)
#define RPG_GAMECORE_LEVELTURNLIMITCHANGE_SET_LIMITTYPE_OFFSET UNITYSDK_OFFSET(0x1DD2CB00)
#define RPG_GAMECORE_LEVELTURNLIMITCHANGE_SET_TOLIMIT_OFFSET UNITYSDK_OFFSET(0x1DD2CB40)
#define RPG_GAMECORE_LEVELTURNLIMITCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD2CA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnLimitChange_TypeDefinitionIndex = 56993;

	class LevelTurnLimitChange : public ::System::Object
	{
	public:
		::System::UInt32 _ToLimit_k__BackingField; // 0x10
		::System::UInt32 _FromLimit_k__BackingField; // 0x14
		::RPG::GameCore::ChallengeTurnLimitType _LimitType_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::GameCore::ChallengeTurnLimitType a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeTurnLimitType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNLIMITCHANGE__CTOR_OFFSET))(this, a1, a2, a3);
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

		::System::Void set_LimitType(::RPG::GameCore::ChallengeTurnLimitType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeTurnLimitType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNLIMITCHANGE_SET_LIMITTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_FromLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNLIMITCHANGE_GET_FROMLIMIT_OFFSET))(this);
		}

		::System::Void set_FromLimit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNLIMITCHANGE_SET_FROMLIMIT_OFFSET))(this, a1);
		}

		::System::UInt32 get_ToLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNLIMITCHANGE_GET_TOLIMIT_OFFSET))(this);
		}

		::System::Void set_ToLimit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNLIMITCHANGE_SET_TOLIMIT_OFFSET))(this, a1);
		}
	};
}
