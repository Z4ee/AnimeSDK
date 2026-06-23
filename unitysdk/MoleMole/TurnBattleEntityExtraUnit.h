#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TurnBattleUnitBase.h"

#define MOLEMOLE_TURNBATTLEENTITYEXTRAUNIT_CANTRANSFERTONEXTROUND_OFFSET UNITYSDK_OFFSET(0x12BE6700)
#define MOLEMOLE_TURNBATTLEENTITYEXTRAUNIT_GET_ENDROUNDINDEX_OFFSET UNITYSDK_OFFSET(0x12BE66D0)
#define MOLEMOLE_TURNBATTLEENTITYEXTRAUNIT_GET_SOURCEUNIT_OFFSET UNITYSDK_OFFSET(0x12BE66F0)
#define MOLEMOLE_TURNBATTLEENTITYEXTRAUNIT_ONTURNOVER_OFFSET UNITYSDK_OFFSET(0x12BE6990)
#define MOLEMOLE_TURNBATTLEENTITYEXTRAUNIT_ONTURNSTART_OFFSET UNITYSDK_OFFSET(0x12BE6930)
#define MOLEMOLE_TURNBATTLEENTITYEXTRAUNIT_SET_ENDROUNDINDEX_OFFSET UNITYSDK_OFFSET(0x12BE66E0)
#define MOLEMOLE_TURNBATTLEENTITYEXTRAUNIT_TRYEXCHANGEENDROUNDINDEX_OFFSET UNITYSDK_OFFSET(0x12BE6800)
#define MOLEMOLE_TURNBATTLEENTITYEXTRAUNIT__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BE69F0)
#define MOLEMOLE_TURNBATTLEENTITYEXTRAUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x12BE6760)
#define MOLEMOLE_TURNBATTLEENTITYEXTRAUNIT___BASE_ONTURNOVER_OFFSET UNITYSDK_OFFSET(0x12BE6A00)
#define MOLEMOLE_TURNBATTLEENTITYEXTRAUNIT___BASE_ONTURNSTART_OFFSET UNITYSDK_OFFSET(0x12BE6A90)

namespace MoleMole
{
	inline static constexpr unsigned int TurnBattleEntityExtraUnit_TypeDefinitionIndex = 78634;

	class TurnBattleEntityExtraUnit : public ::MoleMole::TurnBattleUnitBase
	{
	public:
		static ::System::Boolean* StaticGet_ExchangeEndRoundIndex()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TurnBattleEntityExtraUnit_TypeDefinitionIndex)->GetStaticField(0xF360);
		}
		::MoleMole::TurnBattleUnitBase* _SourceUnit_k__BackingField; // 0x10
		::System::Int32 _EndRoundIndex_k__BackingField; // 0x18

		::System::Void _ctor(::MoleMole::TurnBattleUnitBase* sourceUnit, ::System::Int32 endRoundIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::TurnBattleUnitBase*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYEXTRAUNIT__CTOR_OFFSET))(this, sourceUnit, endRoundIndex);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYEXTRAUNIT__CCTOR_OFFSET))();
		}

		::System::Int32 get_EndRoundIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYEXTRAUNIT_GET_ENDROUNDINDEX_OFFSET))(this);
		}

		::System::Void set_EndRoundIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYEXTRAUNIT_SET_ENDROUNDINDEX_OFFSET))(this, value);
		}

		::MoleMole::TurnBattleUnitBase* get_SourceUnit()
		{
			return ((::MoleMole::TurnBattleUnitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYEXTRAUNIT_GET_SOURCEUNIT_OFFSET))(this);
		}

		::System::Boolean CanTransferToNextRound(::System::Int32 nextRoundIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYEXTRAUNIT_CANTRANSFERTONEXTROUND_OFFSET))(this, nextRoundIndex);
		}

		::System::Void TryExchangeEndRoundIndex(::MoleMole::TurnBattleEntityExtraUnit* child)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::TurnBattleEntityExtraUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYEXTRAUNIT_TRYEXCHANGEENDROUNDINDEX_OFFSET))(this, child);
		}

		::System::Void OnTurnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYEXTRAUNIT_ONTURNSTART_OFFSET))(this);
		}

		::System::Void OnTurnOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYEXTRAUNIT_ONTURNOVER_OFFSET))(this);
		}

		::System::Void __base_OnTurnOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYEXTRAUNIT___BASE_ONTURNOVER_OFFSET))(this);
		}

		::System::Void __base_OnTurnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYEXTRAUNIT___BASE_ONTURNSTART_OFFSET))(this);
		}
	};
}
