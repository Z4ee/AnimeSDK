#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLEFORCESELECTCONFIG_METHOD_6_60913DE0057BCB68_OFFSET UNITYSDK_OFFSET(0x175C4910)
#define RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLEFORCESELECTCONFIG_METHOD_6_CB5E54B0D2CF2B15_OFFSET UNITYSDK_OFFSET(0x175C46F0)
#define RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLEFORCESELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175C4830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaTriggerStyleForceSelectConfig_TypeDefinitionIndex = 18069;

	class RogueActPersonaTriggerStyleForceSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLEFORCESELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_CB5E54B0D2CF2B15(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaTriggerStyleForceSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaTriggerStyleForceSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLEFORCESELECTCONFIG_METHOD_6_CB5E54B0D2CF2B15_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_60913DE0057BCB68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaTriggerStyleForceSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaTriggerStyleForceSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLEFORCESELECTCONFIG_METHOD_6_60913DE0057BCB68_OFFSET))(a1, a2);
		}
	};
}
