#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOMAGICUNITCONFIG_METHOD_6_103DB0AC326C9980_OFFSET UNITYSDK_OFFSET(0x175B3460)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOMAGICUNITCONFIG_METHOD_6_118DC34BD6028BDD_OFFSET UNITYSDK_OFFSET(0x175B3680)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOMAGICUNITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175B35A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeRogueMiracleToMagicUnitConfig_TypeDefinitionIndex = 18051;

	class RogueActChangeRogueMiracleToMagicUnitConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOMAGICUNITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_103DB0AC326C9980(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueMiracleToMagicUnitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueMiracleToMagicUnitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOMAGICUNITCONFIG_METHOD_6_103DB0AC326C9980_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_118DC34BD6028BDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueMiracleToMagicUnitConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueMiracleToMagicUnitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOMAGICUNITCONFIG_METHOD_6_118DC34BD6028BDD_OFFSET))(a1, a2);
		}
	};
}
