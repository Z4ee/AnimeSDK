#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMODIFIERUPDATEALLPASSENGERSTATCONFIG_METHOD_3_012524A61FECDA50_OFFSET UNITYSDK_OFFSET(0x1D5DEDF0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERUPDATEALLPASSENGERSTATCONFIG_METHOD_3_E4D8DA2E6CA22454_OFFSET UNITYSDK_OFFSET(0x1D5DF1D0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERUPDATEALLPASSENGERSTATCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DEDE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierUpdateAllPassengerStatConfig_TypeDefinitionIndex = 17892;

	class TrainPartyModifierUpdateAllPassengerStatConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERUPDATEALLPASSENGERSTATCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E4D8DA2E6CA22454(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierUpdateAllPassengerStatConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierUpdateAllPassengerStatConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERUPDATEALLPASSENGERSTATCONFIG_METHOD_3_E4D8DA2E6CA22454_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_012524A61FECDA50(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierUpdateAllPassengerStatConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierUpdateAllPassengerStatConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERUPDATEALLPASSENGERSTATCONFIG_METHOD_3_012524A61FECDA50_OFFSET))(a1, a2);
		}
	};
}
