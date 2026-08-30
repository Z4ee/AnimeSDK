#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateAreaType.h"
#include "unitysdk/System/Object.h"

class Class_1_E2DCA4DCC2D0E91F;
namespace System { class String; }

#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPHASEFIXEDITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1C18F230)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPHASEFIXEDITEM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C18F0B0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPHASEFIXEDITEM_GET__PHASEROW_OFFSET UNITYSDK_OFFSET(0x1C18F050)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPHASEFIXEDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C18EBE0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPHASEFIXEDITEM__GETPHASEFIXEDDAMAGE_OFFSET UNITYSDK_OFFSET(0x1C18EC00)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameRoundSettleDmgSourcePhaseFixedItem_TypeDefinitionIndex = 64118;

	class FateGameRoundSettleDmgSourcePhaseFixedItem : public ::System::Object
	{
	public:
		::System::UInt32 _PhaseIndex; // 0x10
		::System::UInt32 _Difficulty; // 0x14
		::RPG::GameCore::FateAreaType _AreaType; // 0x18
		::System::UInt32 _PhaseID; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::FateAreaType a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::FateAreaType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPHASEFIXEDITEM__CTOR_OFFSET))(this, a1, a2, a3, a4);
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

		::Class_1_E2DCA4DCC2D0E91F* get__PhaseRow()
		{
			return ((::Class_1_E2DCA4DCC2D0E91F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPHASEFIXEDITEM_GET__PHASEROW_OFFSET))(this);
		}
	};
}
