#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_60A7BA8A302D0436.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_TURNBATTLEUNITBASE_ONADDEDTOROUND_OFFSET UNITYSDK_OFFSET(0x1819FBA0)
#define MOLEMOLE_TURNBATTLEUNITBASE_ONREMOVEDFROMROUND_OFFSET UNITYSDK_OFFSET(0x1819FBF0)
#define MOLEMOLE_TURNBATTLEUNITBASE_ONROUNDSTART_OFFSET UNITYSDK_OFFSET(0x1819FC30)
#define MOLEMOLE_TURNBATTLEUNITBASE_ONTURNOVER_OFFSET UNITYSDK_OFFSET(0x1819FCB0)
#define MOLEMOLE_TURNBATTLEUNITBASE_ONTURNSTART_OFFSET UNITYSDK_OFFSET(0x1819FC70)
#define MOLEMOLE_TURNBATTLEUNITBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1819FCF0)

namespace MoleMole
{
	inline static constexpr unsigned int TurnBattleUnitBase_TypeDefinitionIndex = 53694;

	class TurnBattleUnitBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEUNITBASE__CTOR_OFFSET))(this);
		}

		::System::Void OnAddedToRound(::Enum_3_60A7BA8A302D0436 reason)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_60A7BA8A302D0436))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEUNITBASE_ONADDEDTOROUND_OFFSET))(this, reason);
		}

		::System::Void OnRemovedFromRound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEUNITBASE_ONREMOVEDFROMROUND_OFFSET))(this);
		}

		::System::Void OnRoundStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEUNITBASE_ONROUNDSTART_OFFSET))(this);
		}

		::System::Void OnTurnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEUNITBASE_ONTURNSTART_OFFSET))(this);
		}

		::System::Void OnTurnOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEUNITBASE_ONTURNOVER_OFFSET))(this);
		}
	};
}
