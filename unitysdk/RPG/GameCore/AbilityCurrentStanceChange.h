#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_GETCHANGERATIO_OFFSET UNITYSDK_OFFSET(0xE46D610)
#define RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xE46D5D0)
#define RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE46D580)
#define RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE46D540)
#define RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xE46D4E0)
#define RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xE46D650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityCurrentStanceChange_TypeDefinitionIndex = 56751;

	class AbilityCurrentStanceChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::FixPoint _ChangeValue; // 0x18
		::RPG::GameCore::FixPoint _ChangeRatio; // 0x20
		::System::UInt32 _EntityRuntimeID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityCurrentStanceChange* Init(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::AbilityCurrentStanceChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_INIT_OFFSET))(this, a1, a2, a3);
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
