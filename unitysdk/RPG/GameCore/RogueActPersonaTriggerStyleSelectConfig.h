#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLESELECTCONFIG_METHOD_6_25B2857D4AEFE325_OFFSET UNITYSDK_OFFSET(0x1D3BA5F0)
#define RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLESELECTCONFIG_METHOD_6_FDC6EBEA10FF89A9_OFFSET UNITYSDK_OFFSET(0x1D3BA640)
#define RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLESELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BA630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaTriggerStyleSelectConfig_TypeDefinitionIndex = 19482;

	class RogueActPersonaTriggerStyleSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLESELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_25B2857D4AEFE325(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaTriggerStyleSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaTriggerStyleSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLESELECTCONFIG_METHOD_6_25B2857D4AEFE325_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_FDC6EBEA10FF89A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaTriggerStyleSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaTriggerStyleSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLESELECTCONFIG_METHOD_6_FDC6EBEA10FF89A9_OFFSET))(a1, a2);
		}
	};
}
