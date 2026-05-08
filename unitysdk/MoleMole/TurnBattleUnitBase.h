#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_60A7BA8A302D0436.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_TURNBATTLEUNITBASE_ONADDEDTOROUND_OFFSET UNITYSDK_OFFSET(0x13899CB0)
#define MOLEMOLE_TURNBATTLEUNITBASE_ONREMOVEDFROMROUND_OFFSET UNITYSDK_OFFSET(0x13899D00)
#define MOLEMOLE_TURNBATTLEUNITBASE_ONROUNDSTART_OFFSET UNITYSDK_OFFSET(0x13899D40)
#define MOLEMOLE_TURNBATTLEUNITBASE_ONTURNOVER_OFFSET UNITYSDK_OFFSET(0x13899DC0)
#define MOLEMOLE_TURNBATTLEUNITBASE_ONTURNSTART_OFFSET UNITYSDK_OFFSET(0x13899D80)
#define MOLEMOLE_TURNBATTLEUNITBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x13899E00)

namespace MoleMole
{
	inline static constexpr unsigned int TurnBattleUnitBase_TypeDefinitionIndex = 82705;

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
