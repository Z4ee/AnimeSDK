#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYMOSTBUFFAEONCONFIG_METHOD_6_144345369DF1DE2B_OFFSET UNITYSDK_OFFSET(0x19AE6F10)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYMOSTBUFFAEONCONFIG_METHOD_6_E1A90CB00F5166E4_OFFSET UNITYSDK_OFFSET(0x19AE6EC0)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYMOSTBUFFAEONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE6F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueBuffByMostBuffAeonConfig_TypeDefinitionIndex = 18629;

	class RogueActGetRogueBuffByMostBuffAeonConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYMOSTBUFFAEONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_E1A90CB00F5166E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByMostBuffAeonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByMostBuffAeonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYMOSTBUFFAEONCONFIG_METHOD_6_E1A90CB00F5166E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_144345369DF1DE2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByMostBuffAeonConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByMostBuffAeonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYMOSTBUFFAEONCONFIG_METHOD_6_144345369DF1DE2B_OFFSET))(a1, a2);
		}
	};
}
