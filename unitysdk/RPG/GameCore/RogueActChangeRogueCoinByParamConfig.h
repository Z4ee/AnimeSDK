#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYPARAMCONFIG_METHOD_6_5E758E1B1BFB15CF_OFFSET UNITYSDK_OFFSET(0x1D02D620)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYPARAMCONFIG_METHOD_6_FA6BFB359954EE93_OFFSET UNITYSDK_OFFSET(0x1D02D670)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02D660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeRogueCoinByParamConfig_TypeDefinitionIndex = 18863;

	class RogueActChangeRogueCoinByParamConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_5E758E1B1BFB15CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueCoinByParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueCoinByParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYPARAMCONFIG_METHOD_6_5E758E1B1BFB15CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_FA6BFB359954EE93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueCoinByParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueCoinByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYPARAMCONFIG_METHOD_6_FA6BFB359954EE93_OFFSET))(a1, a2);
		}
	};
}
