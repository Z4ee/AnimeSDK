#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYAEONCONFIG_METHOD_6_0C4427C0C0F41B58_OFFSET UNITYSDK_OFFSET(0x19AE6600)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYAEONCONFIG_METHOD_6_A4C74D7D0945C395_OFFSET UNITYSDK_OFFSET(0x19AE6820)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYAEONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE6740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueBuffByAeonConfig_TypeDefinitionIndex = 18558;

	class RogueActGetRogueBuffByAeonConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYAEONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_0C4427C0C0F41B58(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByAeonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByAeonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYAEONCONFIG_METHOD_6_0C4427C0C0F41B58_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_A4C74D7D0945C395(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByAeonConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByAeonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYAEONCONFIG_METHOD_6_A4C74D7D0945C395_OFFSET))(a1, a2);
		}
	};
}
