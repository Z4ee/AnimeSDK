#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGEPERSONASTYLELEVELCONFIG_METHOD_6_3CF2605ADE774B55_OFFSET UNITYSDK_OFFSET(0x18CBEB30)
#define RPG_GAMECORE_ROGUEACTCHANGEPERSONASTYLELEVELCONFIG_METHOD_6_ED5B0571CBCA0C18_OFFSET UNITYSDK_OFFSET(0x18CBE910)
#define RPG_GAMECORE_ROGUEACTCHANGEPERSONASTYLELEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBEA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangePersonaStyleLevelConfig_TypeDefinitionIndex = 18768;

	class RogueActChangePersonaStyleLevelConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEPERSONASTYLELEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_ED5B0571CBCA0C18(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangePersonaStyleLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangePersonaStyleLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEPERSONASTYLELEVELCONFIG_METHOD_6_ED5B0571CBCA0C18_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_3CF2605ADE774B55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangePersonaStyleLevelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangePersonaStyleLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEPERSONASTYLELEVELCONFIG_METHOD_6_3CF2605ADE774B55_OFFSET))(a1, a2);
		}
	};
}
