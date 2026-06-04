#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLESELECTCONFIG_METHOD_6_34B27036EE63F874_OFFSET UNITYSDK_OFFSET(0x19AF4E40)
#define RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLESELECTCONFIG_METHOD_6_FDC6EBEA10FF89A9_OFFSET UNITYSDK_OFFSET(0x19AF5060)
#define RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLESELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF4F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaTriggerStyleSelectConfig_TypeDefinitionIndex = 18679;

	class RogueActPersonaTriggerStyleSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLESELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_34B27036EE63F874(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaTriggerStyleSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaTriggerStyleSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLESELECTCONFIG_METHOD_6_34B27036EE63F874_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_FDC6EBEA10FF89A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaTriggerStyleSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaTriggerStyleSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLESELECTCONFIG_METHOD_6_FDC6EBEA10FF89A9_OFFSET))(a1, a2);
		}
	};
}
