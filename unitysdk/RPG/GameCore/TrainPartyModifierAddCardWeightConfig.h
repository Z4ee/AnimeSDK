#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMODIFIERADDCARDWEIGHTCONFIG_METHOD_3_53222C0D151EE8B5_OFFSET UNITYSDK_OFFSET(0x178ACA20)
#define RPG_GAMECORE_TRAINPARTYMODIFIERADDCARDWEIGHTCONFIG_METHOD_3_ADAD932C524F31B9_OFFSET UNITYSDK_OFFSET(0x178ACA70)
#define RPG_GAMECORE_TRAINPARTYMODIFIERADDCARDWEIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178ACA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierAddCardWeightConfig_TypeDefinitionIndex = 16614;

	class TrainPartyModifierAddCardWeightConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDCARDWEIGHTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_53222C0D151EE8B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierAddCardWeightConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierAddCardWeightConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDCARDWEIGHTCONFIG_METHOD_3_53222C0D151EE8B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ADAD932C524F31B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierAddCardWeightConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierAddCardWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDCARDWEIGHTCONFIG_METHOD_3_ADAD932C524F31B9_OFFSET))(a1, a2);
		}
	};
}
