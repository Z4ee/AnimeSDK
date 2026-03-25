#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMODIFIERADDCARDNUMCONFIG_METHOD_3_4D00E349036BAA05_OFFSET UNITYSDK_OFFSET(0x178AC950)
#define RPG_GAMECORE_TRAINPARTYMODIFIERADDCARDNUMCONFIG_METHOD_3_EA56E03050773389_OFFSET UNITYSDK_OFFSET(0x178AC9A0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERADDCARDNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178AC990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierAddCardNumConfig_TypeDefinitionIndex = 16616;

	class TrainPartyModifierAddCardNumConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDCARDNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4D00E349036BAA05(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierAddCardNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierAddCardNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDCARDNUMCONFIG_METHOD_3_4D00E349036BAA05_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EA56E03050773389(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierAddCardNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierAddCardNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDCARDNUMCONFIG_METHOD_3_EA56E03050773389_OFFSET))(a1, a2);
		}
	};
}
