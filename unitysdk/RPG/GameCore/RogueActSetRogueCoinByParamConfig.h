#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTSETROGUECOINBYPARAMCONFIG_METHOD_6_DDCF60B031404F5E_OFFSET UNITYSDK_OFFSET(0x18CD43D0)
#define RPG_GAMECORE_ROGUEACTSETROGUECOINBYPARAMCONFIG_METHOD_6_F8A47AB36FE437CB_OFFSET UNITYSDK_OFFSET(0x18CD45F0)
#define RPG_GAMECORE_ROGUEACTSETROGUECOINBYPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD4510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActSetRogueCoinByParamConfig_TypeDefinitionIndex = 18621;

	class RogueActSetRogueCoinByParamConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETROGUECOINBYPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_DDCF60B031404F5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActSetRogueCoinByParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActSetRogueCoinByParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETROGUECOINBYPARAMCONFIG_METHOD_6_DDCF60B031404F5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_F8A47AB36FE437CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActSetRogueCoinByParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActSetRogueCoinByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETROGUECOINBYPARAMCONFIG_METHOD_6_F8A47AB36FE437CB_OFFSET))(a1, a2);
		}
	};
}
