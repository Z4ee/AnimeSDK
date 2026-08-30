#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYAEONCONFIG_METHOD_6_A4C74D7D0945C395_OFFSET UNITYSDK_OFFSET(0x1EE85650)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYAEONCONFIG_METHOD_6_C173D5A4AD5DC971_OFFSET UNITYSDK_OFFSET(0x1EE85600)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYAEONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE85640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueBuffByAeonConfig_TypeDefinitionIndex = 19359;

	class RogueActGetRogueBuffByAeonConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYAEONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_C173D5A4AD5DC971(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByAeonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByAeonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYAEONCONFIG_METHOD_6_C173D5A4AD5DC971_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_A4C74D7D0945C395(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByAeonConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByAeonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYAEONCONFIG_METHOD_6_A4C74D7D0945C395_OFFSET))(a1, a2);
		}
	};
}
