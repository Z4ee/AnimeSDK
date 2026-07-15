#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYGUIDSKILLLISTCONFIG_METHOD_3_19D0BFD5572FB285_OFFSET UNITYSDK_OFFSET(0x1C161D30)
#define RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYGUIDSKILLLISTCONFIG_METHOD_3_B726BCBCA43B3C09_OFFSET UNITYSDK_OFFSET(0x1C1619B0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYGUIDSKILLLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1619A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierSpecifyGuidSkillListConfig_TypeDefinitionIndex = 17386;

	class TrainPartyModifierSpecifyGuidSkillListConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYGUIDSKILLLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_19D0BFD5572FB285(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierSpecifyGuidSkillListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierSpecifyGuidSkillListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYGUIDSKILLLISTCONFIG_METHOD_3_19D0BFD5572FB285_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B726BCBCA43B3C09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierSpecifyGuidSkillListConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierSpecifyGuidSkillListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYGUIDSKILLLISTCONFIG_METHOD_3_B726BCBCA43B3C09_OFFSET))(a1, a2);
		}
	};
}
