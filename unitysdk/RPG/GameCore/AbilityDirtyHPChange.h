#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

#define RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB50FC60)
#define RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETNEWDIRTYHPRATIO_OFFSET UNITYSDK_OFFSET(0xB50FCB0)
#define RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETNEWDIRTYHPVALUE_OFFSET UNITYSDK_OFFSET(0xB50FD00)
#define RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB50FC10)
#define RPG_GAMECORE_ABILITYDIRTYHPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xB50FBA0)
#define RPG_GAMECORE_ABILITYDIRTYHPCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB50FD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityDirtyHPChange_TypeDefinitionIndex = 52142;

	class AbilityDirtyHPChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::Struct_2_5909FD7779934CCA ChangeParams; // 0x18
		::System::UInt32 _EntityRuntimeID; // 0x148
		::RPG::GameCore::FixPoint _NewRatio; // 0x150
		::RPG::GameCore::FixPoint _NewDirtyHp; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDIRTYHPCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityDirtyHPChange* Init(::System::UInt32 EntityRuntimeID, ::RPG::GameCore::FixPoint newRatio, ::RPG::GameCore::FixPoint newDirtyHp)
		{
			return ((::RPG::GameCore::AbilityDirtyHPChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDIRTYHPCHANGE_INIT_OFFSET))(this, EntityRuntimeID, newRatio, newDirtyHp);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetNewDirtyHPRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETNEWDIRTYHPRATIO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetNewDirtyHPValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETNEWDIRTYHPVALUE_OFFSET))(this);
		}
	};
}
