#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUECOINCONFIG_METHOD_6_2A0B674C473C7807_OFFSET UNITYSDK_OFFSET(0x1EE84ED0)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUECOINCONFIG_METHOD_6_5E74EE6EEC3B1483_OFFSET UNITYSDK_OFFSET(0x1EE84E80)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUECOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE84EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeRogueMiracleToRogueCoinConfig_TypeDefinitionIndex = 19382;

	class RogueActChangeRogueMiracleToRogueCoinConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUECOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_5E74EE6EEC3B1483(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUECOINCONFIG_METHOD_6_5E74EE6EEC3B1483_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_2A0B674C473C7807(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUECOINCONFIG_METHOD_6_2A0B674C473C7807_OFFSET))(a1, a2);
		}
	};
}
