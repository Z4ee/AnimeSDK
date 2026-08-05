#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TurnBattleUnitBase.h"

#define MOLEMOLE_TURNBATTLEROUNDDUMMYUNIT_GET_ROUNDINDEX_OFFSET UNITYSDK_OFFSET(0x190CCBF0)
#define MOLEMOLE_TURNBATTLEROUNDDUMMYUNIT_SET_ROUNDINDEX_OFFSET UNITYSDK_OFFSET(0x190CCC00)
#define MOLEMOLE_TURNBATTLEROUNDDUMMYUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x190CCC10)

namespace MoleMole
{
	inline static constexpr unsigned int TurnBattleRoundDummyUnit_TypeDefinitionIndex = 45451;

	class TurnBattleRoundDummyUnit : public ::MoleMole::TurnBattleUnitBase
	{
	public:
		::System::Int32 _RoundIndex_k__BackingField; // 0x10

		::System::Void _ctor(::System::Int32 roundIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEROUNDDUMMYUNIT__CTOR_OFFSET))(this, roundIndex);
		}

		::System::Int32 get_RoundIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEROUNDDUMMYUNIT_GET_ROUNDINDEX_OFFSET))(this);
		}

		::System::Void set_RoundIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEROUNDDUMMYUNIT_SET_ROUNDINDEX_OFFSET))(this, value);
		}
	};
}
