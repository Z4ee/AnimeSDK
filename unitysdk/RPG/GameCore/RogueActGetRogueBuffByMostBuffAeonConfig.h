#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYMOSTBUFFAEONCONFIG_METHOD_6_144345369DF1DE2B_OFFSET UNITYSDK_OFFSET(0x175B6F60)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYMOSTBUFFAEONCONFIG_METHOD_6_C5BCE8C0D9B0FB3E_OFFSET UNITYSDK_OFFSET(0x175B6D40)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYMOSTBUFFAEONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175B6E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueBuffByMostBuffAeonConfig_TypeDefinitionIndex = 18017;

	class RogueActGetRogueBuffByMostBuffAeonConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYMOSTBUFFAEONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_C5BCE8C0D9B0FB3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByMostBuffAeonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByMostBuffAeonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYMOSTBUFFAEONCONFIG_METHOD_6_C5BCE8C0D9B0FB3E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_144345369DF1DE2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByMostBuffAeonConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByMostBuffAeonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYMOSTBUFFAEONCONFIG_METHOD_6_144345369DF1DE2B_OFFSET))(a1, a2);
		}
	};
}
