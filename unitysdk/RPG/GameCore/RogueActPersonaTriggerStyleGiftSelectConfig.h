#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLEGIFTSELECTCONFIG_METHOD_6_44445E5B97875386_OFFSET UNITYSDK_OFFSET(0x18CD0690)
#define RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLEGIFTSELECTCONFIG_METHOD_6_68665A3EEE64EE13_OFFSET UNITYSDK_OFFSET(0x18CD08B0)
#define RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLEGIFTSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD07D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaTriggerStyleGiftSelectConfig_TypeDefinitionIndex = 18715;

	class RogueActPersonaTriggerStyleGiftSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLEGIFTSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_44445E5B97875386(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaTriggerStyleGiftSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaTriggerStyleGiftSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLEGIFTSELECTCONFIG_METHOD_6_44445E5B97875386_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_68665A3EEE64EE13(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaTriggerStyleGiftSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaTriggerStyleGiftSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLEGIFTSELECTCONFIG_METHOD_6_68665A3EEE64EE13_OFFSET))(a1, a2);
		}
	};
}
