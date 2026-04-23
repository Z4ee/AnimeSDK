#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateAreaType.h"
#include "unitysdk/System/Object.h"

class Class_1_EFE58C9DA09981B0;
namespace System { class String; }

#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPHASEFIXEDITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA34B2D0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPHASEFIXEDITEM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA34B140)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPHASEFIXEDITEM_GET__PHASEROW_OFFSET UNITYSDK_OFFSET(0xA34B0E0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPHASEFIXEDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA34AC80)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPHASEFIXEDITEM__GETPHASEFIXEDDAMAGE_OFFSET UNITYSDK_OFFSET(0xA34ACA0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameRoundSettleDmgSourcePhaseFixedItem_TypeDefinitionIndex = 58922;

	class FateGameRoundSettleDmgSourcePhaseFixedItem : public ::System::Object
	{
	public:
		::RPG::GameCore::FateAreaType _AreaType; // 0x10
		::System::UInt32 _Difficulty; // 0x14
		::System::UInt32 _PhaseIndex; // 0x18
		::System::UInt32 _PhaseID; // 0x1C

		::System::Void _ctor(::System::UInt32 phaseID, ::System::UInt32 phaseIndex, ::RPG::GameCore::FateAreaType areaType, ::System::UInt32 difficulty)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::FateAreaType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPHASEFIXEDITEM__CTOR_OFFSET))(this, phaseID, phaseIndex, areaType, difficulty);
		}

		::System::UInt32 _GetPhaseFixedDamage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPHASEFIXEDITEM__GETPHASEFIXEDDAMAGE_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPHASEFIXEDITEM_GET_VALUE_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPHASEFIXEDITEM_GET_DESC_OFFSET))(this);
		}

		::Class_1_EFE58C9DA09981B0* get__PhaseRow()
		{
			return ((::Class_1_EFE58C9DA09981B0*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPHASEFIXEDITEM_GET__PHASEROW_OFFSET))(this);
		}
	};
}
