#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUEBUFFCONFIG_METHOD_6_5FC4B62A515DBBC3_OFFSET UNITYSDK_OFFSET(0x18CBF620)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUEBUFFCONFIG_METHOD_6_6CD5E5B8E25015B6_OFFSET UNITYSDK_OFFSET(0x18CBF400)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBF540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeRogueMiracleToRogueBuffConfig_TypeDefinitionIndex = 18614;

	class RogueActChangeRogueMiracleToRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_6CD5E5B8E25015B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUEBUFFCONFIG_METHOD_6_6CD5E5B8E25015B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_5FC4B62A515DBBC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUEBUFFCONFIG_METHOD_6_5FC4B62A515DBBC3_OFFSET))(a1, a2);
		}
	};
}
