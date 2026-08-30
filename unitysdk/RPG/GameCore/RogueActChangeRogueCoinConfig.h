#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINCONFIG_METHOD_6_7D0575C7C96D8C3B_OFFSET UNITYSDK_OFFSET(0x1EE84D60)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINCONFIG_METHOD_6_E1DFB6659B4885BF_OFFSET UNITYSDK_OFFSET(0x1EE84DB0)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE84DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeRogueCoinConfig_TypeDefinitionIndex = 19388;

	class RogueActChangeRogueCoinConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_7D0575C7C96D8C3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINCONFIG_METHOD_6_7D0575C7C96D8C3B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_E1DFB6659B4885BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINCONFIG_METHOD_6_E1DFB6659B4885BF_OFFSET))(a1, a2);
		}
	};
}
