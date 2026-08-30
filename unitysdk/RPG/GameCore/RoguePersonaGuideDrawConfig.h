#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPERSONAGUIDEDRAWCONFIG_METHOD_2_E69303F702E880E6_OFFSET UNITYSDK_OFFSET(0x1D40DCE0)
#define RPG_GAMECORE_ROGUEPERSONAGUIDEDRAWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D40DD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaGuideDrawConfig_TypeDefinitionIndex = 17645;

	class RoguePersonaGuideDrawConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAGUIDEDRAWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E69303F702E880E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaGuideDrawConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaGuideDrawConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAGUIDEDRAWCONFIG_METHOD_2_E69303F702E880E6_OFFSET))(a1, a2);
		}
	};
}
