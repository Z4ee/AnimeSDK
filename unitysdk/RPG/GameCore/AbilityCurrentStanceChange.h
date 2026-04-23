#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_GETCHANGERATIO_OFFSET UNITYSDK_OFFSET(0xB50F990)
#define RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xB50F950)
#define RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB50F900)
#define RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB50F8C0)
#define RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xB50F860)
#define RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB50F9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityCurrentStanceChange_TypeDefinitionIndex = 52121;

	class AbilityCurrentStanceChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::FixPoint _ChangeValue; // 0x18
		::RPG::GameCore::FixPoint _ChangeRatio; // 0x20
		::System::UInt32 _EntityRuntimeID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityCurrentStanceChange* Init(::System::UInt32 EntityRuntimeID, ::RPG::GameCore::FixPoint ChangeValue, ::RPG::GameCore::FixPoint ChangeRatio)
		{
			return ((::RPG::GameCore::AbilityCurrentStanceChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_INIT_OFFSET))(this, EntityRuntimeID, ChangeValue, ChangeRatio);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_GETCHANGEVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_GETCHANGERATIO_OFFSET))(this);
		}
	};
}
