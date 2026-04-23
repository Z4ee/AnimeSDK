#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateAreaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_EFE58C9DA09981B0;
namespace System { class String; }

#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCELEFTBATTLEROUNDITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA349860)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCELEFTBATTLEROUNDITEM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA349430)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCELEFTBATTLEROUNDITEM_GET__DMGFACTORBYLEFTBATTLEROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xA3496A0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCELEFTBATTLEROUNDITEM_GET__PHASEROW_OFFSET UNITYSDK_OFFSET(0xA3493D0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCELEFTBATTLEROUNDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA348F70)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCELEFTBATTLEROUNDITEM__GETPHASEFIXEDDAMAGE_OFFSET UNITYSDK_OFFSET(0xA348F90)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameRoundSettleDmgSourceLeftBattleRoundItem_TypeDefinitionIndex = 58918;

	class FateGameRoundSettleDmgSourceLeftBattleRoundItem : public ::System::Object
	{
	public:
		::System::UInt32 _LeftBattleRoundCount; // 0x10
		::RPG::GameCore::FateAreaType _AreaType; // 0x14
		::System::UInt32 _PhaseID; // 0x18
		::System::UInt32 _Difficulty; // 0x1C

		::System::Void _ctor(::System::UInt32 phaseID, ::System::UInt32 leftBattleRoundCount, ::RPG::GameCore::FateAreaType areaType, ::System::UInt32 difficulty)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::FateAreaType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCELEFTBATTLEROUNDITEM__CTOR_OFFSET))(this, phaseID, leftBattleRoundCount, areaType, difficulty);
		}

		::System::UInt32 _GetPhaseFixedDamage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCELEFTBATTLEROUNDITEM__GETPHASEFIXEDDAMAGE_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCELEFTBATTLEROUNDITEM_GET_VALUE_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCELEFTBATTLEROUNDITEM_GET_DESC_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get__DmgFactorByLeftBattleRoundCount()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCELEFTBATTLEROUNDITEM_GET__DMGFACTORBYLEFTBATTLEROUNDCOUNT_OFFSET))(this);
		}

		::Class_1_EFE58C9DA09981B0* get__PhaseRow()
		{
			return ((::Class_1_EFE58C9DA09981B0*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCELEFTBATTLEROUNDITEM_GET__PHASEROW_OFFSET))(this);
		}
	};
}
