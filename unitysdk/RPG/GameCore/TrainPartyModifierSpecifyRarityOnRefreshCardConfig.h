#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYRARITYONREFRESHCARDCONFIG_METHOD_3_3308207B90924CC8_OFFSET UNITYSDK_OFFSET(0x190ABCB0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYRARITYONREFRESHCARDCONFIG_METHOD_3_BE55ADD912DD334C_OFFSET UNITYSDK_OFFSET(0x190AC070)
#define RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYRARITYONREFRESHCARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190ABCA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierSpecifyRarityOnRefreshCardConfig_TypeDefinitionIndex = 17212;

	class TrainPartyModifierSpecifyRarityOnRefreshCardConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYRARITYONREFRESHCARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BE55ADD912DD334C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierSpecifyRarityOnRefreshCardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierSpecifyRarityOnRefreshCardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYRARITYONREFRESHCARDCONFIG_METHOD_3_BE55ADD912DD334C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3308207B90924CC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierSpecifyRarityOnRefreshCardConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierSpecifyRarityOnRefreshCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYRARITYONREFRESHCARDCONFIG_METHOD_3_3308207B90924CC8_OFFSET))(a1, a2);
		}
	};
}
